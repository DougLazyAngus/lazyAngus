using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class FinalScoreTracker : MonoBehaviour {
	public Text personalBestText;
	public Text finalScoreText;

	public Button fbButton;
	public Button twitterButton;

	// Use this for initialization
	void Start () {
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
		
		fbButton.onClick.AddListener(() => { 
			FacebookSharing.instance.ShareScore(finalScore);
		});
		
		twitterButton.onClick.AddListener(() => { 
			TwitterSharing.instance.ShareScore(finalScore);
		});
	}
}
