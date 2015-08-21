using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class SocialMediaButtons : MonoBehaviour {

	public Button fbButton;
	public Button twitterButton;
	public Button shareButton;

	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void LaunchShareWidget(int score, bool isHighScore);

	// Use this for initialization
	void Start () {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			fbButton.gameObject.SetActive (false);
			twitterButton.gameObject.SetActive (false);
			shareButton.gameObject.SetActive (true);

			shareButton.onClick.AddListener (() => { 
				int personalBest = PlayerStats.instance.GetHighScore ();
				int finalScore = PlayerStats.instance.gameScore;
				LaunchShareWidget (finalScore, finalScore == personalBest);
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
