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
			int finalScore = PlayerStats.instance.GetScore ();
			FacebookSharing.instance.ShareScore(finalScore);
		});

		twitterButton.onClick.AddListener(() => { 
			int finalScore = PlayerStats.instance.GetScore ();
			TwitterSharing.instance.ShareScore(finalScore);
		});
	}
}
