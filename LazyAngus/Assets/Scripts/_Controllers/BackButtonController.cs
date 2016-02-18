using UnityEngine;
using System.Collections;

// Handler for 'Back' button on Android.

public class BackButtonController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	void OnApplicationPause(bool pauseStatus) {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			TimeController.instance.SetTimeState (TimeController.TimeState.COMPLETE_PAUSE);
			PausedOverlay.instance.ShowSettingsButtons ();
		}	
	}


	// Update is called once per frame
	void Update() {
		if (Input.GetKeyDown (KeyCode.Escape)) {
			// First priority: 
			// If a dialog is showing, kill it.
			if (DialogController.instance.IsDialogShowing ()) {
				DialogController.instance.HideAnyDialog ();
				return;
			}


			switch (GamePhaseState.instance.gamePhase)  {
			case GamePhaseState.GamePhaseType.LEVEL_PLAY:
				if (TimeController.instance.timeState == TimeController.TimeState.PLAYING) {
					TimeController.instance.SetTimeState (TimeController.TimeState.COMPLETE_PAUSE);
					PausedOverlay.instance.ShowSettingsButtons ();
				} else {
					TimeController.instance.SetTimeState (TimeController.TimeState.PLAYING);
				}
				break;
			case GamePhaseState.GamePhaseType.INFO: 
				GamePhaseState.instance.TransitionToPhase (
					GamePhaseState.instance.previousGamePhase);
				break;
			case GamePhaseState.GamePhaseType.REAL_ANGUS:
				GamePhaseState.instance.TransitionToPhase (
					GamePhaseState.instance.previousGamePhase);
				break;
			case GamePhaseState.GamePhaseType.CAT_FACES:
				GamePhaseState.instance.TransitionToPhase (
					GamePhaseState.instance.previousGamePhase);
				break;
			case GamePhaseState.GamePhaseType.GAME_OVER:
				Application.Quit ();
				break;
			case GamePhaseState.GamePhaseType.WELCOME:
				Application.Quit ();
				break;
			} 
		}
	}
}
