using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class LevelEndTitlesLayout : MonoBehaviour {
	public Text readyText;
	public Text treatsText;

	private bool registeredForEvents;
	private DistortForEffect distortForEffect;

	private bool treatsTextDirty;
	private bool levelTextDirty;

	private PlayerStats playerStats;
	private GameController gameController;

	private bool started;

	void Awake() {
		started = false;
		registeredForEvents = false;
	}

	void Start () {
		treatsTextDirty = false;
		levelTextDirty = false;

		playerStats = PlayerStats.instance;
		gameController = GameController.instance;

		RegisterForEvents ();

		distortForEffect = treatsText.GetComponent<DistortForEffect> ();

		SetTreatsText ();
		UpdateLevelText ();
		started = true;
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void OnEnable() {
		if (!started) {
			return;
		}
		SetTreatsText ();
		UpdateLevelText ();
	}


	void RegisterForEvents() {
		playerStats.TreatsChanged += new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
		gameController.GameLevelChanged += new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
		registeredForEvents = true;
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			playerStats.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
			gameController.GameLevelChanged -= new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
		}
	}


	void Update() {
		if (treatsTextDirty) {
			UpdateTreatsText ();
			treatsTextDirty = false;
		}
		if (levelTextDirty) {
			UpdateLevelText ();
			levelTextDirty = false;
		}
	}

	void UpdateLevelText() {
		readyText.text = "Prepare for Wave " + gameController.gameLevel + "!!!";
	}

	void OnGameLevelChanged() {
		levelTextDirty = true;
	}

	void OnTreatsChanged() {
		treatsTextDirty = true;
	}

	void UpdateTreatsText() {
		SetTreatsText ();
		distortForEffect.Distort ();
	}

	void SetTreatsText() {
		treatsText.text = "$" + playerStats.GetTreats ();
	}
}
