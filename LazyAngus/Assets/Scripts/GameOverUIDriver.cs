using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class GameOverUIDriver : MonoBehaviour {
	public Text gameOverText;
	public Button againButton;

	// Use this for initialization
	void Start () {
		GameController gc = Utilities.GetGameController ();
		gameOverText.text = "Score: " + gc.GetScore();
	}

	public void RestartGame() {
		Application.LoadLevel (Application.loadedLevel);
	}
}
