using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class FinalScoreTracker : MonoBehaviour {
	public Text finalScoreText;

	// Use this for initialization
	void Start () {
		PlayerStats ps = Utilities.GetPlayerStats ();
		finalScoreText.text = "Final Score: " + ps.GetScore ();
	}
}
