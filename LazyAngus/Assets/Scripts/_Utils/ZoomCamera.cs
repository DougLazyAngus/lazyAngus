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
	public float initSecondsPerPeriod = 0.5f;
	public float initTotalPeriods = 1f;
	public float initAdditionalScale = 1f;
	public float initPeriodOffsetDeg = 0f;
	public bool initLooping = false;


	void Awake() {
		myCamera = GetComponent<Camera>();
		mySizeCamera = GetComponent<SizeCamera> ();

		bounceLerp = new BounceLerp ();
		bounceLerp.secondsPerPeriod = initSecondsPerPeriod;
		bounceLerp.totalPeriods = initTotalPeriods;
		bounceLerp.additionalScale = initAdditionalScale;
		bounceLerp.periodOffsetDeg = initPeriodOffsetDeg;
		bounceLerp.looping = initLooping;
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
				bounceLerp.periodOffsetDeg = 270f;
				bounceLerp.additionalScale = (1 - 1/zoomOutScale);
				bounceLerp.totalPeriods = 0.5f;
				bounceLerp.secondsPerPeriod = TweakableParams.cameraZoomOutTime/bounceLerp.totalPeriods;

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
				bounceLerp.periodOffsetDeg = 90f;
				bounceLerp.additionalScale = (zoomOutScale - 1);
				bounceLerp.totalPeriods = 0.4f;
				bounceLerp.secondsPerPeriod = TweakableParams.cameraZoomInTime/bounceLerp.totalPeriods;

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
