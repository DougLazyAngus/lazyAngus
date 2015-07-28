using UnityEngine;
using System.Collections;

public class GameInstanceState : MonoBehaviour {

	public static GameInstanceState instance;
	bool registeredForEvents;
	public int instancesFinishedThisSession { get; private set; }
	public int instancesFinishedEver  { get; private set; }

	void Awake() {
		instance = this;
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		instancesFinishedEver = PersistentStorage.instance.GetIntValue ("instancesFinishedEver", 0);
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
			instancesFinishedThisSession += 1;
			instancesFinishedEver += 1;
			PersistentStorage.instance.SetIntValue("instancesFinishedEver", instancesFinishedEver);
		}

	}
}
