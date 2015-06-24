using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseMove : MonoBehaviour {
	private float mouseAngleDeg;
	private float startAngleDeg;
	private float endAngleDeg;

	private float mouseRadius;  
	private float circlingRadius;
	
	private MouseConfig.MovementPhaseType phase;

	public MouseConfig.MouseType mouseType { get; private set; }

	private float baseSpeedM;
	private float actualSpeedM;
	
	public SpriteRenderer spriteRenderer;
	
	public bool dead { get; private set; }

	public GameObject trackingStatusBarPrototype;
	
	private bool isClockwise;

	private Slider sliderInstance;
	private TweakableSlider tweakableSlider;

	public static int activeMouseCount = 0;
	bool registerdForEvents;

	public bool isPoisoned { get; private set;}

	void Awake() {
		registerdForEvents = false;
		dead = false;
	}

	// Use this for initialization
	void Start () {
		mouseAngleDeg = startAngleDeg;
		phase = MouseConfig.MovementPhaseType.ENTERING_PHASE;
		mouseRadius = MouseConfig.instance.startMouseRadius; 
		activeMouseCount += 1;

		UpdateSpeed ();

		MakeSlider ();

		PositionMouse ();
		RegisterForEvents ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
		if (sliderInstance != null) {
			Object.Destroy (sliderInstance.gameObject);
		}
		activeMouseCount--;
	}
	
	void RegisterForEvents() {
		BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
		registerdForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registerdForEvents) {
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
		}
	}


	void OnBoostActivationChanged () {
		UpdateSpeed ();
	}

	void UpdateSpeed () {
		actualSpeedM = baseSpeedM;
	}

	public void SetPoisoned() {
		isPoisoned = true;
		spriteRenderer.color = MouseConfig.instance.poisonedColor;
	}
	
	void MakeSlider() {
		GameObject sliderGameObject = Instantiate (trackingStatusBarPrototype, 
		                                           new Vector3 (0, 0, 0),
		                                           Quaternion.identity) as GameObject;
		WorldObjectFollower woFollower = sliderGameObject.GetComponent<WorldObjectFollower> ();
		woFollower.SetObjectToFollow (gameObject, MouseConfig.instance.progressBarOffset);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();
		tweakableSlider = sliderGameObject.GetComponent<TweakableSlider> ();
		sliderInstance.gameObject.SetActive (false);
	}


	void PositionMouse() {
		float y = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngleDeg);
		float x = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngleDeg);

		float finalAngleDeg = mouseAngleDeg;
		float adjustmentDeg = 0.0f;


		switch (phase) {
		case MouseConfig.MovementPhaseType.ENTERING_PHASE:
			adjustmentDeg = 180.0f;
			break;
		case MouseConfig.MovementPhaseType.RUNNING_PHASE:
			adjustmentDeg = isClockwise ? 90.0f : -90.0f;
			break;
		}

		finalAngleDeg += adjustmentDeg;

		transform.rotation = Quaternion.Euler (0.0f, 0.0f, finalAngleDeg);
		transform.position = new Vector3 (x, y, 0);
	
		UpdateSlider ();
	}

	void UpdateSlider() {		
		float fractionFinished = 0.0f;
		
		switch (phase) {
		case MouseConfig.MovementPhaseType.RUNNING_PHASE:
			fractionFinished = Mathf.Abs(mouseAngleDeg - startAngleDeg)/
				Mathf.Abs(startAngleDeg - endAngleDeg);
			break;
		case MouseConfig.MovementPhaseType.LEAVING_PHASE:
			fractionFinished = 1.0f;
			break;
		}

		Color color = Utilities.TrafficLightColorLerp (fractionFinished);

		tweakableSlider.fill.color = color;

		sliderInstance.value = fractionFinished;
	}

	void FixedUpdate () {
		float deltaTime = Time.deltaTime;

		switch (phase) {
		case MouseConfig.MovementPhaseType.ENTERING_PHASE:
			mouseRadius -= deltaTime * actualSpeedM;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				phase = MouseConfig.MovementPhaseType.RUNNING_PHASE;
				sliderInstance.gameObject.SetActive (true);
			}
			break;
		case MouseConfig.MovementPhaseType.RUNNING_PHASE: {
			float distanceDelta = actualSpeedM * Time.deltaTime;
			float angleDeltaRad = distanceDelta/mouseRadius;
			float angleDeltaDeg = angleDeltaRad * Mathf.Rad2Deg;

			if (isClockwise) {
				mouseAngleDeg += angleDeltaDeg;
			} else {
				mouseAngleDeg -= angleDeltaDeg;
			}

			if (isClockwise) {
				if (mouseAngleDeg >= endAngleDeg) {
					mouseAngleDeg = endAngleDeg;
					phase = MouseConfig.MovementPhaseType.LEAVING_PHASE;
				} 
			} else {
				if (mouseAngleDeg <= endAngleDeg) {
					mouseAngleDeg = endAngleDeg;
					phase = MouseConfig.MovementPhaseType.LEAVING_PHASE;
				}
			}

			break;
		}

		case MouseConfig.MovementPhaseType.LEAVING_PHASE:
			mouseRadius += deltaTime * actualSpeedM;
			break;
		}
	
		PositionMouse ();
	}


	public void OnKilled() {
		GameObject deadMouseObject = Instantiate (MouseConfig.instance.deadMousePrototype, 
		                                    new Vector3 (0, 0, 0),
		                                    Quaternion.identity) as GameObject;
		DeadMouse deadMouse = deadMouseObject.GetComponent<DeadMouse> ();
		deadMouse.Configure (this);

		dead = true;
		Object.Destroy (this.gameObject);
	}

	public void OnSafeExit() {
		Object.Destroy (this.gameObject);
	}

	void SetMouseType(MouseConfig.MouseType mt) {
		mouseType = mt;
		   
		switch (mouseType) {
		case MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST:
			baseSpeedM = MouseConfig.instance.superSpeedM;
			break;
		case MouseConfig.MouseType.MOUSE_TYPE_FAST:
			baseSpeedM = MouseConfig.instance.maxSpeedM;
			break;
		case MouseConfig.MouseType.MOUSE_TYPE_SLOW:
			baseSpeedM = MouseConfig.instance.minSpeedM;
			break;
		case MouseConfig.MouseType.MOUSE_TYPE_MEDIUM:
			baseSpeedM = (MouseConfig.instance.maxSpeedM + MouseConfig.instance.minSpeedM)/2;
			break;
		}

		int mtAsInt = (int)mouseType;

		Vector3 scale = transform.localScale;


		float newScale;
		if (mouseType == MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST) {
			newScale = 1.0f;
		} else {
			newScale = 1.0f + 0.13f * mtAsInt;
		}

		scale *= newScale;
		transform.localScale = scale;

		spriteRenderer.sprite = MouseConfig.instance.baseSprites [mtAsInt];
	}

	public MouseConfig.MovementPhaseType GetMousePhase() {
		return phase;
	}

	public void SetupMouse(MouseConfig.MouseType mouseType,
	                       MouseHole.MouseHoleLocation originHole,
	                       bool isClockwise, 
	                       int track) {
		this.isClockwise = isClockwise;

		startAngleDeg = (float)originHole * MouseHole.angleBetweenHoles;

		float extraRadiusFraction = (float)track/(float)(TweakableParams.instance.numTracks - 1);
		float extraRadius = (MouseConfig.instance.maxCirclingRadius -
		                     MouseConfig.instance.minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = MouseConfig.instance.minCirclingRadius + extraRadius;
		
		this.SetMouseType(mouseType);

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
}
