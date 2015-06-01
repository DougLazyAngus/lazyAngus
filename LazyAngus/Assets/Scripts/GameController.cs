using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameController : MonoBehaviour {

	public delegate void ScoreChangedEventHandler();
	public event ScoreChangedEventHandler ScoreChanged;

	public enum GamePhaseType {
		GAME_PHASE_NULL = 0,
		GAME_PHASE_WELCOME,
		GAME_PHASE_LEVEL_PLAY,
		GAME_PHASE_LEVEL_END,
		GAME_PHASE_GAME_OVER,
		GAME_PHASE_PENDING,
	};

	private int score;

	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseHole[] mouseHoles;
	
	private PlayerController playerController;
	private MouseSpawnFromData mouseSpawnFromData;

	public GameObject welcomeUIGameObject;
	public GameObject levelEndUIGameObject;
	public GameObject levelPlayUIGameObject;
	public GameObject gameOverUIGameObject;

	private int gameLevel;
	private int UserInteractionsLayerBitmask = (1 << 9);

	private GamePhaseType gamePhase;
	private GamePhaseType pendingPhase;
	private float pendingPhaseTimeout;

	public static float pendingPause = 1f;
	
	void Awake() {
		Physics.IgnoreLayerCollision (8, 9, true);	
	}


	void Start() {
		SetScore (0);

		gamePhase = GamePhaseType.GAME_PHASE_NULL;

		playerController = Utilities.GetPlayerController ();
		mouseSpawnFromData = gameObject.GetComponent<MouseSpawnFromData> ();

		TransitionToPhase (GamePhaseType.GAME_PHASE_WELCOME);

		gameLevel = 0;
	}

	// Update is called once per frame
	void Update () {
		if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY || 
		    gamePhase == GamePhaseType.GAME_PHASE_PENDING) {
			HandleUserInput ();
		}
	}
	
	void HandleUserInput() {
		RaycastHit hitPoint = default(RaycastHit);

		if (CheckForClickStart(ref hitPoint)) {
			HandleClickStart (hitPoint);
		}
	}

	bool CheckForClickStart(ref RaycastHit hitPoint) {
		Vector3 clickPosition;
		
		// Detect click and calculate touch position
		bool clickStarted = Utilities.GetClickStarted (out clickPosition);

		if (!clickStarted) {
 			return false;
		}  

		Ray ray = Camera.main.ScreenPointToRay (clickPosition);

		if (Physics.Raycast (ray, out hitPoint, 200.0f, UserInteractionsLayerBitmask)) {
			return true;
		} else {
			return false;
		}
	}

	void HandleClickStart(RaycastHit hitPoint) {
		if (hitPoint.collider.tag == "CatButt") {
			Debug.Log ("Tapped CatButt");
			playerController.HandleTurnClickStart(hitPoint);
		} else if (hitPoint.collider.tag == "Plane") {
			Debug.Log ("Tapped Plane");
			playerController.HandleSlapClickStart(hitPoint);
		} else {
			Debug.Log ("Tapped something else");
		}
	}

	void CheckForPhaseTransition() {
		if (gamePhase == GamePhaseType.GAME_PHASE_PENDING) {
			if (pendingPhaseTimeout > Time.time) {
				TransitionToPhase (pendingPhase);
			}
		} else if (gamePhase == GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			bool isGameOver = this.IsGameLost ();
			if (isGameOver) {
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
	}

	void EnqueueMiceForLevel() {
		// A few by hand, then just programmatic.
		List<ExplicitMouseDesc> explicitMice = LevelConfig.GetExplicitConfigForLevel (gameLevel);
		int[] miceByType = LevelConfig.GetMiceByTypeForLevel (gameLevel);

		mouseSpawnFromData.ConfigureWithData (explicitMice,
		                                     gameLevel, 
		                                     miceByType, 
		                                     1f); 
	}

	
	public void TransitionToPhase(GamePhaseType newPhase) {
		if (!IsLegalTransition (gamePhase, newPhase)) {
			// FIXME(dbanks)
			// Throw an error.
			return;
		}


		gamePhase = newPhase;

		switch (gamePhase) {
		case GamePhaseType.GAME_PHASE_WELCOME:
			welcomeUIGameObject.SetActive (true);
			levelPlayUIGameObject.SetActive (false);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (false);

			Instantiate (welcomeUIGameObject, new Vector3(0, 0, 0), 
			                             Quaternion.identity);
			break;
		case GamePhaseType.GAME_PHASE_LEVEL_PLAY:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (false);

			gameLevel += 1;
			EnqueueMiceForLevel ();
			break;
		case GamePhaseType.GAME_PHASE_PENDING:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (false);

			pendingPhaseTimeout = Time.time + pendingPause;
			break;
		case GamePhaseType.GAME_PHASE_LEVEL_END:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (true);
			levelEndUIGameObject.SetActive (true);
			gameOverUIGameObject.SetActive (false);

			Instantiate (levelEndUIGameObject, new Vector3(0, 0, 0), 
			                             Quaternion.identity);
			break;
		case GamePhaseType.GAME_PHASE_GAME_OVER:
			welcomeUIGameObject.SetActive (false);
			levelPlayUIGameObject.SetActive (false);
			levelEndUIGameObject.SetActive (false);
			gameOverUIGameObject.SetActive (true);

			Instantiate (gameOverUIGameObject, new Vector3(0, 0, 0), 
			                             Quaternion.identity);
			break;
		}		
	}
	

	//------------------------------
	//
	// Score keeping
	//
	//------------------------------
	public int GetScore() {
		return score;
	}

	bool IsGameLost() {
		for (int i = 0; i < 4; i++) {
			if (mouseHoles [i].IsFull()) {
				return true;
			}
		}
		return false;
	}

	void SetScore(int newScore) {
		score = newScore;
		if (ScoreChanged != null) {
			ScoreChanged ();
		}
	}


	//------------------------------------
	// 
	// Public functions
	//
	//------------------------------------
	 public void OnMouseExit(MouseMove mouse) {
		CheckForPhaseTransition ();
	}	

	public void OnMouseKilled(MouseMove mouse) {
		SetScore (score + 1);
		CheckForPhaseTransition ();
	}

	bool IsLegalTransition(GamePhaseType oldPhase, 
	                       GamePhaseType newPhase) {
		switch (oldPhase) {
		case GamePhaseType.GAME_PHASE_NULL:
			return (newPhase == GamePhaseType.GAME_PHASE_WELCOME);
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
	
}
