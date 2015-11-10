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
		REAL_ANGUS,
		INFO,
		CAT_FACES,

		NUM_TYPES,
	}
	
	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject levelPlayUIGameObject;
	public GameObject gameOverUIGameObject;
	public GameObject realAngusUIGameObject;
	public GameObject infoUIGameObject;
	public GameObject catFacesUIGameObject;

	public static GameUIController instance { get; private set; }
	GamePhaseUI [] gameUIs;
	bool registeredForEvents;

	void Awake() {
		instance = this;

		gameUIs = new GamePhaseUI[(int)GameUIsType.NUM_TYPES];
		gameUIs[(int)GameUIsType.WELCOME] = welcomeUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.LEVEL_END] = levelEndUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.LEVEL_PLAY] = levelPlayUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.GAME_END] = gameOverUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.REAL_ANGUS] = realAngusUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.INFO] = infoUIGameObject.GetComponent <GamePhaseUI>();
		gameUIs[(int)GameUIsType.CAT_FACES] = catFacesUIGameObject.GetComponent <GamePhaseUI>();

		// Shut 'em all down.
		for (int i = 0; i < gameUIs.Length; i++) {
			gameUIs [i].SetUIActive (false);
		}
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
				if (DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_SKIP_WELCOME)) {
					SetActiveUI (GameUIsType.LEVEL_END);
				} else {
					SetActiveUI (GameUIsType.WELCOME);
				}

				CrossSceneState css = CrossSceneState.instance;
				css.didWelcome = true;
				break;
			}
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
		case GamePhaseState.GamePhaseType.PENDING:
			SetActiveUI (GameUIsType.LEVEL_PLAY);
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
		case GamePhaseState.GamePhaseType.INFO:
			SetActiveUI(GameUIsType.INFO);
			break;
		case GamePhaseState.GamePhaseType.CAT_FACES:
			SetActiveUI(GameUIsType.CAT_FACES);
			break;
		}
	}		

	public void SetActiveUI(GameUIsType uiType) {
		for (int i = 0; i < (int)GameUIsType.NUM_TYPES; i++) {
			GamePhaseUI gameUI = gameUIs [i];
			gameUI.SetUIActive (i == (int)uiType);
		}
	}
}
