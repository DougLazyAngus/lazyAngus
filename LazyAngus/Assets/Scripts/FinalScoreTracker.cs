using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class FinalScoreTracker : MonoBehaviour {
	public Text personalBestText;
	public Text finalScoreText;

	// Use this for initialization
	void Start () {
		int personalBest = PersistentStorage.instance.GetIntValue ("personalBest", 0);
		int finalScore = PlayerStats.instance.GetScore ();

		if (finalScore > personalBest) {
			PersistentStorage.instance.SetIntValue ("personalBest", finalScore);
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
