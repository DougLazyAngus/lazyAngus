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

	private SwipePhase swipePhase;
	private float pauseStarted;

	public GameObject normalPawArtGameObject;
	public GameObject dangerPawArtGameObject;

	public GameObject bigPawArtGameObject;
	public GameObject bigDangerPawArtGameObject;

	public Collider2D normalCollider;
	public Collider2D bigCollider;

	private float swipeSpeed;

	private int killsThisSwipe;

	bool registerdForEvents;

	public Transform pawHomeCatTransform;
	public Transform shoulderJointCatTransform;
	float pawHomeCatTransformMagnitude;

	void Awake() {
		registerdForEvents = false;
	}

	void Start() {
		swipePhase = SwipePhase.SWIPE_NONE;

		swipeSpeed = TweakableParams.baseSwipeSpeed;

		Vector3 localHomePos = pawHomeCatTransform.position;
		localHomePos.z = 0f;
		pawHomeCatTransform.position = localHomePos;
		pawHomeCatTransformMagnitude = pawHomeCatTransform.position.magnitude;

		transform.localPosition = pawHomeCatTransform.localPosition;

		RegisterForEvents ();
		UpdatePawState ();
		UpdateArmRotation ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		if (newType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
			swipeSpeed = (TweakableParams.fastPawsSwipeSpeedMultiplier * 
			              TweakableParams.baseSwipeSpeed);
		} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
			swipeSpeed = TweakableParams.baseSwipeSpeed;
		}

		if (newType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS || 
		    oldType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			UpdatePawState();
		}
	}

	void Update() {
		switch (swipePhase) {
		case SwipePhase.SWIPE_INITIAL_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > TweakableParams.swipeInitialPause) {
				SetPhase(SwipePhase.SWIPE_EXTENDING);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDING:
		{
			if (MovePawTowards (swipeLocationCat)) {
				SetPhase(SwipePhase.SWIPE_EXTENDED_PAUSE);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDED_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > TweakableParams.swipeInitialPause) {
				SetPhase(SwipePhase.SWIPE_RETRACTING);
			}
			break;
		}
		case SwipePhase.SWIPE_RETRACTING: 
			if (MovePawTowards (pawHomeCatTransform.localPosition)) {
				SetPhase(SwipePhase.SWIPE_NONE);
			}
			break;
		}
	}
	
	void SetPhase(SwipePhase newPhase) {
		SwipePhase oldPhase = swipePhase;
		swipePhase = newPhase;

		if (oldPhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
			if (killsThisSwipe > 1) {
				DeadMouseRelay.instance.HandleMultiKill(killsThisSwipe, 
				                                        transform.position);
			}
			killsThisSwipe = 0;
		}

		if (newPhase == SwipePhase.SWIPE_EXTENDED_PAUSE || 
			newPhase == SwipePhase.SWIPE_INITIAL_PAUSE) {
			pauseStarted = Time.time;
		}

		if (newPhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
			PlayRandomSound ();
		}

		UpdatePawState ();
	}

	void PlayRandomSound() {
		SFXPlayer.instance.PlayRandom(SFXPlayer.instance.slapIds,
		                              0.2f);
	}

	void UpdatePawState() {
		if (BoostConfig.instance.activeBoost == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			dangerPawArtGameObject.SetActive (false);
			normalCollider.gameObject.SetActive (false);

			bigCollider.gameObject.SetActive (true);

			if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
				bigDangerPawArtGameObject.SetActive (true);
				bigPawArtGameObject.SetActive (false);
				bigCollider.isTrigger = true;
			} else {
				bigDangerPawArtGameObject.SetActive (false);
				bigPawArtGameObject.SetActive (true);
				bigCollider.isTrigger = false;
			}
		} else {
			bigDangerPawArtGameObject.SetActive (false);
			bigPawArtGameObject.SetActive (false);
			bigCollider.gameObject.SetActive (false);
			
			normalCollider.gameObject.SetActive (true);
			
			if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
				dangerPawArtGameObject.SetActive (true);
				normalCollider.isTrigger = true;
			} else {
				dangerPawArtGameObject.SetActive (false);
				normalCollider.isTrigger = false;
			}
		}
	}

	bool MovePawTowards(Vector3 targetLocationCat) {
		targetLocationCat.z = 0.0f;
		// This should never be closer to the cat than the home pos itself.  If so, just 
		// ignore.
		float targetLocationCatMagnitude = targetLocationCat.magnitude;
		if (targetLocationCatMagnitude < pawHomeCatTransformMagnitude) {
			return true;
		}

		Vector3 pawLocationCat = transform.localPosition;


		Vector3 directionCat = targetLocationCat - pawLocationCat;
		float deltaTime = Time.deltaTime;
		float moveDistance = swipeSpeed * deltaTime;
		float actualDistance = directionCat.magnitude;

		Vector3 newPawLocationCat;
		bool doneMoving;

		if (actualDistance < moveDistance) {
			newPawLocationCat = targetLocationCat;
			doneMoving = true;
		} else {
			Vector3 moveDelta = directionCat * moveDistance / actualDistance;
			newPawLocationCat = pawLocationCat + moveDelta;
			doneMoving = false;
		}

		transform.localPosition = newPawLocationCat;
		UpdateArmRotation ();
		return doneMoving;
	}


	void UpdateArmRotation() {
		Vector3 shoulderToPaw = transform.localPosition - shoulderJointCatTransform.localPosition;
		float rotateRadians = Mathf.Atan2(shoulderToPaw.y, shoulderToPaw.x);
		transform.localRotation = Quaternion.Euler (0f, 0f, rotateRadians * Mathf.Rad2Deg);
	}

	public void Swipe(Vector3 location) {
		swipeLocationCat = location;
		pauseStarted = Time.time;
		SetPhase(SwipePhase.SWIPE_INITIAL_PAUSE);
	}

	public void CancelSwipe() {
		SetPhase(SwipePhase.SWIPE_RETRACTING);
	}

	public void CountKill() {
		killsThisSwipe += 1;
	}
}
