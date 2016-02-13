using UnityEngine;
using System.Collections;

public class BackButtonController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update() {
		if (Input.GetKeyDown (KeyCode.Escape)) {
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
			} 
		}
	}
}
