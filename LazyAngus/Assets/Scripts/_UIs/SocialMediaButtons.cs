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
		UpdateButtonAvailability ();

		// FIXME(dbanks)
		// Until we get this working...
		fbButton.gameObject.SetActive (false);
		twitterButton.gameObject.SetActive (false);
	}

	void UpdateButtonAvailability() {
		if (!DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_NON_APPLE_SHARING) && (
		    Application.platform == RuntimePlatform.IPhonePlayer || 
		    DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_UI_FOR_APPLE))) {
//			fbButton.gameObject.SetActive (false);
			twitterButton.gameObject.SetActive (false);
			shareButton.gameObject.SetActive (true);
		} else {
//			fbButton.gameObject.SetActive (true);
			twitterButton.gameObject.SetActive (true);
			shareButton.gameObject.SetActive (false);
		}
	}

	public void ShareInShareWidget() {
		int personalBest = PlayerStats.instance.GetHighScore ();
		int finalScore = PlayerStats.instance.gameScore;
		LaunchShareWidget (finalScore, finalScore == personalBest);
	}

	public void ShareOnFB() {
		int personalBest = PlayerStats.instance.GetHighScore ();
		int finalScore = PlayerStats.instance.gameScore;
		SAMobileSocialHelper.instance.ShareScoreOnFB (finalScore, 
		                                              finalScore == personalBest);
	}

	public void ShareOnTwitter() {
		int finalScore = PlayerStats.instance.gameScore;
		SAMobileSocialHelper.instance.ShareScoreOnTwitter (finalScore);
	}

}
