using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;

public class SocialHelper : MonoBehaviour {
	public string leaderboardID = "LazyAngusBeta2";
	public static SocialHelper instance;
	
	bool socialHelperEnabled;

	void Awake() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			socialHelperEnabled = true;
		} else {
			socialHelperEnabled = false;
		}
	}

	public void Authenticate(System.Action<bool> handler) {
		if (socialHelperEnabled) {
			Social.localUser.Authenticate (handler);
		} else {
			handler(false);
		}
	}

	public void ReportScore(int score) {
		if (Social.localUser.authenticated) {
			Social.ReportScore(score, leaderboardID, success => {
				Debug.Log ("Reported score = " + success);
			});
		}
	}

	public bool IsEnabled() {
		return socialHelperEnabled;
	}

	public void ShowLeaderBoard() {
		if (!socialHelperEnabled) {
			return;
		}

		Authenticate (success => {
			GameCenterPlatform.ShowLeaderboardUI (leaderboardID, 
			                                      TimeScope.Today);
		});
	}

	public void ShowAchievements() {
		if (!socialHelperEnabled) {
			return;
		}
		
		Authenticate (success => {
			Social.ShowAchievementsUI();
		});
	}

	
}
