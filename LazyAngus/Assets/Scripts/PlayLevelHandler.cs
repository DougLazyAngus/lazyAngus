using UnityEngine;
using System.Collections;

public class PlayLevelHandler : MonoBehaviour {
	public void Play() {
		GamePhaseState.instance.TransitionToPhase (GamePhaseState.GamePhaseType.LEVEL_PLAY);
	}
}
