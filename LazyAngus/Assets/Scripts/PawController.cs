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

	public GameObject normalPawSpriteGameObject;
	public GameObject dangerPawSpriteGameObject;
	public GameObject pawColliderGameObject;

	private Collider2D model;
	private float swipeSpeed;

	private int killsThisSwipe;
	private GameController gameController;

	bool registeredForEvents;
	BoostConfig boostConfig;
	TweakableParams tweakableParams;

	public Transform shoulderJointCatTransform;
	public Transform pawHomeCatTransform;

	void Awake() {
		registeredForEvents = false;
	}

	void Start() {
		gameController = GameController.instance;
		boostConfig = BoostConfig.instance;
		tweakableParams = TweakableParams.instance;

		swipePhase = SwipePhase.SWIPE_NONE;

		model = GetComponentInChildren<Collider2D> ();
		model.isTrigger = false;
		
		swipeSpeed = tweakableParams.baseSwipeSpeed;

		pawColliderGameObject.transform.localPosition = pawHomeCatTransform.localPosition;

		RegisterForEvents ();
		UpdatePawDangerState ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
		registeredForEvents = true;
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
		}
	}

	void OnBoostActivationChanged() {
		if (boostConfig.activeBoost == BoostConfig.BoostType.BOOST_TYPE_ENERGY) {
			swipeSpeed = (tweakableParams.energyBoostSwipeSpeedMultiplier * 
			              tweakableParams.baseSwipeSpeed);
		} else {
			swipeSpeed = tweakableParams.baseSwipeSpeed;
		}
	}

	void Update() {
		switch (swipePhase) {
		case SwipePhase.SWIPE_INITIAL_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - pauseStarted > tweakableParams.swipeInitialPause) {
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
			if (timeNow - pauseStarted > tweakableParams.swipeInitialPause) {
					SetPhase(SwipePhase.SWIPE_RETRACTING);
				}
				break;
			}
		case SwipePhase.SWIPE_RETRACTING: 
			if (MoveTowards (pawHomeCatTransform.localPosition)) {
				SetPhase(SwipePhase.SWIPE_NONE);
			}
			break;
		}
	}
	
	void SetPhase(SwipePhase newPhase) {
		SwipePhase oldPhase = swipePhase;
		swipePhase = newPhase;

		if (oldPhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
			gameController.LogKillsPerSwipe (killsThisSwipe);
			killsThisSwipe = 0;
		}

		if (newPhase == SwipePhase.SWIPE_EXTENDED_PAUSE || 
			newPhase == SwipePhase.SWIPE_INITIAL_PAUSE) {
			pauseStarted = Time.time;
		}

		UpdatePawDangerState ();
	}

	void UpdatePawDangerState() {
		if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
			model.isTrigger = true;
			dangerPawSpriteGameObject.SetActive(true);
			normalPawSpriteGameObject.SetActive(false);
		} else {
			model.isTrigger = false;
			normalPawSpriteGameObject.SetActive(true);
			dangerPawSpriteGameObject.SetActive(false);
		}
	}

	bool MoveTowards(Vector3 targetLocation) {
		targetLocation.z = 0.0f;

		Vector3 currrentLocation = pawColliderGameObject.transform.localPosition;
		Vector3 direction = targetLocation - currrentLocation;
		float deltaTime = Time.deltaTime;
		float moveDistance = swipeSpeed * deltaTime;
		float actualDistance = direction.magnitude;
		if (actualDistance < moveDistance) {
			pawColliderGameObject.transform.localPosition = targetLocation;
			return true;
		} else {
			Vector3 moveDelta = direction * moveDistance / actualDistance;
			pawColliderGameObject.transform.localPosition = pawColliderGameObject.transform.localPosition + moveDelta;
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

	public void CountKill(MouseMove mouseMove) {
		killsThisSwipe += 1;
	}
}
