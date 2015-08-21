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
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			LogGameOverEvent();
		}		
	}
	
	void LogGameOverEvent() {
		GameAnalytics.NewProgressionEvent(GA_Progression.GAProgressionStatus.GAProgressionStatusComplete, 
			                                  "",
			                                  "" + GamePhaseState.instance.instancesFinishedEver, 
			                                  "" + GamePhaseState.instance.instancesFinishedThisSession, 
			                                  PlayerStats.instance.gameScore);
	}
}
