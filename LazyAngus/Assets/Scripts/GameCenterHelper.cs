using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

public class GameCenterHelper : MonoBehaviour {

	public enum AchievementID {
		DOUBLE_KILL = 0,
		TRIPLE_KILL, 
		QUAD_KILL, 
		ULTRA_KILL,
		WAVE_05,
		WAVE_10,
		WAVE_20,
		WAVE_40,
		NUM_VALUES,
	}

	string iOSLeaderboardID = "grp.LazyAngusBeta2";
	string androidLeaderboardID = LazyAngus.GPGSIds.leaderboard_top_scores;

	public static GameCenterHelper instance;
	
	bool socialHelperEnabled;

	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public bool CustomReportAchievement(string achievementID);
	
	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public bool CustomClearAchievements();
	
	string [] platformSpecificIdStrings;
	string leaderboardID;

	void Awake() {
		instance = this;


		platformSpecificIdStrings = new string[(int)AchievementID.NUM_VALUES];

		socialHelperEnabled = false;
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			socialHelperEnabled = true;
			leaderboardID = iOSLeaderboardID;

			platformSpecificIdStrings[(int)AchievementID.DOUBLE_KILL] = "grp.DoubleKill";
			platformSpecificIdStrings[(int)AchievementID.TRIPLE_KILL] = "grp.TripleKill";
			platformSpecificIdStrings[(int)AchievementID.QUAD_KILL] = "grp.QuadKill";
			platformSpecificIdStrings[(int)AchievementID.ULTRA_KILL] = "grp.UltraKill";

			platformSpecificIdStrings[(int)AchievementID.WAVE_05] = "grp.Wave05";
			platformSpecificIdStrings[(int)AchievementID.WAVE_10] = "grp.Wave10";
			platformSpecificIdStrings[(int)AchievementID.WAVE_20] = "grp.Wave20";
			platformSpecificIdStrings[(int)AchievementID.WAVE_40] = "grp.Wave40";
		} else if (Application.platform == RuntimePlatform.Android) {
			socialHelperEnabled = true;
			leaderboardID = androidLeaderboardID;

			platformSpecificIdStrings[(int)AchievementID.DOUBLE_KILL] = LazyAngus.GPGSIds.achievement_double_kill;
			platformSpecificIdStrings[(int)AchievementID.TRIPLE_KILL] = LazyAngus.GPGSIds.achievement_triple_kill;
			platformSpecificIdStrings[(int)AchievementID.QUAD_KILL] = LazyAngus.GPGSIds.achievement_quad_kill;
			platformSpecificIdStrings[(int)AchievementID.ULTRA_KILL] = LazyAngus.GPGSIds.achievement_ultra_kill;
			
			platformSpecificIdStrings[(int)AchievementID.WAVE_05] = LazyAngus.GPGSIds.achievement_wave_5;
			platformSpecificIdStrings[(int)AchievementID.WAVE_10] = LazyAngus.GPGSIds.achievement_wave_10;
			platformSpecificIdStrings[(int)AchievementID.WAVE_20] = LazyAngus.GPGSIds.achievement_wave_20;
			platformSpecificIdStrings[(int)AchievementID.WAVE_40] = LazyAngus.GPGSIds.achievement_wave_40;

			PlayGamesClientConfiguration pgcConfig = 
				new PlayGamesClientConfiguration.Builder().Build();
			
			PlayGamesPlatform.InitializeInstance(pgcConfig);
			// recommended for debugging:
			PlayGamesPlatform.DebugLogEnabled = true;
			// Activate the Google Play Games platform
			PlayGamesPlatform.Activate();
		}
	}

	public void Authenticate(System.Action<bool> handler) {
		if (socialHelperEnabled) {
			Social.localUser.Authenticate (success => {
				Debug.Log ("Authenticate called back with success: " + success);

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

	public void RecordAchievement(AchievementID achievementID) {
		string idString = platformSpecificIdStrings[(int)achievementID];
		Debug.Log ("SocialHelper: RecordAchievement");
		if (socialHelperEnabled && Social.localUser.authenticated) {
			if (Application.platform == RuntimePlatform.IPhonePlayer) {
				// Doesn't seem to work in iOS
				CustomReportAchievement(idString);
			} else {
				Social.ReportProgress(idString, 100.0, success => {
					Debug.Log ("Reported achievement = " + idString);
					Debug.Log ("success = " + success);
				});
			}
		}
	}
	
	public bool IsEnabled() {
		return socialHelperEnabled;
	}

	public void ShowLeaderBoard() {
		Debug.Log ("ShowLeaderBoard 01");
		if (!socialHelperEnabled) {
			Debug.Log ("ShowLeaderBoard 02");
			return;
		}

		Debug.Log ("ShowLeaderBoard 03");
		Authenticate (success => {
			if (Application.platform == RuntimePlatform.IPhonePlayer) {
				Debug.Log ("Showing LeaderBoard: " + leaderboardID);
				GameCenterPlatform.ShowLeaderboardUI (leaderboardID, 
			    	                                  TimeScope.Today);
			} else if (Application.platform == RuntimePlatform.Android) {
				Debug.Log ("ShowLeaderBoard 04");
				Debug.Log ("GooglePlayGames.PlayGamesPlatform.Instance = " + GooglePlayGames.PlayGamesPlatform.Instance);
				GooglePlayGames.PlayGamesPlatform.Instance.ShowLeaderboardUI();
				Debug.Log ("ShowLeaderBoard 05");
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
