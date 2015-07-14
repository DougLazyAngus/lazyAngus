using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class FinalScoreTracker : MonoBehaviour {
	public Text personalBestText;
	public Text finalScoreText;
	
	// Use this for initialization
	void OnEnabled () {
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
