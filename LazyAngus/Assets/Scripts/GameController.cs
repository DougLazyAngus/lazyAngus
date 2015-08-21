using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {
	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseSinkController[] mouseSinkControllers;

	int escapedMouseCount;
	private MouseSpawnFromData mouseSpawnFromData;

	public static GameController instance { get; private set; }
	bool registeredForEvents;
	bool checkForPhaseChanges;

	void Awake() {
		instance = this;
		checkForPhaseChanges = false;
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
		DeadMouseRelay.instance.MouseKill += 
			new DeadMouseRelay.MouseKillEventHandler (OnMouseKilled);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			GamePhaseState.instance.GameInstanceChanged -= 
				new GamePhaseState.GameInstanceChangedEventHandler (OnGameInstanceChanged);
			DeadMouseRelay.instance.MouseKill -= 
				new DeadMouseRelay.MouseKillEventHandler (OnMouseKilled);
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
			UpdateMouseSinkTrapCount ();
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END:
			{
				GameLevelState.instance.SetGameLevel (
				GameLevelState.instance.gameLevel + 1);
				break;
			}
		}
	}

	void UpdateMouseSinkTrapCount() {
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		EnumAccumulator<MouseSinkController.MouseHoleLocation> ta = ld.mouseHolesAccumulator;
		for (int i = 0; i < ta.derivedCount.Length; i++) {
			// ta.derivedCount is how many the thing should 
			mouseSinkControllers [i].SetTrapCapacity (ta.derivedCount[i]);
		}
	}

	void EnqueueMiceForLevel() {
		mouseSpawnFromData.Clear ();

		// A few by hand, then just programmatic.
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		mouseSpawnFromData.AddMice (ld.explicitMouseDescs);
	}

    public void OnMouseExit(MouseMove mouse) {
		checkForPhaseChanges = true;
	}	

	bool CheckForGameEnd() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			return false;
		}

		// FIXME)danks)
		// Add new game over logic.
		MouseSinkController doomedExit = FindDoomedExit();		
		if (doomedExit != null) {
			GamePhaseState.instance.TransitionWithPause (GamePhaseState.GamePhaseType.GAME_OVER);
			return true;
		} else {
			return false;
		}
	}

	MouseSinkController FindDoomedExit() {
		for (int i = 0; i < mouseSinkControllers.Length; i++) {
			MouseSinkController me = mouseSinkControllers [i];
			if (me.savedMouseCount > 0) {
				return me;
			}
		}
		return null;
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

	void OnMouseKilled(MouseMove mouse) {
		// Maybe time to change phases...
		checkForPhaseChanges = true;
	}
}
