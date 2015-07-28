using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackScore : MonoBehaviour {

	private Text scoreText;
	private DistortForEffect distortForEffect;

	private PlayerStats playerStats;
	private bool registerdForEvents;

	// Use this for initialization
	void Start () {
		playerStats = PlayerStats.instance;

		scoreText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();


		playerStats.ScoreChanged += new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		registerdForEvents = true;
		SetScoreText ();
	}

	void OnDestroy() {
		if (registerdForEvents) {
			playerStats.ScoreChanged -= new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		}
	}

	void SetScoreText() {
		scoreText.text = "Kills: " + playerStats.gameScore;
	}

	// Update is called once per frame
	void DynamicUpdateScoreText () {
		SetScoreText ();
		distortForEffect.Distort ();
	}
}
