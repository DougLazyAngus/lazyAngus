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

		welcomeUIGameObject.SetActive (true);
		levelPlayUIGameObject.SetActive (true);
		levelEndUIGameObject.SetActive (true);
		gameOverUIGameObject.SetActive (true);

		gameUIs[(int)GameUIsType.WELCOME] = welcomeUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.LEVEL_PLAY] = levelPlayUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.LEVEL_END] = levelEndUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.GAME_END] = gameOverUIGameObject.GetComponent <GameUI>();
	}

	
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
		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME: {
			if (DebugConfig.instance.isDebug) {
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
	}

	public void SetActiveUI(GameUIsType uiType) {
		for (int i = 0; i < (int)GameUIsType.NUM_TYPES; i++) {
			GameUI gameUI = gameUIs [i];
			gameUI.SetUIActive (i == (int)uiType);
		}
	}
}
