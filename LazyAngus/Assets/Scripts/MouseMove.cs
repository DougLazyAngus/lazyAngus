using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseMove : MonoBehaviour
{
	private float mouseAngleDeg;

	private float startAngleDeg;
	private float endAngleDeg;
	private float mouseRadius;
	private float circlingRadius;

	private MouseConfig.MovementPhaseType phase;
	private float phaseStartTime;

	public MouseConfig.MouseType mouseType { get; private set; }

	private float baseSpeedM;
	private float actualSpeedM;
	public SpriteRenderer spriteRenderer;
	
	public bool dead { get; private set; }

	public GameObject trackingStatusBarPrototype;
	private bool isClockwise;
	private float angleAdjustmentWhileRunning;
	private float zeroCenteredAngleAdjustmentWhileRunning;

	private Slider sliderInstance;
	private TweakableSlider tweakableSlider;
	public static int activeMouseCount = 0;

	public bool isPoisoned { get; private set; }

	public bool isFartedUpon { get; private set; }

	private MouseConfig.MouseWiggleType wiggleType = 
		MouseConfig.MouseWiggleType.NONE;

	private float wiggleMagnitude = 0;
	private float wiggleCycles = 1;
	private bool wiggleClockwise = false;

	public float minDistanceToManuallyOrient = 0.01f;
	
	bool registeredForEvents;

	void Awake ()
	{
		dead = false;
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
		spriteRenderer.color = MouseConfig.instance.fartedUponColor;
	}

	public void SetPoisoned ()
	{
		isPoisoned = true;
		spriteRenderer.color = MouseConfig.instance.poisonedColor;
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
					mouseAngleDeg += angleDeltaDeg;
				} else {
					mouseAngleDeg -= angleDeltaDeg;
				}

				if (isClockwise) {
					if (mouseAngleDeg >= endAngleDeg) {
						mouseAngleDeg = endAngleDeg;
						SetPhase (MouseConfig.MovementPhaseType.TURNING_BEFORE_LEAVING);
					} 
				} else {
					if (mouseAngleDeg <= endAngleDeg) {
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
		GameObject deadMouseObject = Instantiate (MouseConfig.instance.deadMousePrototype, 
		                                    new Vector3 (0, 0, 0),
		                                    Quaternion.identity) as GameObject;
		DeadMouse deadMouse = deadMouseObject.GetComponent<DeadMouse> ();
		deadMouse.Configure (this);

		dead = true;
		Object.Destroy (this.gameObject);
	}

	public void OnSafeExit ()
	{
		Object.Destroy (this.gameObject);
	}

	void SetMouseType (MouseConfig.MouseType mt)
	{
		mouseType = mt;
	
		MouseDesc md = MouseConfig.instance.GetMouseDesc (mt);
		baseSpeedM = md.speed;

		Vector3 scaleVector = transform.localScale;
		scaleVector *= md.scale;
		transform.localScale = scaleVector;

		spriteRenderer.sprite = md.mouseSprite;
	}

	public MouseConfig.MovementPhaseType GetMousePhase ()
	{
		return phase;
	}

	public void SetupMouse (MouseConfig.MouseType mouseType,
	                       MouseHole.MouseHoleLocation originHole,
	                       bool isClockwise, 
	                       int track)
	{
		this.isClockwise = isClockwise;
		if (isClockwise) {
			angleAdjustmentWhileRunning = 90f;
			zeroCenteredAngleAdjustmentWhileRunning = 90f;
		} else {
			angleAdjustmentWhileRunning = 270f;
			zeroCenteredAngleAdjustmentWhileRunning = -90f;
		}

		startAngleDeg = (float)originHole * MouseHole.angleBetweenHoles;

		float extraRadiusFraction = (float)track / (float)(TweakableParams.numTracks - 1);
		float extraRadius = (MouseConfig.instance.maxCirclingRadius -
			MouseConfig.instance.minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = MouseConfig.instance.minCirclingRadius + extraRadius;
		
		this.SetMouseType (mouseType);
		this.wiggleType = MouseConfig.MouseWiggleType.NONE;

		int numSections = (int)MouseHole.MouseHoleLocation.NUM_TYPES - 2 + (int)mouseType;
		float angleDistance = numSections * MouseHole.angleBetweenHoles;

		if (isClockwise) {
			endAngleDeg = startAngleDeg + angleDistance;
		} else {
			endAngleDeg = startAngleDeg - angleDistance;
			if (endAngleDeg < 0) {
				startAngleDeg += 360.0f;
				endAngleDeg += 360.0f;
			}
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
