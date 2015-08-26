using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class ScoreDisplay : MonoBehaviour {

	Text scoreText;
	DistortForEffect distortForEffect;

	bool registerdForEvents;

	void Awake() {
		distortForEffect = GetComponent<DistortForEffect> ();
	}

	// Use this for initialization
	void Start () {
		scoreText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();

		RegisterForEvents ();
		SetScoreText ();
	}

	void RegisterForEvents() {
		PlayerStats.instance.ScoreChanged += new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		registerdForEvents = true;
	}

	void OnDestroy() {
		if (registerdForEvents) {
			PlayerStats.instance.ScoreChanged -= new PlayerStats.ScoreChangedEventHandler (DynamicUpdateScoreText);
		}
	}

	void SetScoreText() {
		scoreText.text = "Kills: " + PlayerStats.instance.gameScore;
	}

	void DynamicUpdateScoreText () {
		SetScoreText ();
		distortForEffect.DistortWithDelay (TweakableParams.flyingAnimationTime + 
		                                   TweakableParams.deadMouseAnimationTime);
	}
}
