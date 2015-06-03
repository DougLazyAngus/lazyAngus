﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackScore : MonoBehaviour {

	private Text scoreText;
	private DistortForEffect distortForEffect;

	private GameController gc;
	private bool registeredForEvents;

	// Use this for initialization
	void Start () {
		scoreText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();

		gc = Utilities.GetGameController ();
		gc.ScoreChanged += new GameController.ScoreChangedEventHandler (DynamicUpdateScoreText);
		registeredForEvents = true;
		SetScoreText ();
	}

	void OnDestroy() {
		if (registeredForEvents) {
			gc.ScoreChanged -= new GameController.ScoreChangedEventHandler (DynamicUpdateScoreText);
		}
	}

	void SetScoreText() {
		scoreText.text = "Kills: " + gc.GetScore ();
	}

	// Update is called once per frame
	void DynamicUpdateScoreText () {
		SetScoreText ();
		distortForEffect.Distort ();
	}
}
