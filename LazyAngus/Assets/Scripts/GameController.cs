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
	bool checkForPhaseChanges;

	void Awake() {
		instance = this;
		checkForPhaseChanges = false;

		Physics2D.IgnoreLayerCollision (8, 9, true);	

		mouseSpawnFromData = gameObject.GetComponent<MouseSpawnFromData> ();
	}

	void Start() {
		RegisterForEvents ();

		RestartGame ();

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
		});
	}

	void Update() {
		if (checkForPhaseChanges) {
			checkForPhaseChanges = false;
			if (CheckForGameEnd ()) {
				return;
			}
			if (CheckForLevelEnd ()) {
				return;
			}
		}
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
		GamePhaseState.instance.GameInstanceChanged += 
			new GamePhaseState.GameInstanceChangedEventHandler (OnGameInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			GamePhaseState.instance.GameInstanceChanged -= 
				new GamePhaseState.GameInstanceChangedEventHandler (OnGameInstanceChanged);
		}
	}
	
	public void RestartGame() {
		GameLevelState.instance.SetGameLevel (1);
		GamePhaseState.instance.RestartGame ();
	}

	void OnGameInstanceChanged() {
	}

	void OnGamePhaseChanged() {
		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
			{
				CrossSceneState css = CrossSceneState.instance;
				css.didWelcome = true;
				break;
			}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			EnqueueMiceForLevel ();
			MaybeIncrementMouseHoleCapacity ();
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END:
			{
				GameLevelState.instance.SetGameLevel (
				GameLevelState.instance.gameLevel + 1);
				break;
			}
		}
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
		checkForPhaseChanges = true;
	}	

	bool CheckForGameEnd() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			return false;
		}

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
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			return false;
		}
		
		if (mouseSpawnFromData.FinishedWithCurrentSet () && 
			MouseMove.activeMouseCount == 0) {
			GamePhaseState.instance.TransitionWithPause (GamePhaseState.GamePhaseType.LEVEL_END);
			return true;
		} else {
			return false;
		}
	}

	public void OnMouseKilled(MouseMove mouse) {
		PlayerStats.instance.IncrementScore ();
		checkForPhaseChanges = true;
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
