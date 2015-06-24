using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseMove : MonoBehaviour {
	public enum MovementPhaseType {
		ENTERING_PHASE = 0,
		RUNNING_PHASE, 
		LEAVING_PHASE,
		NUM_TYPES,
	};

	public enum MouseType {
		MOUSE_TYPE_SLOW = 0,
		MOUSE_TYPE_MEDIUM,
		MOUSE_TYPE_FAST,
		MOUSE_TYPE_SUPERFAST,
		NUM_TYPES,
	};
	
	private float mouseAngleDeg;
	private float startAngleDeg;
	private float endAngleDeg;

	private float mouseRadius;  
	private float circlingRadius;
	
	private MovementPhaseType phase;

	public MouseType mouseType { get; private set; }

	private float baseSpeedM;
	private float actualSpeedM;

	/*
	 * These could/should all be static but I can't set them in the 
	 * flippin' inpsector
	 */
	public float minCirclingRadius = 3.0f;
	public float maxCirclingRadius = 4.5f;
	public float startMouseRadius = 7.0f;

	public float minSpeedM = 1.4f;
	public float maxSpeedM = 2.6f;

	public float superSpeedM = 4.0f;

	public SpriteRenderer spriteRenderer;

	public Sprite[] baseSprites;

	public Color poisonedColor;

	public bool dead { get; private set; }

	public GameObject trackingStatusBarPrototype;
	/*
	 * End anger section.
	 */

	public Vector3 progressBarOffset;

	private bool isClockwise;

	private Slider sliderInstance;
	private TweakableSlider tweakableSlider;

	public static int activeMouseCount = 0;
	bool registerdForEvents;

	public GameObject deadMousePrototype;

	BoostConfig boostConfig;

	public bool isPoisoned { get; private set;}

	public static MouseType GetRandomMouseType () {
		return (MouseType)Random.Range (0, (int)MouseType.NUM_TYPES);
	}

	void Awake() {
		registerdForEvents = false;
		boostConfig = BoostConfig.instance;
		dead = false;
	}

	// Use this for initialization
	void Start () {
		mouseAngleDeg = startAngleDeg;
		phase = MovementPhaseType.ENTERING_PHASE;
		mouseRadius = startMouseRadius; 
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
		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
		registerdForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registerdForEvents) {
			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostActivationChanged);
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
		spriteRenderer.color = poisonedColor;
	}
	
	void MakeSlider() {
		GameObject sliderGameObject = Instantiate (trackingStatusBarPrototype, 
		                                           new Vector3 (0, 0, 0),
		                                           Quaternion.identity) as GameObject;
		WorldObjectFollower woFollower = sliderGameObject.GetComponent<WorldObjectFollower> ();
		woFollower.SetObjectToFollow (gameObject, progressBarOffset);

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
		case MovementPhaseType.ENTERING_PHASE:
			adjustmentDeg = 180.0f;
			break;
		case MovementPhaseType.RUNNING_PHASE:
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
		case MovementPhaseType.RUNNING_PHASE:
			fractionFinished = Mathf.Abs(mouseAngleDeg - startAngleDeg)/
				Mathf.Abs(startAngleDeg - endAngleDeg);
			break;
		case MovementPhaseType.LEAVING_PHASE:
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
		case MovementPhaseType.ENTERING_PHASE:
			mouseRadius -= deltaTime * actualSpeedM;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				phase = MovementPhaseType.RUNNING_PHASE;
				sliderInstance.gameObject.SetActive (true);
			}
			break;
		case MovementPhaseType.RUNNING_PHASE: {
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
					phase = MovementPhaseType.LEAVING_PHASE;
				} 
			} else {
				if (mouseAngleDeg <= endAngleDeg) {
					mouseAngleDeg = endAngleDeg;
					phase = MovementPhaseType.LEAVING_PHASE;
				}
			}

			break;
		}

		case MovementPhaseType.LEAVING_PHASE:
			mouseRadius += deltaTime * actualSpeedM;
			break;
		}
	
		PositionMouse ();
	}


	public void OnKilled() {
		GameObject deadMouseObject = Instantiate (deadMousePrototype, 
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

	void SetMouseType(MouseType mt) {
		mouseType = mt;
		   
		switch (mouseType) {
		case MouseType.MOUSE_TYPE_SUPERFAST:
			baseSpeedM = superSpeedM;
			break;
		case MouseType.MOUSE_TYPE_FAST:
			baseSpeedM = maxSpeedM;
			break;
		case MouseType.MOUSE_TYPE_SLOW:
			baseSpeedM = minSpeedM;
			break;
		case MouseType.MOUSE_TYPE_MEDIUM:
			baseSpeedM = (maxSpeedM + minSpeedM)/2;
			break;
		}

		int mtAsInt = (int)mouseType;

		Vector3 scale = transform.localScale;


		float newScale;
		if (mouseType == MouseType.MOUSE_TYPE_SUPERFAST) {
			newScale = 1.0f;
		} else {
			newScale = 1.0f + 0.13f * mtAsInt;
		}

		scale *= newScale;
		transform.localScale = scale;

		spriteRenderer.sprite = baseSprites [mtAsInt];
	}

	public MovementPhaseType GetMousePhase() {
		return phase;
	}

	public void SetupMouse(MouseMove.MouseType mouseType,
	                       MouseHole.MouseHoleLocation originHole,
	                       bool isClockwise, 
	                       int track) {
		this.isClockwise = isClockwise;

		startAngleDeg = (float)originHole * MouseHole.angleBetweenHoles;

		float extraRadiusFraction = (float)track/(float)(TweakableParams.instance.numTracks - 1);
		float extraRadius = (maxCirclingRadius - minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = minCirclingRadius + extraRadius;
		
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
