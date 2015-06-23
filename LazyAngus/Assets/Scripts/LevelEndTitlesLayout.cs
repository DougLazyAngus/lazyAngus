using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class LevelEndTitlesLayout : MonoBehaviour {
	public Text waveTitleText;
	public Text waveCountText;
	public Text waveSpecialText;
	public Text scoreText;

	private bool registerdForEvents;
	private DistortForEffect distortForEffect;

	private PlayerStats playerStats;
	private GameController gameController;

	private bool started;

	private bool scoreDirty;
	private bool waveDirty;

	void Awake() {
		started = false;
		registerdForEvents = false;
	}

	void Start () {
		scoreDirty = waveDirty = false;

		playerStats = PlayerStats.instance;
		gameController = GameController.instance;

		RegisterForEvents ();

		SetScoreText ();
		SetWaveTexts ();
		started = true;
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void OnEnable() {
		if (!started) {
			return;
		}
		SetScoreText ();
		SetWaveTexts ();
	}


	void RegisterForEvents() {
		playerStats.ScoreChanged += new PlayerStats.ScoreChangedEventHandler (OnScoreChanged);
		gameController.GameLevelChanged += new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			playerStats.ScoreChanged -= new PlayerStats.ScoreChangedEventHandler (OnScoreChanged);
			gameController.GameLevelChanged -= new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
		}
	}


	void Update() {
		if (scoreDirty) {
			SetScoreText ();
		}
		if (waveDirty) {
			SetWaveTexts ();
		}
	}

	void SetWaveTexts() {
		waveDirty = false;
		waveTitleText.text = "Wave " + gameController.gameLevel;

		LevelDescription ld = LevelConfig.instance.GetLevelDescription (gameController.gameLevel);
		waveCountText.text = ld.explicitMouseDesc.Count + " mice";
		waveSpecialText.text = ld.specialText;
	}

	void OnGameLevelChanged() {
		waveDirty = true;
	}

	void OnScoreChanged() {
		scoreDirty = true;
	}

	void SetScoreText() {
		scoreText.text = "Score: " + playerStats.GetScore ();
	}
}
