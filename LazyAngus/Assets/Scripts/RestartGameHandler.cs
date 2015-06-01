using UnityEngine;
using System.Collections;

public class RestartGameHandler : MonoBehaviour {
	public void RestartGame() {
		Application.LoadLevel (Application.loadedLevel);
	}
}
