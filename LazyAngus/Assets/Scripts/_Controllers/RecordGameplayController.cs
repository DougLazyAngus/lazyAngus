using UnityEngine;
using System.Collections;
using Prime31;
using System;
using System.Collections.Generic;


public class RecordGameplayController : MonoBehaviour {
	public static RecordGameplayController instance;
	
	public delegate void RecordGameplayChangedEventHandler();
	public event RecordGameplayChangedEventHandler RecordGameplayChanged;
	
	bool registeredForEvents = false;
	bool isReordingLocal = false;
	
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
		#if UNITY_IPHONE
		ReplayKitManager.previewControllerFinishedEvent += PreviewControllerFinished;
		#endif
		GamePhaseState.instance.GamePhaseChanged += (GamePhaseState.GamePhaseChangedEventHandler)OnGamePhaseChanged;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			#if UNITY_IPHONE
			ReplayKitManager.previewControllerFinishedEvent -= PreviewControllerFinished;
			#endif			
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
		return isReordingLocal;
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
		isReordingLocal = false;
		if (RecordGameplayChanged != null) {
			RecordGameplayChanged();
		}
		#endif
	}
	
	void StartRecording() {
		#if UNITY_IPHONE
		ReplayKit.startRecording (true);
		isReordingLocal = true;
		if (RecordGameplayChanged != null) {
			RecordGameplayChanged();
		}
		#endif
	}
}
