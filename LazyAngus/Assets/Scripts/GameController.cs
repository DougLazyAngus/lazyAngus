using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {
	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseHole[] mouseHoles;
	
	private MouseSpawnFromData mouseSpawnFromData;
	
	public static GameController instance { get; private set; }
	bool registeredForEvents;

	void Awake() {
		instance = this;

		Physics2D.IgnoreLayerCollision (8, 9, true);	

		mouseSpawnFromData = gameObject.GetComponent<MouseSpawnFromData> ();
	}

	void Start() {
		RegisterForEvents ();

		SocialHelper.instance.Authenticate (success => {
			if (success) {
				Debug.Log ("Authentication successful");
				string userInfo = "Username: " + Social.localUser.userName + 
					"\nUser ID: " + Social.localUser.id + 
					"\nIsUnderage: " + Social.localUser.underage;
				Debug.Log (userInfo);
			} else {
				Debug.Log ("Authentication failed");
			}
			RestartGame ();
		});
	}

	void OnDestroy() {
		UnregisterForEvents ();
		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}
	
	public void RestartGame() {
		GamePhaseState.instance.RestartGame ();
		GameLevelState.instance.SetGameLevel (1);
	}


	void OnGamePhaseChanged() {
	}

	void MaybeIncrementMouseHoleCapacity() {
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		EnumAccumulator<MouseHole.MouseHoleLocation> ta = ld.mouseHolesAccumulator;
		for (int i = 0; i < ta.derivedCount.Length; i++) {
			mouseHoles [i].SetCapacity (ta.derivedCount[i]);
		}
	}

	void EnqueueMiceForLevel() {
		mouseSpawnFromData.Clear ();

		// A few by hand, then just programmatic.
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		mouseSpawnFromData.AddMice (ld.explicitMouseDescs);

		/*
		int[] miceByType = lc.GetMiceByTypeForLevel (gameLevel);
		float[] timeRanges = lc.GetTimeRanges (gameLevel);


		mouseSpawnFromData.ConfigureWithData (explicitMice,
		                                      gameLevel, 
		                                      miceByType, 
		                                      timeRanges); 
		                                      */
	}


	MouseHole FindDoomedMouseHole() {
		for (int i = 0; i < 4; i++) {
			if (mouseHoles [i].IsFull()) {
				return mouseHoles[i];
			}
		}
		return null;
	}


    public void OnMouseExit(MouseMove mouse) {
		if (CheckForGameEnd ()) {
			return;
		}
		if (CheckForLevelEnd ()) {
			return;
		}
	}	

	bool CheckForGameEnd() {
		MouseHole doomedMouseHole = this.FindDoomedMouseHole ();		
		if (doomedMouseHole != null) {
			doomedMouseHole.DoDoomedBoxFX ();
			GamePhaseState.instance.TransitionWithPause (GamePhaseState.GamePhaseType.GAME_OVER);
			return true;
		} else {
			return false;
		}
	}

	bool CheckForLevelEnd() {
		if (mouseSpawnFromData.FinishedWithCurrentSet () && 
			MouseMove.activeMouseCount == 0) {
			GamePhaseState.instance.TransitionWithPause (GamePhaseState.GamePhaseType.LEVEL_END);
			return true;
		} else {
			return false;
		}
	}

	public void OnMouseKilled(MouseMove mouse) {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			PlayerStats.instance.IncrementScore (1);
			CheckForLevelEnd ();
		}
	}


	public void LogKillsPerSwipe(int killsPerSwipe) {
		// Multiple kills earn you treats.
		if (killsPerSwipe <= 0) {
			return;
		}

		int treatsEarned = (killsPerSwipe - 1) * (killsPerSwipe - 1);
		if (treatsEarned > 0) {
			PlayerStats.instance.EarnTreats(treatsEarned);
		}
	}
}
