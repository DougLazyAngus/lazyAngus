using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {
	
	public enum GamePhaseType {
		GAME_PHASE_NULL = 0,
		GAME_PHASE_WELCOME,
		GAME_PHASE_LEVEL_PLAY,
		GAME_PHASE_LEVEL_END,
		GAME_PHASE_GAME_OVER,
		GAME_PHASE_PENDING,
	};

	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseHole[] mouseHoles;
	
	private MouseSpawnFromData mouseSpawnFromData;

	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject levelPlayUIGameObject;
	public GameObject gameOverUIGameObject;

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

	void Awake() {
		instance = this;

		Physics.IgnoreLayerCollision (8, 9, true);	

		mouseSpawnFromData = gameObject.GetComponent<MouseSpawnFromData> ();

	}

	void Start() {
		boostConfig = BoostConfig.instance;
		playerStats = PlayerStats.instance;
		CrossSceneState css = CrossSceneState.instance;

		gamePhase = GamePhaseType.GAME_PHASE_NULL;
		gameLevel = 1;

		if (css.didWelcome) {
			TransitionToPhase (GamePhaseType.GAME_PHASE_LEVEL_PLAY);
		} else {
			TransitionToPhase (GamePhaseType.GAME_PHASE_WELCOME);
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
		if (gamePhase == GamePhaseType.GAME_PHASE_PENDING) {
			shouldCheckForPhaseTransition = true;
		}
	}
	
	void CheckForPhaseTransition() {
		if (gamePhase == GamePhaseType.GAME_PHASE_PENDING) {
			if (pendingPhaseTimeout <= Time.time) {
				TransitionToPhase (pendingPhase);
			}
		} else if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			MouseHole doomedMouseHole = this.FindDoomedMouseHole ();

			if (doomedMouseHole != null) {
				doomedMouseHole.DoDoomedBoxFX();

				pendingPhase = GamePhaseType.GAME_PHASE_GAME_OVER;
				TransitionToPhase (GamePhaseType.GAME_PHASE_PENDING);
				return;
			}

			if (mouseSpawnFromData.FinishedWithCurrentSet () && 
				MouseMove.activeMouseCount == 0) {
				pendingPhase = GamePhaseType.GAME_PHASE_LEVEL_END;
				TransitionToPhase (GamePhaseType.GAME_PHASE_PENDING);
			}
		}
		shouldCheckForPhaseTransition = false;
	}

	void EnqueueMiceForLevel() {
		LevelConfig lc = LevelConfig.instance;
		// A few by hand, then just programmatic.
		List<ExplicitMouseDesc> explicitMice = lc.GetExplicitConfigForLevel (gameLevel);
		int[] miceByType = lc.GetMiceByTypeForLevel (gameLevel);
		float[] timeRanges = lc.GetTimeRanges (gameLevel);

		mouseSpawnFromData.ConfigureWithData (explicitMice,
		                                      gameLevel, 
		                                      miceByType, 
		                                      timeRanges); 
	}

	bool IsLegalTransition(GamePhaseType oldPhase, 
	                       GamePhaseType newPhase) {
		switch (oldPhase) {
		case GamePhaseType.GAME_PHASE_NULL:
			return (newPhase == GamePhaseType.GAME_PHASE_WELCOME || 
			        newPhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY);
		case GamePhaseType.GAME_PHASE_WELCOME:
			return (newPhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY);
		case GamePhaseType.GAME_PHASE_LEVEL_PLAY:
			return (newPhase == GamePhaseType.GAME_PHASE_PENDING);
		case GamePhaseType.GAME_PHASE_PENDING:
			return (newPhase == GamePhaseType.GAME_PHASE_GAME_OVER || 
			        newPhase == GamePhaseType.GAME_PHASE_LEVEL_END);
		case GamePhaseType.GAME_PHASE_LEVEL_END:
			return (newPhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY);
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
		case GamePhaseType.GAME_PHASE_LEVEL_PLAY:
			// Leaving play.  Kill active boosts.
			boostConfig.CancelBoosts ();
			break;
		}

		gamePhase = newPhase;
		
		switch (gamePhase) {
		case GamePhaseType.GAME_PHASE_WELCOME: {
			if (DebugConfig.instance.isDebug) {
				welcomeUIGameObject.SetActive (false);
				levelPlayUIGameObject.SetActive (false);
				levelEndUIGameObject.SetActive (true);
				gameOverUIGameObject.SetActive (false);
			} else {
				welcomeUIGameObject.SetActive (true);
				levelPlayUIGameObject.SetActive (false);
				levelEndUIGameObject.SetActive (false);
				gameOverUIGameObject.SetActive (false);
			}

			CrossSceneState css = CrossSceneState.instance;
			css.didWelcome = true;
			break;
		}
		case GamePhaseType.GAME_PHASE_LEVEL_PLAY:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (false);
			
			EnqueueMiceForLevel ();
			break;
		case GamePhaseType.GAME_PHASE_PENDING:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (false);
			
			StartCoroutine(SetupPendingPhase());
			break;
		case GamePhaseType.GAME_PHASE_LEVEL_END: {
			gameLevel += 1;

			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (true);
			gameOverUIGameObject.SetActive (false);

			break;
		}
		case GamePhaseType.GAME_PHASE_GAME_OVER:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (false);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (true);
			break;
		}		

		if (GamePhaseChanged != null) {
			GamePhaseChanged ();
		}
	}

	public void OnMousePoisoned(MouseMove mouse) {
		if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			shouldCheckForPhaseTransition = true;
		}
	}

    public void OnMouseExit(MouseMove mouse) {
		if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			shouldCheckForPhaseTransition = true;
		}
	}	

	public void OnMouseKilled(MouseMove mouse) {
		if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			playerStats.IncrementScore (1);
			shouldCheckForPhaseTransition = true;
		}
	}

	public void DebugSetGameLevel(int gameLevel) {
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
