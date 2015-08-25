using UnityEngine;
using System.Collections;

public class ZoomCamera : BounceLerp {
	float phaseStartTime;
	float timeToStartZooming;

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

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.PENDING: 
		{
			float timeDelta = (Time.time = timeToStartZooming);
			tFraction = (Time.time - timeToStartZooming) / TweakableParams.cameraZoomOutTime;
			if (timeDelta < 0) {
				scale = 1;
			} else {
				periodOffsetDeg = 270f;
				additionalScale = (1 - 1/zoomOutScale);
				scale = zoomOutScale;
			}
			break;
		}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
		{
			float timeDelta = (Time.time = timeToStartZooming);
			if (timeDelta < 0) {
				scale = zoomOutScale;
			} else {
				scale = 1;
			}
			break;
		}
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
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.PENDING) {
			timeToStartZooming = (phaseStartTime + TweakableParams.cameraZoomOutPause);
		} 
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			float timeToStartZooming = (phaseStartTime + TweakableParams.cameraZoomInPause);
		}
	}
}
