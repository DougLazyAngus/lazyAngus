using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {
	
	public enum GamePhaseType {
		NULL = 0,
		WELCOME,
		LEVEL_PLAY,
		LEVEL_END,
		GAME_OVER,
		PENDING,
	};

	public enum GameUIsType {
		WELCOME,
		LEVEL_END,
		LEVEL_PLAY,
		GAME_END,

		NUM_TYPES,
	}

	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseHole[] mouseHoles;
	
	private MouseSpawnFromData mouseSpawnFromData;

	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject levelPlayUIGameObject;
	public GameObject gameOverUIGameObject;
	
	public delegate void GameInstanceChangedEventHandler();
	public event GameInstanceChangedEventHandler GameInstanceChanged;
	
	public delegate void GameLevelChangedEventHandler();
	public event GameLevelChangedEventHandler GameLevelChanged;

	public delegate void GamePhaseChangedEventHandler();
	public event GamePhaseChangedEventHandler GamePhaseChanged;
	
	public int gameLevel { get; private set; }
	public GamePhaseType gamePhase  { get; private set; }

	private GamePhaseType pendingPhase;
	private float pendingPhaseTimeout;

	public float pendingPause = 1f;

	private bool shouldCheckForPhaseTransition = false;

	private PlayerStats playerStats;
	private BoostConfig boostConfig;

	public static GameController instance { get; private set; }

	GameUI [] gameUIs;

	void Awake() {
		instance = this;

		Physics2D.IgnoreLayerCollision (8, 9, true);	

		mouseSpawnFromData = gameObject.GetComponent<MouseSpawnFromData> ();
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

	void Start() {
		boostConfig = BoostConfig.instance;
		playerStats = PlayerStats.instance;

		RestartGame();
	}

	public bool IsPlaying() {
		return (gamePhase == GamePhaseType.LEVEL_PLAY);
	}

	public void RestartGame() {
		gamePhase = GamePhaseType.NULL;
		SetGameLevel (1);
		
		if (CrossSceneState.instance.didWelcome) {
			TransitionToPhase (GamePhaseType.LEVEL_PLAY);
		} else {
			TransitionToPhase (GamePhaseType.WELCOME);
		}

		if (GameInstanceChanged != null) {
			GameInstanceChanged ();
		}
	}

	// Update is called once per frame
	void Update () {
		if (shouldCheckForPhaseTransition) {
			CheckForPhaseTransition ();
		}
	}

	IEnumerator SetupPendingPhase() {
		pendingPhaseTimeout = Time.time + pendingPause;
		yield return new WaitForSeconds(pendingPause);
		if (gamePhase == GamePhaseType.PENDING) {
			shouldCheckForPhaseTransition = true;
		}
	}
	
	void CheckForPhaseTransition() {
		if (gamePhase == GamePhaseType.PENDING) {
			if (pendingPhaseTimeout <= Time.time) {
				TransitionToPhase (pendingPhase);
			}
		} else if (gamePhase == GamePhaseType.LEVEL_PLAY) {
			MouseHole doomedMouseHole = this.FindDoomedMouseHole ();

			if (doomedMouseHole != null) {
				doomedMouseHole.DoDoomedBoxFX();

				pendingPhase = GamePhaseType.GAME_OVER;
				TransitionToPhase (GamePhaseType.PENDING);
				return;
			}

			if (mouseSpawnFromData.FinishedWithCurrentSet () && 
				MouseMove.activeMouseCount == 0) {
				pendingPhase = GamePhaseType.LEVEL_END;
				TransitionToPhase (GamePhaseType.PENDING);
			}
		}
		shouldCheckForPhaseTransition = false;
	}

	void MaybeIncrementMouseHoleCapacity() {
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (gameLevel);
		EnumAccumulator<MouseHole.MouseHoleLocation> ta = ld.mouseHolesAccumulator;
		for (int i = 0; i < ta.derivedCount.Length; i++) {
			mouseHoles [i].SetCapacity (ta.derivedCount[i]);
		}
	}

	void EnqueueMiceForLevel() {
		mouseSpawnFromData.Clear ();

		// A few by hand, then just programmatic.
		LevelDescription ld = LevelConfig.instance.GetLevelDescription (gameLevel);
		mouseSpawnFromData.AddMice (ld.explicitMouseDescs);

		/*
		int[] miceByType = lc.GetMiceByTypeForLevel (gameLevel);
		float[] timeRanges = lc.GetTimeRanges (gameLevel);


		mouseSpawnFromData.ConfigureWithData (explicitMice,
		                                      gameLevel, 
		                                      miceByType, 
		                                      timeRanges); 
		                                      */
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

	MouseHole FindDoomedMouseHole() {
		for (int i = 0; i < 4; i++) {
			if (mouseHoles [i].IsFull()) {
				return mouseHoles[i];
			}
		}
		return null;
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
		
		switch (gamePhase) {
		case GamePhaseType.LEVEL_PLAY:
			// Leaving play.  Kill active boosts.
			boostConfig.CancelBoosts ();
			break;
		}

		gamePhase = newPhase;
		
		switch (gamePhase) {
		case GamePhaseType.WELCOME: {
			if (DebugConfig.instance.isDebug) {
				SetActiveUI(GameUIsType.LEVEL_END);
			} else {
				SetActiveUI(GameUIsType.WELCOME);
			}

			CrossSceneState css = CrossSceneState.instance;
			css.didWelcome = true;
			break;
		}
		case GamePhaseType.LEVEL_PLAY:
			SetActiveUI(GameUIsType.LEVEL_PLAY);

			EnqueueMiceForLevel ();
			MaybeIncrementMouseHoleCapacity();
			break;
		case GamePhaseType.PENDING:
			SetActiveUI(GameUIsType.LEVEL_PLAY);

			StartCoroutine(SetupPendingPhase());
			break;
		case GamePhaseType.LEVEL_END: {
			SetGameLevel (gameLevel + 1);

			SetActiveUI(GameUIsType.LEVEL_END);

			break;
		}
		case GamePhaseType.GAME_OVER:
			SetActiveUI(GameUIsType.GAME_END);
			break;
		}		

		if (GamePhaseChanged != null) {
			GamePhaseChanged ();
		}
	}

	public void SetActiveUI(GameUIsType uiType) {
		for (int i = 0; i < (int)GameUIsType.NUM_TYPES; i++) {
			GameUI gameUI = gameUIs [i];
			gameUI.SetUIActive (i == (int)uiType);
		}
	}

	public void OnMousePoisoned(MouseMove mouse) {
		if (gamePhase == GamePhaseType.LEVEL_PLAY) {
			shouldCheckForPhaseTransition = true;
		}
	}

    public void OnMouseExit(MouseMove mouse) {
		if (gamePhase == GamePhaseType.LEVEL_PLAY) {
			shouldCheckForPhaseTransition = true;
		}
	}	

	public void OnMouseKilled(MouseMove mouse) {
		if (gamePhase == GamePhaseType.LEVEL_PLAY) {
			playerStats.IncrementScore (1);
			shouldCheckForPhaseTransition = true;
		}
	}

	public void SetGameLevel(int gameLevel) {
		this.gameLevel = gameLevel;
		if (GameLevelChanged != null) {
			GameLevelChanged ();
		}
	}

	public void LogKillsPerSwipe(int killsPerSwipe) {
		// Multiple kills earn you treats.
		if (killsPerSwipe <= 0) {
			return;
		}

		int treatsEarned = (killsPerSwipe - 1) * (killsPerSwipe - 1);
		if (treatsEarned > 0) {
			playerStats.EarnTreats(treatsEarned);
		}
	}
}
