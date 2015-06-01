using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackScore : MonoBehaviour {

	public Text scoreText;
	private GameController gc;

	// Use this for initialization
	void Start () {
		gc = Utilities.GetGameController ();
		gc.ScoreChanged += new GameController.ScoreChangedEventHandler (UpdateScoreText);
		UpdateScoreText ();
	}

	void OnDestroy() {
		gc.ScoreChanged -= new GameController.ScoreChangedEventHandler (UpdateScoreText);
	}

	// Update is called once per frame
	void UpdateScoreText () {
		scoreText.text = "Kills: " +gc.GetScore ();
	}
}
