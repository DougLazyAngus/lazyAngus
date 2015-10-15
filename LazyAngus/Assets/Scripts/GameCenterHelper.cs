using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;

public class GameCenterHelper : MonoBehaviour {
	string leaderboardID = "grp.LazyAngusBeta2";
	public static GameCenterHelper instance;
	
	bool socialHelperEnabled;

	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public bool CustomReportAchievement(string achievementID);
	
	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public bool CustomClearAchievements();
	

	void Awake() {
		instance = this;

		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			socialHelperEnabled = true;

		} else {
			socialHelperEnabled = false;
		}
	}

	public void Authenticate(System.Action<bool> handler) {
		if (socialHelperEnabled) {
			Social.localUser.Authenticate (success => {
				if (success) {
					if (Application.platform == RuntimePlatform.IPhonePlayer) {

						// This doesn't seem to work.
						// Doing my own manual version.
						GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);

						/*
						Debug.Log ("Calling : DebugScoreAndAchievement 001");
						StartCoroutine(DebugScoreAndAchievement());
						Debug.Log ("Calling : DebugScoreAndAchievement 002");
						*/
					}
				}

				handler(success);
			});
			// Utilities.AuthenticateGameCenterHack();

		} else {
			handler(false);
		}
	}
	
	
	IEnumerator DebugScoreAndAchievement() {
		Debug.Log ("DebugScoreAndAchievement: part 1");
		yield return new WaitForSeconds (2);
		Debug.Log ("DebugScoreAndAchievement: part 2");
		CustomReportAchievement ("grp.QuadKill");
	}

	public void ClearAchievements() {
		CustomClearAchievements();
	}

	public void ReportScore(int score) {
		Debug.Log ("SocialHelper: ReportScore " + score + " to " + leaderboardID);
		if (socialHelperEnabled && Social.localUser.authenticated) {
			Social.ReportScore(score, leaderboardID, success => {
				Debug.Log ("Reported score " + score + " to " + leaderboardID + ": " + success);				 
			});
		}
	}
	
	public void RecordAchievement(string achievementID) {
		Debug.Log ("SocialHelper: RecordAchievement");
		if (socialHelperEnabled && Social.localUser.authenticated) {
			if (Application.platform == RuntimePlatform.IPhonePlayer) {
				// Doesn't seem to work in iOS
				CustomReportAchievement(achievementID);
			} else {
				Social.ReportProgress(achievementID, 100.0, success => {
					Debug.Log ("Reported achievement = " + achievementID);
					Debug.Log ("success = " + success);
				});
			}
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
			if (Application.platform == RuntimePlatform.IPhonePlayer) {
				Debug.Log ("Showing leaderboard: " + leaderboardID);
				GameCenterPlatform.ShowLeaderboardUI (leaderboardID, 
			    	                                  TimeScope.Today);
			}
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
