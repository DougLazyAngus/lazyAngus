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
		swipePhase = SwipePhase.SWIPE_NONE;

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
		UpdateTimerWidgetPosition ();

		switch (swipePhase) {
		case SwipePhase.SWIPE_INITIAL_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > initialPauseLength) {
				SetPhase(SwipePhase.SWIPE_EXTENDING);
			} else {
				MovePawTowards (pawHomeCatTransform.localPosition);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDING:
		{
			if (MovePawTowards (swipeLocationCat)) {
				RemoveTimer ();
				SetPhase(SwipePhase.SWIPE_EXTENDED_PAUSE);
			}
			break;
		}
		case SwipePhase.SWIPE_EXTENDED_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > TweakableParams.swipeExtendedPause) {
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
			normalPawArtGameObject.SetActive (false);
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
		debugTimer = Time.time;
		SetPhase (SwipePhase.SWIPE_INITIAL_PAUSE);

		AddTimer ();
	}

	public void CancelSwipe() {
		RemoveTimer ();
		SetPhase(SwipePhase.SWIPE_RETRACTING);
	}

	public void AddTimer() {
		RemoveTimer();
		GameObject timerWidgetGameObject = Instantiate(timerWidgetPrototype,
		                                    new Vector3(0, 0, 0),
		                                    Quaternion.identity) as GameObject;

		timerWidget = timerWidgetGameObject.GetComponent<TimerWidget> ();
		timerWidget.Configure (initialPauseLength, 
		                       GetTimerWidgetPosition());
		UpdateTimerWidgetPosition ();
	}

	Vector3 GetTimerWidgetPosition() {
		return transform.parent.transform.TransformVector (swipeLocationCat);
	}

	void UpdateTimerWidgetPosition () {
		if (timerWidget == null) {
			return;
		}
		timerWidget.UpdatePosition (GetTimerWidgetPosition());
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
