using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameUIController : MonoBehaviour {
	
	public enum GameUIsType {
		WELCOME,
		LEVEL_END,
		LEVEL_PLAY,
		GAME_END,

		NUM_TYPES,
	}
	
	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject levelPlayUIGameObject;
	public GameObject gameOverUIGameObject;

	public static GameUIController instance { get; private set; }
	GameUI [] gameUIs;
	bool registeredForEvents;

	void Awake() {
		instance = this;

		gameUIs = new GameUI[(int)GameUIsType.NUM_TYPES];
	}

	
	// Use this for initialization
	void Start () {
		welcomeUIGameObject.SetActive (false);
		levelPlayUIGameObject.SetActive (false);
		levelEndUIGameObject.SetActive (false);
		gameOverUIGameObject.SetActive (false);
		
		gameUIs[(int)GameUIsType.WELCOME] = welcomeUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.LEVEL_PLAY] = levelPlayUIGameObject.GetComponent <LevelPlayUI>();
		gameUIs[(int)GameUIsType.LEVEL_END] = levelEndUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.GAME_END] = gameOverUIGameObject.GetComponent <GameUI>();

		RegisterForEvents ();	
		OnGamePhaseChanged ();

		StartCoroutine (ConfirmComplete ());
	}

	IEnumerator ConfirmComplete() {
		yield return new WaitForSeconds (0f);
		for (int i = 0; i < gameUIs.Length; i++) {
			gameUIs [i].ConfirmLayoutComplete ();
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
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}

	void OnGamePhaseChanged() {
		Debug.Log("05.001  " + Time.realtimeSinceStartup);

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME: {
			if (DebugConfig.instance.useDebugValues) {
				SetActiveUI(GameUIsType.LEVEL_END);
			} else {
				SetActiveUI(GameUIsType.WELCOME);
			}

			CrossSceneState css = CrossSceneState.instance;
			css.didWelcome = true;
			break;
		}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			SetActiveUI(GameUIsType.LEVEL_PLAY);
			break;
		case GamePhaseState.GamePhaseType.PENDING:
			SetActiveUI(GameUIsType.LEVEL_PLAY);
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END: {
			SetActiveUI(GameUIsType.LEVEL_END);
			break;
		}
		case GamePhaseState.GamePhaseType.GAME_OVER:
			SetActiveUI(GameUIsType.GAME_END);
			break;
		}		
		Debug.Log("05.002  " + Time.realtimeSinceStartup);
	}

	public void SetActiveUI(GameUIsType uiType) {
		for (int i = 0; i < (int)GameUIsType.NUM_TYPES; i++) {
			GameUI gameUI = gameUIs [i];
			gameUI.SetUIActive (i == (int)uiType);
		}
	}
}
