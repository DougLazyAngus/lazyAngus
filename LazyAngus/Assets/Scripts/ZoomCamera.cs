using UnityEngine;
using System.Collections;

public class ZoomCamera : MonoBehaviour {
	public float zoomOutScale = 1.5f;
	public float zoomInScale = 0.95f;
	public float zoomInTime = 0.5f;
	public float zoomOutTime = 1.4f;
	
	float phaseStartTime;
	Camera myCamera;
	SizeCamera mySizeCamera;
	
	bool registeredForEvents;

	void Awake() {
		myCamera = GetComponent<Camera>();
		mySizeCamera = GetComponent<SizeCamera> ();
	}
	
	void Start () {
		RegisterForEvents ();	
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
	}
	
	void Update() {
		UpdateCameraSize ();
	}
	
	public void UpdateCameraSize() {
		float scale;
		float tFraction;
		float[] coefficients;
		
		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.PENDING:
			tFraction = (Time.time - (phaseStartTime + GamePhaseState.instance.pendingPause - zoomOutTime)) / zoomOutTime;
			if (tFraction < 0) {
				scale = 1;
			} else if (tFraction <= 1) {
				coefficients = Utilities.GetBlendingCoefficients(tFraction, 3);
				scale = coefficients[0] + coefficients[1] * zoomInScale + 
					coefficients[2] * zoomOutScale;
			} else {
				scale = zoomOutScale;
			}
			break;
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			tFraction = (Time.time - phaseStartTime) / zoomInTime;
			if (tFraction < 0) {
				scale = zoomOutScale;
			} else if (tFraction <= 1) {
				coefficients = Utilities.GetBlendingCoefficients(tFraction, 3);
				scale = coefficients[0] * zoomOutScale + coefficients[1] * zoomInScale + 
					coefficients[2];
			} else {
				scale = 1;
			}
			break;
		default:
			scale = zoomOutScale;
			break;
		}
		float height = scale * mySizeCamera.finalWorldHalfHeight;
		if (myCamera.orthographicSize != height) {
			myCamera.orthographicSize = height;
		}
	}


	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}
	
	void OnGamePhaseChanged() {
		phaseStartTime = Time.time;
	}
}
