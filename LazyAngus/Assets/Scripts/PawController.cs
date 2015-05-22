using UnityEngine;
using System.Collections;

public class PawController : MonoBehaviour {
	enum SwipePhase {
		SWIPE_NONE = 0,
		SWIPE_INITIAL_PAUSE,
		SWIPE_EXTENDING,
		SWIPE_EXTENDED_PAUSE,
		SWIPE_RETRACTING,
		NUM_PHASES,
	};

	private Vector3 swipeLocationCat;
	private Vector3 homeLocationCat;
	private SwipePhase swipePhase;
	private float pauseStarted;

	public float swipeSpeed = 7.0f;
	public float swipeInitialPause = 0.3f;
	public float swipeExtendedPause = 0.1f;

	public Material normalFurRef;
	public Material dangerFurRef;

	private Collider model;

	void Start() {
		swipePhase = SwipePhase.SWIPE_NONE;
		homeLocationCat = transform.localPosition;
		
		model = GetComponentInChildren<Collider> ();
		model.isTrigger = false;
		
		Rigidbody rb = GetComponentInChildren<Rigidbody> ();
		rb.freezeRotation = true;
		rb.constraints = RigidbodyConstraints.FreezeAll;
	}

	void Update() {
		switch (swipePhase) {
		case SwipePhase.SWIPE_INITIAL_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > swipeInitialPause) {
				SetPhase(SwipePhase.SWIPE_EXTENDING);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDING:
		{
			if (MoveTowards (swipeLocationCat)) {
				SetPhase(SwipePhase.SWIPE_EXTENDED_PAUSE);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDED_PAUSE:
			{
				float timeNow = Time.time;
				if (timeNow - pauseStarted > swipeExtendedPause) {
				SetPhase(SwipePhase.SWIPE_RETRACTING);
			}
				break;
			}
		case SwipePhase.SWIPE_RETRACTING:
			{
				if (MoveTowards (homeLocationCat)) {
					SetPhase(SwipePhase.SWIPE_NONE);
				}
				break;
			}
		}

	}

	void SetPhase(SwipePhase phase) {
		swipePhase = phase;
		if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE || 
			swipePhase == SwipePhase.SWIPE_INITIAL_PAUSE) {
			pauseStarted = Time.time;
		}
		if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
			model.isTrigger = true;
			SetMaterial(dangerFurRef);
		} else {
			model.isTrigger = false;
			SetMaterial(normalFurRef);
		}
	}

	void SetMaterial(Material material) {
		foreach (Transform t in transform) {
			if (t.gameObject && 
			    t.gameObject.GetComponent<Renderer>()) {
				t.gameObject.GetComponent<Renderer>().material = material;
			}
		}
	}

	bool MoveTowards(Vector3 targetLocation) {
		Vector3 currrentLocation = transform.localPosition;
		Vector3 direction = targetLocation - currrentLocation;
		float deltaTime = Time.deltaTime;
		float moveDistance = swipeSpeed * deltaTime;
		float actualDistance = direction.magnitude;
		if (actualDistance < moveDistance) {
			transform.localPosition = targetLocation;
			return true;
		} else {
			Vector3 moveDelta = direction * moveDistance / actualDistance;
			transform.localPosition = transform.localPosition + moveDelta;
			return false;
		}
	}

	public void Swipe(Vector3 location) {
		swipeLocationCat = location;
		pauseStarted = Time.time;
		SetPhase(SwipePhase.SWIPE_INITIAL_PAUSE);
	}

	public void CancelSwipe() {
		SetPhase(SwipePhase.SWIPE_RETRACTING);
	}
}
