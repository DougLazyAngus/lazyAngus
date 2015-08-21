using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class SocialMediaButtons : MonoBehaviour {

	public Button fbButton;
	public Button twitterButton;

	// Use this for initialization
	void Start () {
		fbButton.onClick.AddListener(() => { 
			int personalBest = PlayerStats.instance.GetHighScore ();
			int finalScore = PlayerStats.instance.gameScore;
			FacebookSharing.instance.ShareScore(finalScore, 
			                                    finalScore == personalBest);
		});

		twitterButton.onClick.AddListener(() => { 
			int finalScore = PlayerStats.instance.gameScore;
			TwitterSharing.instance.ShareScore(finalScore);
		});
	}
}
