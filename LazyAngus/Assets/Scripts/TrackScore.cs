using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackScore : MonoBehaviour {

	public Text scoreText;
	private GameController gc;
	private DistortForEffect distortForEffect;
	private bool registeredForEvents;

	// Use this for initialization
	void Start () {
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();
		gc = Utilities.GetGameController ();
		gc.ScoreChanged += new GameController.ScoreChangedEventHandler (UpdateScoreText);
		registeredForEvents = true;
		UpdateScoreText ();
	}

	void OnDestroy() {
		if (registeredForEvents) {
			gc.ScoreChanged -= new GameController.ScoreChangedEventHandler (UpdateScoreText);
		}
	}

	// Update is called once per frame
	void UpdateScoreText () {
		scoreText.text = "Kills: " +gc.GetScore ();
		distortForEffect.Distort ();
	}
}
