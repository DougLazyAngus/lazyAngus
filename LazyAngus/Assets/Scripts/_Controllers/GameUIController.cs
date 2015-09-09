using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameUIController : MonoBehaviour {
	
	public enum GameUIsType {
		WELCOME,
		LEVEL_END,
		GAME_END,
		REAL_ANGUS,

		NUM_TYPES,
	}
	
	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject gameOverUIGameObject;
	public GameObject realAngusUIGameObject;

	public static GameUIController instance { get; private set; }
	GameUI [] gameUIs;
	bool registeredForEvents;

	void Awake() {
		instance = this;

		gameUIs = new GameUI[(int)GameUIsType.NUM_TYPES];
		gameUIs[(int)GameUIsType.WELCOME] = welcomeUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.LEVEL_END] = levelEndUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.GAME_END] = gameOverUIGameObject.GetComponent <GameUI>();
		gameUIs[(int)GameUIsType.REAL_ANGUS] = realAngusUIGameObject.GetComponent <GameUI>();
	}

	
	// Use this for initialization
	void Start () {
		for (int i = 0; i < gameUIs.Length; i++) {
			gameUIs[i].gameObject.SetActive (false);
		}

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

	// Public just for debug purposes.
	public void OnGamePhaseChanged() {
		if (!registeredForEvents) {
			return;
		}

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
			{
				if (DebugConfig.instance.skipWelcome) {
					SetActiveUI (GameUIsType.LEVEL_END);
				} else {
					SetActiveUI (GameUIsType.WELCOME);
				}

				CrossSceneState css = CrossSceneState.instance;
				css.didWelcome = true;
				break;
			}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			SetActiveUI (GameUIsType.NUM_TYPES);
			break;
		case GamePhaseState.GamePhaseType.PENDING:
			SetActiveUI (GameUIsType.NUM_TYPES);
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END: 
			SetActiveUI (GameUIsType.LEVEL_END);
			break;
		case GamePhaseState.GamePhaseType.GAME_OVER:
			SetActiveUI (GameUIsType.GAME_END);
			break;
		case GamePhaseState.GamePhaseType.REAL_ANGUS:
			SetActiveUI (GameUIsType.REAL_ANGUS);
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
