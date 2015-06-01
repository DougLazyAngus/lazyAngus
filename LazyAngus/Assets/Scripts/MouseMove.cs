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
	
	private float mouseAngle;
	private float startAngle;
	private float endAngle;

	private float mouseRadius;  
	private float circlingRadius;
	
	private MovementPhaseType phase;

	private MouseType mouseType;

	private float speed;


	public GameObject[] mouseBalls;

	/*
	 * These could/should all be static but I can't set them in the 
	 * flippin' inpsector
	 */
	public float minCirclingRadius = 3.0f;
	public float maxCirclingRadius = 4.5f;
	public float startMouseRadius = 7.0f;
	public float minSpeed = 0.7f;
	public float maxSpeed = 1.3f;
	
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
		mouseAngle = startAngle;
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
		float x = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngle);
		float z = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngle);

		float finalAngle = mouseAngle;
		float adjustment = 0.0f;

		float fractionFinished = 0.0f;

		switch (phase) {
		case MovementPhaseType.ENTERING_PHASE:
			adjustment = 180.0f;
			break;
		case MovementPhaseType.RUNNING_PHASE:
			adjustment = isClockwise ? 90.0f : -90.0f;
			fractionFinished = Mathf.Abs(mouseAngle - startAngle)/Mathf.Abs(startAngle - endAngle);
			break;
		case MovementPhaseType.LEAVING_PHASE:
			fractionFinished = 1.0f;
			break;
		}

		finalAngle += adjustment;

		sliderInstance.value = fractionFinished;

		transform.rotation = Quaternion.Euler (0.0f, finalAngle, 0.0f);
		transform.position = new Vector3 (x, 0.0f, z);
	
		UpdateSlider ();
	}

	void UpdateSlider() {		
		float fractionFinished = 0.0f;
		
		switch (phase) {
		case MovementPhaseType.RUNNING_PHASE:
			fractionFinished = Mathf.Abs(mouseAngle - startAngle)/Mathf.Abs(startAngle - endAngle);
			break;
		case MovementPhaseType.LEAVING_PHASE:
			fractionFinished = 1.0f;
			break;
		}

		Color color;
		if (fractionFinished < 0.5) {
			color = Color.Lerp (Color.green, Color.yellow, fractionFinished * 2f);
		} else {
			color = Color.Lerp (Color.yellow, Color.red, fractionFinished * 2f - 1f);
		}

		tweakableSlider.fill.color = color;

		sliderInstance.value = fractionFinished;
	}

	// Update is called once per frame
	void FixedUpdate () {
		float deltaTime = Time.deltaTime;

		switch (phase) {
		case MovementPhaseType.ENTERING_PHASE:
			mouseRadius -= deltaTime * speed;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				phase = MovementPhaseType.RUNNING_PHASE;
			}
			break;
		case MovementPhaseType.RUNNING_PHASE: {
			float angleDelta = (speed * Time.deltaTime / mouseRadius) * Mathf.Rad2Deg;
			if (isClockwise) {
				mouseAngle += angleDelta;
			} else {
				mouseAngle -= angleDelta;
			}

			if (isClockwise) {
				if (mouseAngle >= endAngle) {
					mouseAngle = endAngle;
					phase = MovementPhaseType.LEAVING_PHASE;
				} 
			} else {
				if (mouseAngle <= endAngle) {
					mouseAngle = endAngle;
					phase = MovementPhaseType.LEAVING_PHASE;
				}
			}

			break;
		}
		case MovementPhaseType.LEAVING_PHASE:
			mouseRadius += deltaTime * speed;
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

	void CleanupSelf() {
		Object.Destroy (sliderInstance.gameObject);
		Object.Destroy(this.gameObject);
	}

 	void OnDestroy() {
		activeMouseCount--;
	}

		
	//------------------------------------------
	// 
	// Public functions
	//
	//------------------------------------------

	
	
	public void OnKilled() {
		CleanupSelf ();
	}

	public void OnSafeExit() {
		CleanupSelf ();
	}

	public void SetMouseType(MouseType mt) {
		mouseType = mt;
		
		switch (mouseType) {
		case MouseType.MOUSE_TYPE_FAST:
			speed = maxSpeed;
			SetAltMaterial(altMaterial02);
			break;
		case MouseType.MOUSE_TYPE_SLOW:
			speed = minSpeed;
			break;
		case MouseType.MOUSE_TYPE_MEDIUM:
			SetAltMaterial(altMaterial01);
			speed = (maxSpeed + minSpeed)/2;
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

		startAngle = (float)originHole * MouseHole.angleBetweenHoles;

		float extraRadiusFraction = (float)track/(float)(numTracks - 1);
		float extraRadius = (maxCirclingRadius - minCirclingRadius) * extraRadiusFraction;
		
		circlingRadius = minCirclingRadius + extraRadius;
		
		this.SetMouseType(mouseType);

		float angleDistance = (((int)MouseHole.MouseHoleLocation.NUM_TYPES - 1) * 
		                       MouseHole.angleBetweenHoles);

		if (isClockwise) {
			endAngle = startAngle + angleDistance;
		} else {
			endAngle = startAngle - angleDistance;
			if (endAngle < 0) {
				startAngle += 360.0f;
				endAngle += 360.0f;
			}
		}	
	}
}
