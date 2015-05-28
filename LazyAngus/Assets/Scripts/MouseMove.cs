﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

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
	private float startAngle;
	private float endAngle;
	public float endAngleSkew = 20.0f;
	private int durationIndex;

	private float mouseRadius;
	private float circlingRadius;
	public float minCirclingRadius = 3.0f;
	public float maxCirclingRadius = 4.5f;
	public int numTracks = 3;
	public static float startMouseRadius = 7.0f;

	private PhaseType phase;
	private GameController gameController;

	private MouseType mouseType;

	public Material altMaterial01;
	public Material altMaterial02;
	
	private float speed;
	public float minSpeed = 0.7f;
	public float maxSpeed = 1.3f;
	
	public int mouseHomeIndex;
	
	private bool isClockwise;

	public GameObject sliderProtoype;
	private Slider sliderInstance;
	
	public Vector2 hudOffset;

	
	// Use this for initialization
	void Start () {
		gameController = Utilities.GetGameController ();

		mouseAngle = startAngle;
		phase = PhaseType.ENTERING_PHASE;
		mouseRadius = startMouseRadius; 

		MakeSlider ();

		PositionMouse ();
	}

	void MakeSlider() {
		GameObject sliderGameObject;
		sliderGameObject = Instantiate (sliderProtoype, 
		                            new Vector3 (0, 0, 0),
		                                Quaternion.identity) as GameObject;
		UIFollower uiFollower = sliderGameObject.GetComponent<UIFollower> ();
		uiFollower.parentTransform = gameObject.transform;
		uiFollower.offset = hudOffset;

		GameObject canvas = Utilities.GetCanvasGameObject ();
		sliderGameObject.transform.SetParent (canvas.transform);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();

		TweakableSlider ts = sliderGameObject.GetComponent<TweakableSlider> ();
		if (durationIndex == 0) {
			ts.fill.color = new Color(1.0f, 0.0f, 0.0f);
		} else if (durationIndex == 1) {
			ts.fill.color = new Color(1.0f, 0.5f, 0.0f);
		} else {
			ts.fill.color = new Color(1.0f, 1.0f, 0.0f);
		}
	}


	void PositionMouse() {
		float x = mouseRadius * Mathf.Sin (Mathf.Deg2Rad * mouseAngle);
		float z = mouseRadius * Mathf.Cos (Mathf.Deg2Rad * mouseAngle);

		float finalAngle = mouseAngle;
		float adjustment = 0.0f;

		float fractionFinished = 0.0f;

		switch (phase) {
		case PhaseType.ENTERING_PHASE:
			adjustment = 180.0f;
			break;
		case PhaseType.RUNNING_PHASE:
			adjustment = isClockwise ? 90.0f : -90.0f;
			fractionFinished = Mathf.Abs(mouseAngle - startAngle)/Mathf.Abs(startAngle - endAngle);
			break;
		case PhaseType.LEAVING_PHASE:
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
		case PhaseType.RUNNING_PHASE:
			fractionFinished = Mathf.Abs(mouseAngle - startAngle)/Mathf.Abs(startAngle - endAngle);
			break;
		case PhaseType.LEAVING_PHASE:
			fractionFinished = 1.0f;
			break;
		}

		sliderInstance.value = fractionFinished;
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
				CleanupSelf();
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

	void CleanupSelf() {
		Object.Destroy (sliderInstance.gameObject);
		Object.Destroy(this.gameObject);
	}
		
		//------------------------------------------
	// 
	// Public functions
	//
	//------------------------------------------
	public void RandomizeSetup() {
		mouseHomeIndex = Random.Range (0, 4);
		startAngle = mouseHomeIndex * 90.0f;
		
		durationIndex = Random.Range (0, 3);
		float endAngleDelta = 135.0f + durationIndex * 90.0f;

		int orientation = Random.Range (0, 2);
		isClockwise = (orientation != 0);
		
		if (isClockwise) {
			endAngle = startAngle + endAngleDelta;
		} else {
			startAngle += 360.0f;
			endAngle = startAngle - endAngleDelta;
		}	

		int track = Random.Range (0, numTracks);
		float extraRadiusFraction = (float)track/(float)(numTracks - 1);
		float extraRadius = (maxCirclingRadius - minCirclingRadius) * extraRadiusFraction;

		this.circlingRadius = minCirclingRadius + extraRadius;

		int mtAsInt = Random.Range (0, (int)MouseMove.MouseType.NUM_MOUSE_TYPES);
		
		this.SetMouseType((MouseMove.MouseType)mtAsInt);
	}
	
	
	public void OnMouseSwiped() {
		CleanupSelf ();
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
