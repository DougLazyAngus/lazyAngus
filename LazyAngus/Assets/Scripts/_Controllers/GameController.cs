using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {
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
		Screen.orientation = ScreenOrientation.Portrait;
	}

	void Start() {
		RegisterForEvents ();

		GameLevelState.instance.SetGameLevel (1);
		GamePhaseState.instance.RestartGame ();
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
	
	public void RestarrrtGame() {
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
			UpdateRealAngusContentLocks();
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END:
			{
				GameLevelState.instance.SetGameLevel (
				GameLevelState.instance.gameLevel + 1);
				break;
			}
		}
	}

	void UpdateRealAngusContentLocks() {
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		RealAngusData.instance.UnlockNItems (ld.realAngusAccumulator.derivedCount);
	}

	void UpdateMouseSinkTrapCount() {
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (GameLevelState.instance.gameLevel);
		EnumAccumulator<MouseSinkController.MouseHoleLocation> ta = ld.mouseHolesAccumulator;
		for (int i = 0; i < ta.accumulators.Length; i++) {
			// ta.derivedCount is how many the thing should 
			mouseSinkControllers [i].SetTrapCapacity (ta.accumulators[i].derivedCount);
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
			SFXPlayer.instance.Play(SFXPlayer.SFXType.LOSER);
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
