using UnityEngine;
using System.Collections;
using System.Collections.Generic;
// using Parse;

public class ParseAnalyticsController : MonoBehaviour {

	bool registeredForEvents;

	// Use this for initialization
	void Start () {
		// ParseAnalytics.TrackAppOpenedAsync ();

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
		BoostConfig.instance.BoostActive += 
			new BoostConfig.BoostActiveEventHandler (OnBoostActive);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			BoostConfig.instance.BoostActive -= 
				new BoostConfig.BoostActiveEventHandler (OnBoostActive);
		}
	}

	void OnBoostActive(BoostConfig.BoostType bType, 
	                   BoostConfig.BoostType oldType) {
		if (bType == BoostConfig.BoostType.NUM_TYPES) {
			return;
		}

		Dictionary<string, string> boostActiveEvent = new Dictionary<string, string>();
		
		boostActiveEvent ["sessionGameInstance"] = "" + GamePhaseState.instance.instancesFinishedThisSession;
		boostActiveEvent ["lifetimeGameInstance"] = "" + GamePhaseState.instance.instancesFinishedEver;
		
		boostActiveEvent ["level"] = "" + GameLevelState.instance.gameLevel;

		boostActiveEvent ["boostUsed"] = "" + bType;
		boostActiveEvent["nthUsage"] = "" + PlayerStats.instance.GetPurchasedBoostCount (bType);

		// ParseAnalytics.TrackEventAsync ("BoostActive", boostActiveEvent);
	}

	void OnGamePhaseChanged() {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			LogGameOverEvent();
		}		
	}

	void LogGameOverEvent() {
		Dictionary<string, string> gameOverEvent = new Dictionary<string, string>();

		gameOverEvent ["sessionGameInstance"] = "" + GamePhaseState.instance.instancesFinishedThisSession;
		gameOverEvent ["lifetimeGameInstance"] = "" + GamePhaseState.instance.instancesFinishedEver;

		gameOverEvent ["score"] = "" + PlayerStats.instance.gameScore;
		gameOverEvent ["money"] = "" + PlayerStats.instance.money;
		gameOverEvent ["level"] = "" + GameLevelState.instance.gameLevel;
		gameOverEvent ["isHighScore"] = 
			(PlayerStats.instance.GetHighScore () == PlayerStats.instance.gameScore) ? 
				"true" :
				"false";
		// ParseAnalytics.TrackEventAsync ("GameOver", gameOverEvent);
	}
}
