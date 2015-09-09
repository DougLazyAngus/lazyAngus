using UnityEngine;
using System.Collections;

public class RestartGameHandler : MonoBehaviour {
	public void ResetLevelAndRestart() {
		GameLevelState.instance.SetGameLevel (1);
		RestartGame ();
	}

	public void RestartGame() {
		GamePhaseState.instance.RestartGame ();
	}
}
