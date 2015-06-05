using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class FinalScoreTracker : MonoBehaviour {
	public Text finalScoreText;

	// Use this for initialization
	void Start () {
		finalScoreText.text = "Final Score: " + PlayerStats.instance.GetScore ();
	}
}
