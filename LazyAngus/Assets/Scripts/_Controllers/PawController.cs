using UnityEngine;
using System.Collections;

public class PawController : MonoBehaviour {
	enum SwipePhase {
		NONE = 0,
		EXTENDING,
		EXTENDED_PAUSE,
		RETRACTING,
		NUM_PHASES,
	};

	private Vector3 nextSwipeLocationCat;
	private Vector3 currentSwipeLocationCat;

	private SwipePhase swipePhase;

	private float timeStartNextSwipe;
	private float extendedPauseStarted;

	public GameObject pawArtGameObject;
	public GameObject dangerPawArtGameObject;
	public GameObject bigPawArtGameObject;
	public GameObject bigDangerPawArtGameObject;

	GameObject currentPawArtGameObject;
	GameObject currentDangerPawArtGameObject;

	public CircleCollider2D normalCollider;
	public float debugTimer;

	private float extendSwipeSpeed;
	private float swipeRetractSpeed;

	private float initialPauseLength;

	private int killsThisSwipe;

	bool registerdForEvents;

	public Transform pawHomeCatTransform;
	public Transform shoulderJointCatTransform;
	float pawHomeCatTransformMagnitude;

	public GameObject timerWidgetPrototype;
	TimerWidget timerWidget;

	public float irritatedRenderTime = 0.2f;
	float timeStopIrritatedRender;

	public float irritatedSoundTime = 0.5f;
	float timeLastIrritatedSound;

	public Color normalColor;
	public Color irritatedColor;


	void Awake() {
		registerdForEvents = false;
	}

