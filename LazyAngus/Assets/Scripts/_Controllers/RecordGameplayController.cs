using UnityEngine;
using System.Collections;
using Prime31;
using System;
using System.Collections.Generic;


public class RecordGameplayController : MonoBehaviour {
	public static RecordGameplayController instance;

	public delegate void RecordGameplayChangedEventHandler();
	public event RecordGameplayChangedEventHandler RecordGameplay;

	bool registeredForEvents = false;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
		
	}

	// Update is called once per frame
	void Update () {
	
	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		ReplayKitManager.previewControllerFinishedEvent += PreviewControllerFinished;
		GamePhaseState.instance.GamePhaseChanged += (GamePhaseState.GamePhaseChangedEventHandler)OnGamePhaseChanged;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			ReplayKitManager.previewControllerFinishedEvent -= PreviewControllerFinished;
			GamePhaseState.instance.GamePhaseChanged -= (GamePhaseState.GamePhaseChangedEventHandler)OnGamePhaseChanged;
		}
	}

	void OnGamePhaseChanged() {
		// If we are not playing the game, it's all over.
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY && 
			GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.PENDING) {
			if (IsRecording ()) {
				StopRecording();
			}
		}
	}

	void PreviewControllerFinished(List<string> activityTypes) {
		// When we come back from preview controller, un-pause.
		TimeController.instance.SetTimeState (TimeController.TimeState.PLAYING);
	}
	
	public static bool IsRecordingSupported() {
#if UNITY_IPHONE
		return ReplayKit.isReplayKitAvailable();
#else 
		return false;
#endif
	}

	public bool IsRecording() {
#if UNITY_IPHONE
		if (!ReplayKit.isReplayKitAvailable()) {
			return false;
		}
		return ReplayKit.isCurrentlyRecording();
#else 
		return false;
#endif

	}

	public void ToggleRecording() {
		if (Debug.isDebugBuild) {
			Debug.Log ("Called Toggle Replay");
		}
#if UNITY_IPHONE
		if (Debug.isDebugBuild) {
			Debug.Log ("It's iPhone");
		}
		if (!ReplayKit.isReplayKitAvailable()) {
			return;
		}

		if (Debug.isDebugBuild) {
			Debug.Log ("Replay kit is available");
		}
		if (ReplayKit.isCurrentlyRecording ()) {
			if (Debug.isDebugBuild) {
				Debug.Log ("Is recording, stopping");
			}
			StopRecording ();
		} else {
			if (Debug.isDebugBuild) {
				Debug.Log ("Not recording, starting");
			}
			StartRecording ();
		}
#endif
	}


	void StopRecording() {
#if UNITY_IPHONE
		// Pause the game first....
		TimeController.instance.SetTimeState (TimeController.TimeState.COMPLETE_PAUSE);
		ReplayKit.stopRecording (true);
#endif
	}

	void StartRecording() {
#if UNITY_IPHONE
		ReplayKit.startRecording (true);
#endif
	}
}
