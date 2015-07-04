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

	public GameObject bigPawSpriteGameObject;
	public GameObject bigDangerPawSpriteGameObject;

	public Collider2D normalCollider;
	public Collider2D bigCollider;

	private float swipeSpeed;

	private int killsThisSwipe;
	private GameController gameController;

	bool registerdForEvents;
	BoostConfig boostConfig;
	TweakableParams tweakableParams;

	public Transform pawHomeCatTransform;
	public Transform shoulderJointCatTransform;
	float pawHomeCatTransformMagnitude;
	
	public AudioSource [] audioSources;

	void Awake() {
		registerdForEvents = false;
	}

	void Start() {
		gameController = GameController.instance;
		boostConfig = BoostConfig.instance;
		tweakableParams = TweakableParams.instance;

		swipePhase = SwipePhase.SWIPE_NONE;

		swipeSpeed = tweakableParams.baseSwipeSpeed;

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
		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		if (newType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
			swipeSpeed = (tweakableParams.fastPawsSwipeSpeedMultiplier * 
			              tweakableParams.baseSwipeSpeed);
		} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
			swipeSpeed = tweakableParams.baseSwipeSpeed;
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
			if (timeNow - pauseStarted > tweakableParams.swipeInitialPause) {
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
			if (timeNow - pauseStarted > tweakableParams.swipeInitialPause) {
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
			gameController.LogKillsPerSwipe (killsThisSwipe);
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
		int index = Random.Range (0, audioSources.Length);
		if (!SoundController.instance.sfxMuted) {
			audioSources [index].Play ();
		
		}
	}

	void UpdatePawState() {
		if (boostConfig.activeBoost == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			dangerPawSpriteGameObject.SetActive (false);
			normalCollider.gameObject.SetActive (false);

			bigCollider.gameObject.SetActive (true);

			if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
				bigDangerPawSpriteGameObject.SetActive (true);
				bigPawSpriteGameObject.SetActive (false);
				bigCollider.isTrigger = true;
			} else {
				bigDangerPawSpriteGameObject.SetActive (false);
				bigPawSpriteGameObject.SetActive (true);
				bigCollider.isTrigger = false;
			}
		} else {
			bigDangerPawSpriteGameObject.SetActive (false);
			bigPawSpriteGameObject.SetActive (false);
			bigCollider.gameObject.SetActive (false);
			
			normalCollider.gameObject.SetActive (true);
			
			if (swipePhase == SwipePhase.SWIPE_EXTENDED_PAUSE) {
				dangerPawSpriteGameObject.SetActive (true);
				normalCollider.isTrigger = true;
			} else {
				dangerPawSpriteGameObject.SetActive (false);
				normalCollider.isTrigger = false;
			}
		}
	}

	bool MovePawTowards(Vector3 targetLocationCat) {
		int foo = 5;
		if (TimeController.instance.paused) {
			foo = foo * foo;
		}

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

	public void CountKill(MouseMove mouseMove) {
		killsThisSwipe += 1;
	}
}