	void Start() {
		swipePhase = SwipePhase.NONE;

		UpdateVariableSwipeParams ();
		UpdatePawSize ();
		SetPawArtForCurrentPhase ();
		swipeRetractSpeed = TweakableParams.swipeRetractSpeed;

		transform.localPosition = pawHomeCatTransform.localPosition;
		pawHomeCatTransformMagnitude = pawHomeCatTransform.localPosition.magnitude;


		normalCollider.radius = TweakableParams.normalPawRadius;

		ReloadSprites ();
		RegisterForEvents ();
		UpdateArmRotation ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		if (registerdForEvents) {
			return;
		}

		CatSkin.instance.CatSkinChanged += new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);
		BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			CatSkin.instance.CatSkinChanged -= new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void UpdateVariableSwipeParams(BoostConfig.BoostType newType = BoostConfig.BoostType.NUM_TYPES,
	                               BoostConfig.BoostType oldType = BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
		if (UseOldPaws ()) {
			if (newType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
				initialPauseLength = (TweakableParams.fastPawsPauseMultiplier * 
					TweakableParams.oldSwipeInitialPause);
			} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
				initialPauseLength = TweakableParams.oldSwipeInitialPause;			
			}
			extendSwipeSpeed = TweakableParams.oldSwipeExtendSpeed;
		} else {
			initialPauseLength = 0;
			if (newType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
				extendSwipeSpeed = (TweakableParams.fastPawsSwipeSpeedMultiplier * 
					TweakableParams.newSwipeExtendSpeed);
			} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS) {
				extendSwipeSpeed = TweakableParams.newSwipeExtendSpeed;			
			}		
		}
	}


	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		UpdateVariableSwipeParams (newType, oldType);

		UpdatePawSize (newType, oldType);
	}
	
	void Update() {
		UpdateIrritation ();

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
			if (MovePawTowards (currentSwipeLocationCat, 
			                    extendSwipeSpeed)) {
				RemoveTimer ();
				SetPhase(SwipePhase.EXTENDED_PAUSE);
			}
			break;
		}
		case SwipePhase.EXTENDED_PAUSE:
		{
			float timeNow = Time.time;
			if (timeNow - extendedPauseStarted > GetExtendedPauseLength()) { 
				SetPhase(SwipePhase.RETRACTING);
			}
			break;
		}
		case SwipePhase.RETRACTING:
		{
			if (MovePawTowards (pawHomeCatTransform.localPosition, 
			                    swipeRetractSpeed)) {
				SetPhase(SwipePhase.NONE);
			}
			break;
		}
		case SwipePhase.NONE: 
			MovePawTowards (pawHomeCatTransform.localPosition, 
			                swipeRetractSpeed);
			break;
		}
	}

	bool UseOldPaws() {
		return DebugConfig.instance.IsDebugFlagSet (DebugConfig.DEBUG_PAWS_FAST_EXTEND);
	}

	float GetExtendedPauseLength() {
		if (UseOldPaws()) { 
			return TweakableParams.oldSwipeExtendedPause;
		} else {
			return TweakableParams.newSwipeExtendedPause;
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

		SetPawArtForCurrentPhase ();
	}

	void PlayRandomSound() {
		SFXPlayer.instance.PlayRandom(SFXPlayer.SFXTypeGroup.PAW_SWIPE,
		                              0.2f);
	}	

	void UpdatePawSize(BoostConfig.BoostType newType = BoostConfig.BoostType.NUM_TYPES,
	                   BoostConfig.BoostType oldType = BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
		if (newType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			dangerPawArtGameObject.SetActive (false);
			pawArtGameObject.SetActive (false);

			currentPawArtGameObject = bigPawArtGameObject;
			currentDangerPawArtGameObject = bigDangerPawArtGameObject;

			normalCollider.radius = TweakableParams.bigPawsMultiplier * TweakableParams.normalPawRadius;
		
			SetPawArtForCurrentPhase();
		} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) {
			bigDangerPawArtGameObject.SetActive (false);
			bigPawArtGameObject.SetActive (false);
			
			currentPawArtGameObject = pawArtGameObject;
			currentDangerPawArtGameObject = dangerPawArtGameObject;
			
			normalCollider.radius = TweakableParams.normalPawRadius;
			
			SetPawArtForCurrentPhase();
		}
	}
	
	void SetPawArtForCurrentPhase() {
		if (swipePhase == SwipePhase.EXTENDED_PAUSE) {
			normalCollider.isTrigger = true;
			currentDangerPawArtGameObject.SetActive (true);
			currentPawArtGameObject.SetActive (false);
		} else {
			normalCollider.isTrigger = false;
			currentDangerPawArtGameObject.SetActive (false);
			currentPawArtGameObject.SetActive (true);
		}
	}

	bool MovePawTowards(Vector3 targetLocationCat, 
	                    float speed) {
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
		float moveDistance = speed * deltaTime;
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

	public bool Swipe(Vector3 location) {
		if (!DebugConfig.instance.IsDebugFlagSet (DebugConfig.DEBUG_PAWS_CAN_SWIPE_DURING_RETRACTION)) {
			if (swipePhase == SwipePhase.EXTENDED_PAUSE || 
			    swipePhase == SwipePhase.RETRACTING) {
				StartIrritatedRender();
				MaybePlayIrritatedSound();
				return false;
			}
		}
		nextSwipeLocationCat = location;

		if (timeStartNextSwipe == 0) {
			timeStartNextSwipe = Time.time + initialPauseLength;
		}

		return true;
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
		if (!UseOldPaws ()) {
			return false;
		}
		

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
	
	void OnCatSkinChanged () {
		ReloadSprites ();
	}

	void ReloadSprites() {
		SpriteRenderer sr;
		string path;
		
		sr = pawArtGameObject.GetComponent<SpriteRenderer> ();
		path = "Textures/NewCatParts/" + CatSkin.instance.currentSkinName +
			"/cat_longarm_r_01";
		sr.sprite = Resources.Load<UnityEngine.Sprite>(path);

		
		sr = dangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		path = "Textures/NewCatParts/" + CatSkin.instance.currentSkinName +
			"/cat_longarm_danger_r_01";
		sr.sprite = Resources.Load<UnityEngine.Sprite>(path);

		
		sr = bigPawArtGameObject.GetComponent<SpriteRenderer> ();
		path = "Textures/NewCatParts/" + CatSkin.instance.currentSkinName +
			"/cat_longarm_big_r_01";
		sr.sprite = Resources.Load<UnityEngine.Sprite>(path);

		
		sr = bigDangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		path = "Textures/NewCatParts/" + CatSkin.instance.currentSkinName +
			"/cat_longarm_danger_big_r_01";
		sr.sprite = Resources.Load<UnityEngine.Sprite>(path);
	}

	void UpdateIrritation() {
		if (Time.time > timeStopIrritatedRender) {
			StopIrritatedRender();
		}
	}

	void StopIrritatedRender() {
		SpriteRenderer sr;

		sr = pawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = normalColor;
		
		sr = dangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = normalColor;

		sr = bigPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = normalColor;
		
		sr = bigDangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = normalColor;
	}

	void StartIrritatedRender() {
		SpriteRenderer sr;

		timeStopIrritatedRender = Time.time + irritatedRenderTime;

		sr = pawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = irritatedColor;
		
		sr = dangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = irritatedColor;
		
		sr = bigPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = irritatedColor;
		
		sr = bigDangerPawArtGameObject.GetComponent<SpriteRenderer> ();
		sr.color = irritatedColor;
	}

	void MaybePlayIrritatedSound() {
		if (Time.time < timeLastIrritatedSound + irritatedSoundTime) {
			return;
		}

		if (Random.Range (0, 3) != 0) {
			return;
		}

		timeLastIrritatedSound = Time.time;

		SFXPlayer.instance.PlayRandom (SFXPlayer.SFXTypeGroup.IRRITATED_CAT, 0);
	}
}
