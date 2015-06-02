using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class FinalScoreTracker : MonoBehaviour {
	public Text finalScoreText;

	// Use this for initialization
	void Start () {
		GameController gc = Utilities.GetGameController ();
		finalScoreText.text = "Final Score: " + gc.GetScore ();
	}
}
