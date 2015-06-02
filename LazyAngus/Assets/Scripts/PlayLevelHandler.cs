using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
	public SecretUI secretUI;
	GameController gameController;

	public void Start() {
		gameController = Utilities.GetGameController ();
	}

	public void Play() {
		int debugLevel = secretUI.GetSuggestedLevel ();
		if (debugLevel > 0) {
			gameController.DebugSetGameLevel (debugLevel);
		}
		secretUI.ClearSuggestedLevel ();

		gameController.TransitionToPhase (GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
	}
}
