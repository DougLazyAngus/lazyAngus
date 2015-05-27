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


	private float mouseAngle;
	private float mouseRadius;

	private float startAngle;
	private float endAngle;

	public static float startMouseRadius = 7.0f;

	private PhaseType phase;
	private GameController gameController;

	private MouseType mouseType;

	public Material altMaterial01;
	public Material altMaterial02;

	public float minCirclingRadius = 3.0f;
	public float maxCirclingRadius = 4.5f;
	public int numTracks = 3;

	public float minSpeed = 0.7f;
	public float maxSpeed = 1.3f;

	public float endAngleSkew = 20.0f;
	public int mouseHomeIndex;


	private float circlingRadius;
	private float speed;
	private bool isClockwise;

	// Use this for initialization
	void Start () {
		gameController = Utilities.GetGameController ();

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
	
	void SetAltMaterial(Material material) {
		foreach (Transform t in transform) {
			if (t.gameObject && t.gameObject.tag == "MouseBall" && 
			    t.gameObject.GetComponent<Renderer>()) {
				t.gameObject.GetComponent<Renderer>().material = material;
			}
		}
	}

	//------------------------------------------
	// 
	// Public functions
	//
	//------------------------------------------
	public void RandomizeSetup() {
		this.mouseHomeIndex = Random.Range (0, 4);
		this.startAngle = this.mouseHomeIndex * 90.0f;
		
		int orientation = Random.Range (0, 2);
		this.isClockwise = (orientation != 0);
		
		if (this.isClockwise) {
			this.endAngle = this.startAngle + 360.0f - this.endAngleSkew;
		} else {
			this.endAngle = this.startAngle + this.endAngleSkew;
			this.startAngle += 360.0f;
		}	
		
		int track = Random.Range (0, numTracks);
		float extraRadiusFraction = (float)track/(float)(numTracks - 1);
		float extraRadius = (maxCirclingRadius - minCirclingRadius) * extraRadiusFraction;

		this.circlingRadius = minCirclingRadius + extraRadius;

		int mtAsInt = Random.Range (0, (int)MouseMove.MouseType.NUM_MOUSE_TYPES);
		
		this.SetMouseType((MouseMove.MouseType)mtAsInt);
	}
	
	
	public void OnMouseSwiped() {
		Object.Destroy(this.gameObject);
	}

	public void SetMouseType(MouseType mt) {
		mouseType = mt;
		
		switch (mouseType) {
		case MouseType.MOUSE_TYPE_FAST:
			speed = maxSpeed;
			SetAltMaterial(altMaterial01);
			break;
		case MouseType.MOUSE_TYPE_SLOW:
			speed = minSpeed;
			SetAltMaterial(altMaterial02);
			break;
		case MouseType.MOUSE_TYPE_MEDIUM:
			speed = (maxSpeed + minSpeed)/2;
			break;
		}
	}

}
