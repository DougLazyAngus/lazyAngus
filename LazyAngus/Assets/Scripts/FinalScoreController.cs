using UnityEngine;
using System.Collections;

public class FinalScoreController : MonoBehaviour {
	bool registeredForEvents;
	
	void Awake() {
	}
	
	void Start() {
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
			SocialHelper.instance.ReportScore (PlayerStats.instance.gameScore);
		}
	}
}