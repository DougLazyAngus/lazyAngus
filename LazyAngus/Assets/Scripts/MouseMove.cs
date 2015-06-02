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
		NUM_TYPES,
	};
	
	private float mouseAngleDeg;
	private float startAngleDeg;
	private float endAngleDeg;

	private float mouseRadius;  
	private float circlingRadius;
	
	private MovementPhaseType phase;

	private MouseType mouseType;

	private float speedM;


	public GameObject[] mouseBalls;

	/*
	 * These could/should all be static but I can't set them in the 
	 * flippin' inpsector
	 */
	public float minCirclingRadius = 3.0f;
	public float maxCirclingRadius = 4.5f;
	public float startMouseRadius = 7.0f;

	public float minSpeedM = 1.4f;
	public float maxSpeedM = 2.6f;
	
	public Material altMaterial01;
	public Material altMaterial02;
	/*
	 * End anger section.
	 */

	public static int numTracks = 3;

	private bool isClockwise;

	private Slider sliderInstance;
	private TweakableSlider tweakableSlider;

	public static int activeMouseCount = 0;

	public static MouseType GetRandomMouseType () {
		return (MouseType)Random.Range (0, (int)MouseType.NUM_TYPES);
	}
	
	// Use this for initialization
	void Start () {
		mouseAngleDeg = startAngleDeg;
		phase = MovementPhaseType.ENTERING_PHASE;
		mouseRadius = startMouseRadius; 
		activeMouseCount += 1;

		MakeSlider ();

		PositionMouse ();
	}
	
	void MakeSlider() {
		GameObject sliderGameObject = Utilities.FindChildWithTag(gameObject, 
		                                                         "TrackingProgressBar");

		UIFollower uiFollower = sliderGameObject.GetComponent<UIFollower> ();
		uiFollower.parentTransform = gameObject.transform;

		GameObject canvas = Utilities.GetCanvasGameObject ();
		sliderGameObject.transform.SetParent (canvas.transform);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();

		tweakableSlider = sliderGameObject.GetComponent<TweakableSlider> ();
	}


	void PositionMouse() {
		float x = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngleDeg);
		float z = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngleDeg);

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

		transform.rotation = Quaternion.Euler (0.0f, finalAngleDeg, 0.0f);
		transform.position = new Vector3 (x, 0.0f, z);
	
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
			mouseRadius -= deltaTime * speedM;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				phase = MovementPhaseType.RUNNING_PHASE;
			}
			break;
		case MovementPhaseType.RUNNING_PHASE: {
			float distanceDelta = speedM * Time.deltaTime;
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
			mouseRadius += deltaTime * speedM;
			break;
		}
	
		PositionMouse ();
	}
	
	void SetAltMaterial(Material material) {
		for (int i = 0; i < mouseBalls.Length; i++) {
			GameObject mouseBall = mouseBalls [i];
			mouseBall.GetComponent<Renderer> ().material = material;
		}
	}
	
 	void OnDestroy() {
		if (sliderInstance != null) {
			Object.Destroy (sliderInstance.gameObject);
		}
		activeMouseCount--;
	}

		
	//------------------------------------------
	// 
	// Public functions
	//
	//------------------------------------------
	public void OnKilled() {
		Object.Destroy (this.gameObject);
	}

	public void OnSafeExit() {
		Object.Destroy (this.gameObject);
	}

	public void SetMouseType(MouseType mt) {
		mouseType = mt;
		   
		switch (mouseType) {
		case MouseType.MOUSE_TYPE_FAST:
			speedM = maxSpeedM;
			SetAltMaterial(altMaterial02);
			break;
		case MouseType.MOUSE_TYPE_SLOW:
			speedM = minSpeedM;
			break;
		case MouseType.MOUSE_TYPE_MEDIUM:
			SetAltMaterial(altMaterial01);
			speedM = (maxSpeedM + minSpeedM)/2;
			break;
		}
		int mtAsInt = (int)mouseType;

		Vector3 scale = transform.localScale;
		float newScale = 1.0f + 0.15f * mtAsInt;
		scale *= newScale;
		transform.localScale = scale;
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

		float extraRadiusFraction = (float)track/(float)(numTracks - 1);
		float extraRadius = (maxCirclingRadius - minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = minCirclingRadius + extraRadius;
		
		this.SetMouseType(mouseType);

		float angleDistance = (((int)MouseHole.MouseHoleLocation.NUM_TYPES - 2 + (int)mouseType) * 
		                       MouseHole.angleBetweenHoles);

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
