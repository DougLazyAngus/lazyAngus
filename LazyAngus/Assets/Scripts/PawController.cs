using UnityEngine;
using System.Collections;

public class PawController : MonoBehaviour {
	enum SwipePhase {
		NONE = 0,
		EXTENDING,
		EXTENDED_PAUSE,
		NUM_PHASES,
	};

	private Vector3 nextSwipeLocationCat;
	private Vector3 currentSwipeLocationCat;

	private SwipePhase swipePhase;

	private float timeStartNextSwipe;
	private float extendedPauseStarted;

	public GameObject normalPawArtGameObject;
	public GameObject dangerPawArtGameObject;

	public GameObject bigPawArtGameObject;
	public GameObject bigDangerPawArtGameObject;

	public CircleCollider2D normalCollider;
	public CircleCollider2D bigCollider;
	public float debugTimer;

	private float swipeSpeed;
	private float initialPauseLength;

	private int killsThisSwipe;

	bool registerdForEvents;

	public Transform pawHomeCatTransform;
	public Transform shoulderJointCatTransform;
	float pawHomeCatTransformMagnitude;

	public GameObject timerWidgetPrototype;
	TimerWidget timerWidget;
	
	void Awake() {
		registerdForEvents = false;
	}

	void Start() {
		swipePhase = SwipePhase.NONE;

		swipeSpeed = TweakableParams.baseSwipeSpeed;
		initialPauseLength = TweakableParams.swipeInitialPause;

		transform.localPosition = pawHomeCatTransform.localPosition;
		pawHomeCatTransformMagnitude = pawHomeCatTransform.localPosition.magnitude;


		normalCollider.radius = TweakableParams.normalPawRadius;
		bigCollider.radius = normalCollider.radius * TweakableParams.bigPawsMultiplier;

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
			initialPauseLength = (TweakableParams.fastPawsPauseMultiplier * 
			                      TweakableParams.swipeInitialPause);

		} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
			swipeSpeed = TweakableParams.baseSwipeSpeed;
			initialPauseLength = TweakableParams.swipeInitialPause;			
		}

		if (newType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS || 
		    oldType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			UpdatePawState();
		}
	}

	void Update() {
		if (timeStartNextSwipe != 0 &&
			Time.time > timeStartNextSwipe) {
			timeStartNextSwipe = 0;
			currentSwipeLocationCat = nextSwipeLocationCat;
			SetPhase (SwipePhase.EXTENDING);
		}

		UpdateTimerWidget ();

		switch (swipePhase) {
		case SwipePhase.EXTENDING:
		{
			if (MovePawTowards (currentSwipeLocationCat)) {
				RemoveTimer ();
				SetPhase(SwipePhase.EXTENDED_PAUSE);
			}
			break;
		}
		case SwipePhase.EXTENDED_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - extendedPauseStarted > TweakableParams.swipeExtendedPause) {
				SetPhase(SwipePhase.NONE);
			}
			break;
		}
		case SwipePhase.NONE: 
			MovePawTowards (pawHomeCatTransform.localPosition);
			break;
		}
	}
	
	void SetPhase(SwipePhase newPhase) {
		SwipePhase oldPhase = swipePhase;
		swipePhase = newPhase;

		if (oldPhase == SwipePhase.EXTENDED_PAUSE) {
			if (killsThisSwipe > 1) {
				DeadMouseRelay.instance.HandleMultiKill(killsThisSwipe, 
				                                        transform.position);
			}
			killsThisSwipe = 0;
		}

		if (newPhase == SwipePhase.EXTENDED_PAUSE) {
			extendedPauseStarted = Time.time;
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
			normalPawArtGameObject.SetActive (false);
			normalCollider.gameObject.SetActive (false);

			bigCollider.gameObject.SetActive (true);

			if (swipePhase == SwipePhase.EXTENDED_PAUSE) {
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
			
			if (swipePhase == SwipePhase.EXTENDED_PAUSE) {
				dangerPawArtGameObject.SetActive (true);
				normalPawArtGameObject.SetActive (false);
				normalCollider.isTrigger = true;
			} else {
				dangerPawArtGameObject.SetActive (false);
				normalPawArtGameObject.SetActive (true);
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

		if (actualDistance == 0) { 
			return true;
		}

		Vector3 newPawLocationCat;
		bool doneMoving;

		if (actualDistance <= moveDistance) {
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
		nextSwipeLocationCat = location;

		if (TweakableParams.swipeCancelsCurrentSwipe || timeStartNextSwipe == 0) {
			timeStartNextSwipe = Time.time + TweakableParams.swipeInitialPause;
		}
	}

	public void CancelSwipe() {
		RemoveTimer ();
		SetPhase(SwipePhase.NONE);
	}

	public void AddTimer() {
		RemoveTimer();
		GameObject timerWidgetGameObject = Instantiate(timerWidgetPrototype,
		                                    new Vector3(0, 0, 0),
		                                    Quaternion.identity) as GameObject;

		timerWidget = timerWidgetGameObject.GetComponent<TimerWidget> ();
		timerWidget.Configure (initialPauseLength, 
		                       GetTimerWidgetPosition());
	}

	Vector3 GetTimerWidgetPosition() {
		return transform.parent.transform.TransformVector (nextSwipeLocationCat);
	}

	bool ShouldHaveTimer() {
		return (Time.time < timeStartNextSwipe);
	}

	void UpdateTimerWidget () {
		if (ShouldHaveTimer ()) {
			if (timerWidget == null) {
				AddTimer ();
			}
			timerWidget.UpdatePosition (GetTimerWidgetPosition());
		} else {
			if (timerWidget != null) {
				RemoveTimer ();
			}
		}
	}

	public void RemoveTimer() {
			if (timerWidget != null) {
				Object.Destroy (timerWidget.gameObject);
				timerWidget = null;
		}
	}

	public void CountKill() {
		killsThisSwipe += 1;
	}
}
