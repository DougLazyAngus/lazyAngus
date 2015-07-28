using UnityEngine;
using System.Collections;

public class GamePhaseState : MonoBehaviour {

	
	public enum GamePhaseType {
		NULL = 0,
		WELCOME,
		LEVEL_PLAY,
		LEVEL_END,
		GAME_OVER,
		PENDING,
	};

	public GamePhaseType gamePhase  { get; private set; }

	private GamePhaseType pendingPhase;
	private float pendingPhaseTimeout;
	public float pendingPause = 1f;	
	private bool shouldCheckForPhaseTransition = false;

	

	public delegate void GameInstanceChangedEventHandler();
	public event GameInstanceChangedEventHandler GameInstanceChanged;
	

	public delegate void GamePhaseChangedEventHandler();
	public event GamePhaseChangedEventHandler GamePhaseChanged;
	

	public static GamePhaseState instance { get; private set; }
	
	GameUI [] gameUIs;
	
	void Awake() {
		instance = this;
		gamePhase = GamePhaseType.NULL;
	}
	
	void Start() {
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
		pendingPhaseTimeout = Time.time + pendingPause;
		yield return new WaitForSeconds(pendingPause);
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
		

		gamePhase = newPhase;
		
		if (newPhase == GamePhaseType.PENDING) {
			StartCoroutine(SetupPendingPhase ());
		}

		if (GamePhaseChanged != null) {
			GamePhaseChanged ();
		}
	}

}
