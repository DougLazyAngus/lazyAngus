using UnityEngine;
using System.Collections;


public class MouseMove : MonoBehaviour {
	enum PhaseType {
		ENTERING_PHASE = 0,
		RUNNING_PHASE, 
		LEAVING_PHASE,
	};

	public enum MouseType {
		MOUSE_TYPE_SLOW = 0,
		MOUSE_TYPE_MEDIUM,
		MOUSE_TYPE_FAST,
		NUM_MOUSE_TYPES,
	};


	public float speed;
	public float circlingRadius;
	public bool isClockwise;

	private float mouseAngle;
	private float mouseRadius;

	public float startAngle;
	public float endAngle;

	public static float startMouseRadius = 7.0f;

	private PhaseType phase;
	private GameController gameController;

	private MouseType mouseType;

	public Material altMaterial01;
	public Material altMaterial02;


	// Use this for initialization
	void Start () {
		gameController = Utilities.GetGameController ();

		if (isClockwise) {
			while (endAngle <= startAngle) {
				endAngle += 360.0f;
			}
		} else {
			while (startAngle <= endAngle) {
				startAngle += 360.0f;
			}
		}

		mouseAngle = startAngle;
		phase = PhaseType.ENTERING_PHASE;
		mouseRadius = startMouseRadius; 

		PositionMouse ();
	}

	void PositionMouse() {
		float x = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngle);
		float z = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngle);

		float finalAngle = mouseAngle;
		float adjustment = 0.0f;
		switch (phase) {
		case PhaseType.ENTERING_PHASE:
			adjustment = 180.0f;
			break;
		case PhaseType.RUNNING_PHASE:
			adjustment = isClockwise ? 90.0f : -90.0f;
			break;
		}

		finalAngle += adjustment;

		transform.rotation = Quaternion.Euler (0.0f, finalAngle, 0.0f);
		transform.position = new Vector3 (x, 0.0f, z);
	}

	// Update is called once per frame
	void FixedUpdate () {
		float deltaTime = Time.deltaTime;

		switch (phase) {
		case PhaseType.ENTERING_PHASE:
			mouseRadius -= deltaTime * speed;
			if (mouseRadius <= circlingRadius) {
				mouseRadius = circlingRadius;  
				phase = PhaseType.RUNNING_PHASE;
			}
			break;
		case PhaseType.RUNNING_PHASE: {
			float angleDelta = (speed * Time.deltaTime / mouseRadius) * Mathf.Rad2Deg;
			if (isClockwise) {
				mouseAngle += angleDelta;
			} else {
				mouseAngle -= angleDelta;
			}

			if (isClockwise) {
				if (mouseAngle >= endAngle) {
					mouseAngle = endAngle;
					phase = PhaseType.LEAVING_PHASE;
				} 
			} else {
				if (mouseAngle <= endAngle) {
					mouseAngle = endAngle;
					phase = PhaseType.LEAVING_PHASE;
				}
			}

			break;
		}
		case PhaseType.LEAVING_PHASE:
			mouseRadius += deltaTime * speed;
			if (mouseRadius >= startMouseRadius) {
				gameController.OnMouseExit(this);
				Object.Destroy(this.gameObject);

			}
			break;
		}
	
		PositionMouse ();
	}


	public void OnMouseSwiped() {
		Object.Destroy(this.gameObject);
	}

	void SetAltMaterial(Material material) {
		foreach (Transform t in transform) {
			if (t.gameObject && t.gameObject.tag == "MouseBall" && 
			    t.gameObject.GetComponent<Renderer>()) {
				t.gameObject.GetComponent<Renderer>().material = material;
			}
		}
	}

	public void SetMouseType(MouseType mt) {
		mouseType = mt;
		
		switch (mouseType) {
		case MouseType.MOUSE_TYPE_FAST:
			speed = speed * 1.3f;
			SetAltMaterial(altMaterial01);
			break;
		case MouseType.MOUSE_TYPE_SLOW:
			speed = speed * 0.7f;
			SetAltMaterial(altMaterial02);
			break;
		}
	}

}
