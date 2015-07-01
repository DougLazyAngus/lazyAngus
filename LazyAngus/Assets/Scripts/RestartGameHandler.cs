using UnityEngine;
using System.Collections;

public class RestartGameHandler : MonoBehaviour {
	public void RestartGame() {
		GameController.instance.RestartGame ();
//		Application.LoadLevel (Application.loadedLevel);
	}
}
