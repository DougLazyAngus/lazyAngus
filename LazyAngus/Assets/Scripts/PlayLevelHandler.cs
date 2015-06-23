using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
	public SecretUI secretUI;

	public void Start() {
	}

	public void Play() {

		if (DebugConfig.instance.debugFBShare) {
			FacebookSharing.instance.ShareScore (24);
			return;
		}  

		if (DebugConfig.instance.debugTwitterShare) {
			TwitterSharing.instance.ShareScore (25);
			return;
		} 


		int debugLevel = secretUI.GetSuggestedLevel ();
		if (debugLevel > 0) {
			GameController.instance.SetGameLevel (debugLevel);
		}
		secretUI.ClearSuggestedLevel ();

		GameController.instance.TransitionToPhase (GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
	}
}
