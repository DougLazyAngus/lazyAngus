using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class FinalScoreUI : GameUI {
	public Text personalBestText;
	public Text finalScoreText;
	public Text finalScoreLabel;

	public Color labelColor = new Color (0, 0.8f, 0.9f);

	bool started;

	void Awake() {
		started = false;
		finalScoreLabel.color = labelColor;
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
				personalBestText.text = Utilities.AddTextColor ("Best ever!!", 
				                                                labelColor);
			} else {
				personalBestText.text = MakeBestScoreText(personalBest);
			}
		}

		finalScoreText.text = MakeFinalScoreText (finalScore);
	}
	
	string MakeBestScoreText(int personalBest) {
		string retval = "Best";
		retval = Utilities.AddTextColor (retval, labelColor);
		retval += " " + personalBest;
		return retval;
	}
	string MakeFinalScoreText(int finalScore) {
		return "" + finalScore;
	}
}
