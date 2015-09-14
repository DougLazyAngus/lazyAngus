using UnityEngine;
using System.Collections;
using GameAnalyticsSDK;

public class GameAnalyticsAnalyticsController : MonoBehaviour {

	
	bool registeredForEvents;
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
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

	void OnGamePhaseChanged() {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			LogLevelEvent(GA_Progression.GAProgressionStatus.GAProgressionStatusStart);
		}		
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_END) {
			LogLevelEvent(GA_Progression.GAProgressionStatus.GAProgressionStatusComplete);
		}		
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			LogLevelEvent(GA_Progression.GAProgressionStatus.GAProgressionStatusFail);
		}		
	}
	
	void LogLevelEvent (GA_Progression.GAProgressionStatus status)
	{
		GameAnalytics.NewProgressionEvent (status,
		                                   "" + GameLevelState.instance.gameLevel,
		                                  "", 
		                                  "",
		                                  PlayerStats.instance.gameScore);
	}
}
