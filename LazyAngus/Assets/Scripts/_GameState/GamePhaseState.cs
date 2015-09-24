using UnityEngine;
using System.Collections;

public class GamePhaseState : MonoBehaviour {

	
	public enum GamePhaseType {
		NULL = 0,
		WELCOME,
		LEVEL_PLAY,
		LEVEL_END,
		GAME_OVER,
		REAL_ANGUS,
		INFO,
		PENDING,
	};

	public GamePhaseType gamePhase { get; private set; }
	public GamePhaseType previousGamePhase { get; private set; }
	public GamePhaseType pendingPhase { get; private set; }

	private float pendingPhaseTimeout;
	
	private bool shouldCheckForPhaseTransition = false;

	
	public int instancesFinishedThisSession { get; private set; }
	public int instancesFinishedEver  { get; private set; }

	public delegate void GameInstanceChangedEventHandler();
	public event GameInstanceChangedEventHandler GameInstanceChanged;
	

	public delegate void GamePhaseChangedEventHandler();
	public event GamePhaseChangedEventHandler GamePhaseChanged;

	public static GamePhaseState instance { get; private set; }

	GamePhaseUI [] gameUIs;
	
	void Awake() {
		instance = this;
		gamePhase = GamePhaseType.NULL;
		previousGamePhase = GamePhaseType.NULL;
	}
	
	void Start() {
		instancesFinishedEver = PersistentStorage.instance.GetIntValue ("instancesFinishedEver", 0);
	}

	
	// Update is called once per frame
	void Update () {
		if (shouldCheckForPhaseTransition) {
			CheckForPhaseTransition ();
		}
	}

	public bool IsPlaying() {
		return (gamePhase == GamePhaseType.LEVEL_PLAY);
	}
	
	public void RestartGame() {
		gamePhase = GamePhaseType.NULL;
		previousGamePhase = GamePhaseType.NULL;

		if (GameInstanceChanged != null) {
			GameInstanceChanged ();
		}

		if (CrossSceneState.instance.didWelcome) {
			TransitionToPhase (GamePhaseType.LEVEL_PLAY);
		} else {
			TransitionToPhase (GamePhaseType.WELCOME);
		}
	}

	
	IEnumerator SetupPendingPhase() {
		pendingPhaseTimeout = Time.time + TweakableParams.playOverPendingPause;
		yield return new WaitForSeconds(TweakableParams.playOverPendingPause);
		if (gamePhase == GamePhaseType.PENDING) {
			shouldCheckForPhaseTransition = true;
		}
	}

	public void TransitionWithPause(GamePhaseType phase) {
		pendingPhase = phase;
		TransitionToPhase (GamePhaseType.PENDING);
	}

	void CheckForPhaseTransition() {
		if (gamePhase == GamePhaseType.PENDING) {
			if (pendingPhaseTimeout <= Time.time) {
				TransitionToPhase (pendingPhase);
			}
		} 
		shouldCheckForPhaseTransition = false;
	}

	bool IsLegalTransition(GamePhaseType oldPhase, 
	                       GamePhaseType newPhase) {
		switch (oldPhase) {
		case GamePhaseType.NULL:
			return (newPhase == GamePhaseType.WELCOME || 
			        newPhase == GamePhaseType.LEVEL_PLAY);
		case GamePhaseType.WELCOME:
			return (newPhase == GamePhaseType.LEVEL_PLAY);
		case GamePhaseType.LEVEL_PLAY:
			return (newPhase == GamePhaseType.PENDING);
		case GamePhaseType.PENDING:
			return (newPhase == GamePhaseType.GAME_OVER || 
			        newPhase == GamePhaseType.LEVEL_END);
		case GamePhaseType.LEVEL_END:
			return (newPhase == GamePhaseType.LEVEL_PLAY);
		case GamePhaseType.GAME_OVER:
			return (newPhase == GamePhaseType.REAL_ANGUS || 
			        newPhase == GamePhaseType.INFO);
		case GamePhaseType.INFO:
			return (newPhase == GamePhaseType.GAME_OVER);
		case GamePhaseType.REAL_ANGUS:
			return (newPhase == GamePhaseType.GAME_OVER);
		}
		return false;
	}

	
	//------------------------------------
	// 
	// Public functions
	//
	//------------------------------------
	
	public void TransitionToPhase(GamePhaseType newPhase) {
		if (!IsLegalTransition (gamePhase, newPhase)) {
			// FIXME(dbanks)
			// Throw an error.
			return;
		}

		previousGamePhase = gamePhase;
		gamePhase = newPhase;

		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			instancesFinishedThisSession += 1;
			instancesFinishedEver += 1;
			PersistentStorage.instance.SetIntValue("instancesFinishedEver", instancesFinishedEver);
		}

		if (newPhase == GamePhaseType.PENDING) {
			StartCoroutine(SetupPendingPhase ());
		}

		if (GamePhaseChanged != null) {
			GamePhaseChanged ();
		}
	}

}
