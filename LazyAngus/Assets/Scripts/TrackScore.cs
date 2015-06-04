using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackScore : MonoBehaviour {

	private Text scoreText;
	private DistortForEffect distortForEffect;

	private PlayerStats playerStats;
	private bool registeredForEvents;

	// Use this for initialization
	void Start () {
		scoreText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();

		playerStats = Utilities.GetPlayerStats ();
		playerStats.ScoreChanged += new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		registeredForEvents = true;
		SetScoreText ();
	}

	void OnDestroy() {
		if (registeredForEvents) {
			playerStats.ScoreChanged -= new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		}
	}

	void SetScoreText() {
		scoreText.text = "Kills: " + playerStats.GetScore ();
	}

	// Update is called once per frame
	void DynamicUpdateScoreText () {
		SetScoreText ();
		distortForEffect.Distort ();
	}
}
