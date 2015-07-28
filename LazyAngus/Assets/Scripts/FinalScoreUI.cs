using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class FinalScoreUI : GameUI {
	public Text personalBestText;
	public Text finalScoreText;

	bool started;

	void Awake() {
		started = false;
	}

	void Start() {
		started = true;
		UpdateView ();
	}

	void OnEnable() {
		if (started) {
			UpdateView ();
		}
	}

	void UpdateView() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.GAME_OVER) {
			return;
		}

		int personalBest = PlayerStats.instance.GetHighScore ();
		int finalScore = PlayerStats.instance.gameScore;

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
