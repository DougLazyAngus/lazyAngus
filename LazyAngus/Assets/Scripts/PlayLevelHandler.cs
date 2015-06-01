using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
	public void Play() {
		GameController gc = Utilities.GetGameController ();
		gc.TransitionToPhase (GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
	}
}
