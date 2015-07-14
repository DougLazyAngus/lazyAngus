﻿using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;

public class SocialHelper : MonoBehaviour {
	public string leaderboardID = "LazyAngusBeta2";
	public static SocialHelper instance;
	
	bool socialHelperEnabled;

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
					GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);
				}
				handler(success);
			});
			// Utilities.AuthenticateGameCenterHack();

		} else {
			handler(false);
		}
	}

	public void ReportScore(int score) {
		Debug.Log ("SocialHelper: ReportScore");
		if (socialHelperEnabled && Social.localUser.authenticated) {
			Social.ReportScore(score, leaderboardID, success => {
				Debug.Log ("Reported score = " + success);
			});
		}
	}
	
	public void RecordAchievement(string achievementID) {
		Debug.Log ("SocialHelper: RecordAchievement");
		if (socialHelperEnabled && Social.localUser.authenticated) {
			Social.ReportProgress(achievementID, 100.0, success => {
				Debug.Log ("Reported achievement = " + achievementID);
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
			if (Application.platform == RuntimePlatform.IPhonePlayer) {
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
