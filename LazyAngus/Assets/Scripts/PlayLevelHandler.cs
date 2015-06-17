using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
	public SecretUI secretUI;

	public void Start() {
	}

	public void Play() {
		int debugLevel = secretUI.GetSuggestedLevel ();
		if (debugLevel > 0) {
			GameController.instance.DebugSetGameLevel (debugLevel);
		}
		secretUI.ClearSuggestedLevel ();

		GameController.instance.TransitionToPhase (GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
	}
}
