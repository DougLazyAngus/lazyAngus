using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class GameCenterButtons : MonoBehaviour {
	public Button leaderBoardButton;
	public Button achievementButton;
	public Button rateMeButton;

	void Awake() {
		Debug.Log ("GameCenterButtons awake");
	}

	void Start() {
		UpdateButtonAvailability ();
	}

	void UpdateButtonAvailability() {
		if (SocialHelper.instance.IsEnabled () || 
		    DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_UI_FOR_APPLE)) {
			gameObject.SetActive (true);
		} else {
			gameObject.SetActive (false);
		}
	}

	public void ShowLeaderboard() {
		SocialHelper.instance.ShowLeaderBoard();
	}

	public void ShowRateMe() {
		RatingsHelper.instance.ShowRatingsPage();
	}

	public void ShowAchievements() {		
		SocialHelper.instance.ShowAchievements();	
	}

}
