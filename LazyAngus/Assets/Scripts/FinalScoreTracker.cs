using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class FinalScoreTracker : GameUI {
	public Text personalBestText;
	public Text finalScoreText;
	public bool started;

	void Awake() {
		Debug.Log ("FinalScoreTracker Awake");
	}

	void Start() {
		Debug.Log ("FinalScoreTracker Start");
		started = true;
		UpdateView ();
	}

	void OnEnable() {
		Debug.Log ("FinalScoreTracker OnEnable");
		if (started) {
			UpdateView ();
		}
	}

	void UpdateView() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.GAME_OVER) {
			return;
		}

		int personalBest = PlayerStats.instance.GetHighScore ();
		int finalScore = PlayerStats.instance.GetScore ();

		if (finalScore > personalBest) {
			PlayerStats.instance.SetHighScore (finalScore);
		}

		if (personalBest == 0) {
			personalBestText.gameObject.SetActive (false);
		} else {
			personalBestText.gameObject.SetActive (true);
			if (personalBest <= finalScore) {
				personalBestText.text = "New High Score!"; 
			} else {
				personalBestText.text = "High Score: " + personalBest; 
			}
		}

		finalScoreText.text = "Final Score: " + finalScore;
	}
}
