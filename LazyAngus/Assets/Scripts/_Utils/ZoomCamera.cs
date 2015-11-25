using UnityEngine;
using System.Collections;

public class ZoomCamera : MonoBehaviour {
	public float zoomOutScale = 1.5f;

	float phaseStartTime;
	float timeToStartZooming;

	Camera myCamera;
	SizeCamera mySizeCamera;

	bool registeredForEvents;
	bool zooming;

	BounceLerp bounceLerp;
	public float secondsPerPeriod = 0.3f;
	public float totalPeriods = 1f;
	public float additionalScale = 1f;
	public float periodOffsetDeg = 0f;
	public bool looping = false;


	void Awake() {
		myCamera = GetComponent<Camera>();
		mySizeCamera = GetComponent<SizeCamera> ();

		bounceLerp = new BounceLerp ();
		bounceLerp.secondsPerPeriod = secondsPerPeriod;
		bounceLerp.totalPeriods = totalPeriods;
		bounceLerp.additionalScale = additionalScale;
		bounceLerp.periodOffsetDeg = periodOffsetDeg;
		bounceLerp.looping = looping;
	}
	
	void Start () {
		RegisterForEvents ();	
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
	}
	
	void Update() {
		if (zooming) {
			UpdateCameraSize ();
		}
	}
	
	public void UpdateCameraSize() {
		float scale;
		bool isFinished;

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.PENDING: 
		{
			float timeDelta = (Time.time - timeToStartZooming);
			if (timeDelta < 0) {
				scale = 1f;
			} else {
				periodOffsetDeg = 270f;
				additionalScale = (1 - 1/zoomOutScale);
				totalPeriods = 0.5f;
				secondsPerPeriod = TweakableParams.cameraZoomOutTime/totalPeriods;

				scale = zoomOutScale * bounceLerp.GetCoefficientForTime(timeDelta, out isFinished);
				if (isFinished) {
					zooming = false;
				}
			}
			break;
		}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
		{
			float timeDelta = (Time.time - timeToStartZooming);
			if (timeDelta < 0) {
				scale = zoomOutScale;
			} else {
				periodOffsetDeg = 90f;
				additionalScale = (zoomOutScale - 1);
				totalPeriods = 0.4f;
				secondsPerPeriod = TweakableParams.cameraZoomInTime/totalPeriods;

				scale = bounceLerp.GetCoefficientForTime(timeDelta, out isFinished);
				if (isFinished) {
					zooming = false;
				}
			}
			break;
		}
		default:
			zooming = false;
			scale = zoomOutScale;
			break;
		}

		float height = scale * mySizeCamera.finalActualWorldHalfHeight;
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
		zooming = true;

		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.PENDING) {
			timeToStartZooming = (phaseStartTime + TweakableParams.cameraZoomOutPause);
		} 
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			timeToStartZooming = (phaseStartTime + TweakableParams.cameraZoomInPause);
		}
	}
}
