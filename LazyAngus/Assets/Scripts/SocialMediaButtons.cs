﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class SocialMediaButtons : MonoBehaviour {

	public Button fbButton;
	public Button twitterButton;
	public Button shareButton;

	// Use this for initialization
	void Start () {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			fbButton.gameObject.SetActive (false);
			twitterButton.gameObject.SetActive (false);
			shareButton.gameObject.SetActive (true);

			fbButton.onClick.AddListener (() => { 
				int personalBest = PlayerStats.instance.GetHighScore ();
				int finalScore = PlayerStats.instance.gameScore;
				FacebookSharing.instance.ShareScore (finalScore, 
				                                     finalScore == personalBest);
			});
		} else {
			fbButton.gameObject.SetActive (true);
			twitterButton.gameObject.SetActive (true);
			shareButton.gameObject.SetActive (false);

			fbButton.onClick.AddListener (() => { 
				int personalBest = PlayerStats.instance.GetHighScore ();
				int finalScore = PlayerStats.instance.gameScore;
				FacebookSharing.instance.ShareScore (finalScore, 
				                                    finalScore == personalBest);
			});

			twitterButton.onClick.AddListener (() => { 
				int finalScore = PlayerStats.instance.gameScore;
				TwitterSharing.instance.ShareScore (finalScore);
			});
		}
	}
}
