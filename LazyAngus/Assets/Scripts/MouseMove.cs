using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseMove : MonoBehaviour
{
	public static int activeMouseCount = 0;

	public SpriteRenderer mouseRenderer;
	public MouseConfig.MouseType mouseType { get; private set; }
	public bool dead { get; private set; }
	public GameObject trackingStatusBarPrototype;
	public bool isPoisoned { get; private set; }
	public bool isFartedUpon { get; private set; }
	public float minDistanceToManuallyOrient = 0.01f;

	Transform artTransform;

	float mouseAngleDeg;

	float startAngleDeg;
	float endAngleDeg;
	float mouseRadius;
	float circlingRadius;

	MouseConfig.MovementPhaseType phase;
	float phaseStartTime;


	float baseSpeedM;
	float actualSpeedM;
	
	bool isClockwise;
	float angleAdjustmentWhileRunning;
	float zeroCenteredAngleAdjustmentWhileRunning;

	Slider sliderInstance;
	TweakableSlider tweakableSlider;

	MouseConfig.MouseWiggleType wiggleType = 
		MouseConfig.MouseWiggleType.NONE;

	float wiggleMagnitude = 0;
	float wiggleCycles = 1;
	bool wiggleClockwise = false;
	
	bool registeredForEvents;

	void Awake ()
	{
		dead = false;
		artTransform = mouseRenderer.transform;
	}

	// Use this for initialization
	void Start ()
	{
		RegisterForEvents ();
		mouseAngleDeg = startAngleDeg;

		SetPhase (MouseConfig.MovementPhaseType.ENTERING);

		mouseRadius = MouseConfig.instance.startMouseRadius; 
		activeMouseCount += 1;
		actualSpeedM = baseSpeedM;

		MakeSlider ();

		SetMouseTransform ();
	}
	
	void OnDestroy ()
	{
		UnregisterForEvents ();
		if (sliderInstance != null) {
			Object.Destroy (sliderInstance.gameObject);
		}
		activeMouseCount--;
	}
	
	void RegisterForEvents ()
	{
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged +=
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
	}
	
	void UnregisterForEvents ()
	{
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -=
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}

	void OnGamePhaseChanged ()
	{
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY && 
		    GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.PENDING) {
			Object.Destroy (gameObject);
		}
	}

	public void OnFartedUpon ()
	{
		actualSpeedM = baseSpeedM * TweakableParams.fartSlothMultiplier;
		mouseRenderer.color = MouseConfig.instance.fartedUponColor;
	}

	public void SetPoisoned ()
	{
		isPoisoned = true;
		mouseRenderer.color = MouseConfig.instance.poisonedColor;
	}
	
	void MakeSlider ()
	{
		GameObject sliderGameObject = Instantiate (trackingStatusBarPrototype, 
		                                           new Vector3 (0, 0, 0),
		                                           Quaternion.identity) as GameObject;
		WorldObjectFollower woFollower = sliderGameObject.GetComponent<WorldObjectFollower> ();
		woFollower.SetObjectToFollow (gameObject, MouseConfig.instance.progressBarOffset);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();
		tweakableSlider = sliderGameObject.GetComponent<TweakableSlider> ();
		sliderInstance.gameObject.SetActive (false);
	}

	void SetMouseTransform ()
	{
		Vector3 oldPosition = transform.position;

		SetMousePosition ();
		SetMouseOrientation (oldPosition);

		UpdateSlider ();
	}

	void SetMousePosition() {
		float y = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngleDeg);
		float x = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngleDeg);

		transform.position = new Vector3 (x, y, 0);

		ApplyWiggle ();
	}

	void SetMouseOrientation(Vector3 oldPosition) {
		float orientationAngleDeg;

		if (phase == MouseConfig.MovementPhaseType.RUNNING) {
			Vector3 newForward = new Vector3(transform.position.x - oldPosition.x, 
			                                 transform.position.y - oldPosition.y, 
			                                 0);
			if (wiggleType == MouseConfig.MouseWiggleType.NONE || 
			    wiggleType == MouseConfig.MouseWiggleType.BACK_FORTH || 
			    newForward.magnitude <= minDistanceToManuallyOrient) {
				orientationAngleDeg = mouseAngleDeg + angleAdjustmentWhileRunning;
			} else {
				orientationAngleDeg = Vector3.Angle (Vector3.right, 
				                                     newForward);
				if (newForward.y < 0) {
					orientationAngleDeg = -orientationAngleDeg;
				}
			}
		} else {
			orientationAngleDeg = mouseAngleDeg;

			float adjustmentDeg = 0.0f;

			switch (phase) {
			case MouseConfig.MovementPhaseType.ENTERING:
				adjustmentDeg = 180.0f;
				break;
			case MouseConfig.MovementPhaseType.TURNING_AFTER_ENTERING:
				adjustmentDeg = Mathf.Lerp (180f,
				                            angleAdjustmentWhileRunning,
				                            (Time.time - phaseStartTime) / MouseConfig.instance.timeToTurn);
				break;
			case MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING:
				adjustmentDeg = Mathf.Lerp (zeroCenteredAngleAdjustmentWhileRunning,
				                            0f,
				                            (Time.time - phaseStartTime) / MouseConfig.instance.timeToTurn);
				break;
			case MouseConfig.MovementPhaseType.CELEBRATING:
				adjustmentDeg = 30f * Mathf.Sin ((Time.time - phaseStartTime) * Mathf.PI * 2);
				break;
			}

			orientationAngleDeg += adjustmentDeg;
		}

		transform.rotation = Quaternion.Euler (0.0f, 0.0f, orientationAngleDeg);
	}

	void ApplyWiggle ()
	{
		if (wiggleType == MouseConfig.MouseWiggleType.NONE) {
			return;
		}

		float fractionFinished = (mouseAngleDeg - startAngleDeg) / (endAngleDeg - startAngleDeg);
		float totalCyclesFinished = fractionFinished * wiggleCycles;

		float angleRad = totalCyclesFinished * 2 * Mathf.PI;
		if (wiggleClockwise) {
			angleRad = -angleRad;
		}

		Vector3 extra = new Vector3 (0f, 0f, 0f);

		switch (wiggleType) {
		case MouseConfig.MouseWiggleType.BACK_FORTH:
			extra = new Vector3 (wiggleMagnitude * Mathf.Sin (angleRad), 
			         0.0f, 
			         0.0f);
			break;
		case MouseConfig.MouseWiggleType.SIDE_SIDE:
			extra = new Vector3 (0.0f, 
			         wiggleMagnitude * Mathf.Sin (angleRad), 
			         0.0f);
			break;
		case MouseConfig.MouseWiggleType.ROUND:
			angleRad = angleRad + Mathf.PI/2;
			if (angleRad % (2 * Mathf.PI) > Mathf.PI) {
				angleRad = -angleRad;
			}
			angleRad = angleRad - Mathf.PI/2;

			extra = new Vector3 (wiggleMagnitude * Mathf.Cos (Mathf.PI + angleRad) + wiggleMagnitude, 
			         wiggleMagnitude * Mathf.Sin (-angleRad), 
			         0.0f);
			break;
		}

		extra = Quaternion.Euler (new Vector3(0, 0, mouseAngleDeg + angleAdjustmentWhileRunning)) * extra;
		transform.position = transform.position + extra;
	}

	void UpdateSlider ()
	{		
		float fractionFinished = 0.0f;
		
		switch (phase) {
		case MouseConfig.MovementPhaseType.TURNING_AFTER_ENTERING:
			fractionFinished = 0f;
			break;
		case MouseConfig.MovementPhaseType.RUNNING:
			fractionFinished = Mathf.Abs (mouseAngleDeg - startAngleDeg) /
				Mathf.Abs (startAngleDeg - endAngleDeg);
			break;
		case MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING:
			fractionFinished = 1.0f;
			break;
		case MouseConfig.MovementPhaseType.LEAVING:
			fractionFinished = 1.0f;
			break;
		}

		Color color = Utilities.TrafficLightColorLerp (fractionFinished);

		tweakableSlider.fill.color = color;

		sliderInstance.value = fractionFinished;
	}

	void SetPhase (MouseConfig.MovementPhaseType phase)
	{
		if (this.phase == phase) {
			return;
		}
		this.phase = phase;
		this.phaseStartTime = Time.time;

		switch (phase) {
		case MouseConfig.MovementPhaseType.CELEBRATING:
			PlayCelebratingEffects ();
			break;
		case MouseConfig.MovementPhaseType.LEAVING:
			PlayLeavingEffects ();
			break;
		}
	}


	void PlayLeavingEffects() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			return;
		}

		SFXPlayer.instance.PlayRandom(SFXPlayer.SFXTypeGroup.ESCAPING);

		// Do 'escaping' distort effect.
		DistortForEffect distortForEffect = GetComponent<DistortForEffect> ();
		distortForEffect.looping = true;
		distortForEffect.minScale = 0.8f;
		distortForEffect.additionalScale = 0.3f;
		distortForEffect.secondsPerPeriod = 0.5f;
		distortForEffect.Distort ();
	}


	void PlayCelebratingEffects() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			return;
		}
		
		// Do 'escaping' distort effect.
		DistortForEffect distortForEffect = GetComponent<DistortForEffect> ();
		distortForEffect.looping = true;
		distortForEffect.minScale = 1;
		distortForEffect.additionalScale = 2;
		distortForEffect.secondsPerPeriod = 1;
		distortForEffect.Distort ();
		
		SFXPlayer.instance.Play (SFXPlayer.SFXType.MOUSE_ESCAPE);
	}

	void FixedUpdate ()
	{
		float deltaTime = Time.deltaTime;

		switch (phase) {
		case MouseConfig.MovementPhaseType.ENTERING:
			mouseRadius -= deltaTime * actualSpeedM;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				SetPhase (MouseConfig.MovementPhaseType.TURNING_AFTER_ENTERING);
				sliderInstance.gameObject.SetActive (true);
			}
			break;
		case MouseConfig.MovementPhaseType.TURNING_AFTER_ENTERING:
			if (Time.time >= MouseConfig.instance.timeToTurn + phaseStartTime) {
				SetPhase (MouseConfig.MovementPhaseType.RUNNING);
			}
			break;
		case MouseConfig.MovementPhaseType.RUNNING:
		{
			float distanceDelta = actualSpeedM * Time.deltaTime;
			float angleDeltaRad = distanceDelta / mouseRadius;
			float angleDeltaDeg = angleDeltaRad * Mathf.Rad2Deg;

			if (isClockwise) {
				mouseAngleDeg -= angleDeltaDeg;
				if (mouseAngleDeg <= endAngleDeg) {
					mouseAngleDeg = endAngleDeg;
					SetPhase (MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING);
				}
			} else {
				mouseAngleDeg += angleDeltaDeg;
				if (mouseAngleDeg >= endAngleDeg) {
					mouseAngleDeg = endAngleDeg;
					SetPhase (MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING);
				} 
			}
			break;
		}
		case MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING:
			if (Time.time >= MouseConfig.instance.timeToTurn + phaseStartTime) {
				SetPhase (MouseConfig.MovementPhaseType.LEAVING);
			}
			break;

		case MouseConfig.MovementPhaseType.LEAVING:
			mouseRadius += deltaTime * actualSpeedM;
			break;
		}
	
		SetMouseTransform ();
	}

	public void OnKilled ()
	{
		SFXPlayer.instance.PlayRandom(SFXPlayer.SFXTypeGroup.MOUSE_SQUEAK,
		                              0.2f);

		dead = true;
		Object.Destroy (this.gameObject);
	}

	public void OnSafeExit ()
	{
		SetPhase (MouseConfig.MovementPhaseType.CELEBRATING);
	}

	void SetMouseType (MouseConfig.MouseType mt)
	{
		mouseType = mt;
	
		MouseTypeDesc md = MouseConfig.instance.GetMouseTypeDesc (mt);
		baseSpeedM = md.speed;

		Vector3 scaleVector = transform.localScale;
		transform.localScale = new Vector3 (scaleVector.x * md.scale, 
		                                    scaleVector.y * md.scale, 
		                                    scaleVector.z);

		float orientation = isClockwise ? -1f : 1f;
		scaleVector = artTransform.localScale;
		artTransform.localScale = new Vector3 (scaleVector.x, 
		                                       scaleVector.y * orientation, 
		                                       scaleVector.z);

		mouseRenderer.sprite = md.mouseSprite;
	}

	public MouseConfig.MovementPhaseType GetMousePhase ()
	{
		return phase;
	}

	public void SetupMouse (MouseConfig.MouseType mouseType,
	                       MouseSinkController.MouseHoleLocation originHole,
	                       bool isClockwise, 
	                       int track)
	{
		this.isClockwise = isClockwise;

		if (isClockwise) {
			angleAdjustmentWhileRunning = 270f;
			zeroCenteredAngleAdjustmentWhileRunning = -90f;
		} else {
			angleAdjustmentWhileRunning = 90f;
			zeroCenteredAngleAdjustmentWhileRunning = 90f;
		}

		startAngleDeg = (float)originHole * MouseSinkController.angleBetweenHoles;
		startAngleDeg += 45;

		track = Mathf.Clamp (track, 0, TweakableParams.numTracks - 1);

		float extraRadiusFraction = (float)track / (float)(TweakableParams.numTracks - 1);
		float extraRadius = (MouseConfig.instance.maxCirclingRadius -
			MouseConfig.instance.minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = MouseConfig.instance.minCirclingRadius + extraRadius;
		
		this.SetMouseType (mouseType);
		this.wiggleType = MouseConfig.MouseWiggleType.NONE;

		int numSections = MouseConfig.instance.numSections [(int)mouseType];


		if (DebugConfig.instance.IsDebugFlagSet (DebugConfig.DEBUG_FLAG_SHORT_MOUSE_PATH)) {
			numSections = 0;
		}

		float angleDistance = numSections * MouseSinkController.angleBetweenHoles + 45;

		if (isClockwise) {
			endAngleDeg = startAngleDeg - angleDistance;
			if (endAngleDeg < 0) {
				startAngleDeg += 360.0f;
				endAngleDeg += 360.0f;
			}
		} else {
			endAngleDeg = startAngleDeg + angleDistance;
		}	
	}

	public void AddWiggle (MouseConfig.MouseWiggleType wiggleType, 
	                       float wiggleMagnitude, 
	                       int wiggleCycles, 
	                       bool wiggleClockwise)
	{
		this.wiggleType = wiggleType;
		this.wiggleMagnitude = wiggleMagnitude;
		this.wiggleCycles = wiggleCycles;
		this.wiggleClockwise = wiggleClockwise;
	}
}
