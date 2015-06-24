using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
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


		int debugLevel = SecretUI.instance.GetSuggestedLevel ();
		if (debugLevel > 0) {
			GameController.instance.SetGameLevel (debugLevel);
		}
		SecretUI.instance.ClearSuggestedLevel ();

		GameController.instance.TransitionToPhase (GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
	}
}
