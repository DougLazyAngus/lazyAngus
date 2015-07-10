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

		GameController.instance.TransitionToPhase (GameController.GamePhaseType.LEVEL_PLAY);
	}
}
