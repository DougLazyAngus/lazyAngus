using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class BoostButtonLayout : MonoBehaviour {
	public float boostButtonYOffset;
	public GameObject boostButtonPrototype;
	public Canvas containingCanvas;

	private List<BoostButton> boostButtons;
	private GameObject[] boostButtonGameObjects;
	private bool registerdForEvents;

	private bool boostButtonsDirty;
	private bool treatsTextDirty;
	private bool levelTextDirty;

	private PlayerStats playerStats;
	private GameController gameController;
	private BoostConfig boostConfig;

	private bool started;
	
	void Awake() {
		registerdForEvents = false;
		boostButtonsDirty = false;

		started = false;
	}

	void Start () {
		playerStats = PlayerStats.instance;
		gameController = GameController.instance;
		boostConfig = BoostConfig.instance;

		RegisterForEvents ();

		AddBoostButtons ();
		LayoutBoostButtons ();

		RefreshBoostButtons ();

		started = true;
	}

	void OnEnable() {
		if (!started) {
			return;
		}
		RefreshBoostButtons ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		playerStats.TreatsChanged += new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
		playerStats.BoostsChanged += new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);

		gameController.GameLevelChanged += new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
		gameController.GamePhaseChanged += new GameController.GamePhaseChangedEventHandler (OnGamePhaseChanged);

		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);

		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			playerStats.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
			playerStats.BoostsChanged -= new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);

			gameController.GameLevelChanged -= new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
			gameController.GamePhaseChanged -= new GameController.GamePhaseChangedEventHandler (OnGameLevelChanged);

			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void Update() {
		if (boostButtonsDirty) {
			RefreshBoostButtons ();
			boostButtonsDirty = false;
		}
	}

	void OnGameLevelChanged() {
		boostButtonsDirty = true;
	}
	
	void OnGamePhaseChanged() {
		boostButtonsDirty = true;
	}
	
	void OnBoostsChanged() {
		boostButtonsDirty = true;
	}

	void OnBoostUsageChanged() {
		boostButtonsDirty = true;
	}

	void OnTreatsChanged() {
		boostButtonsDirty = true;
	}

	void AddBoostButtons() {
		boostButtons = new List<BoostButton> ();
		boostButtonGameObjects = new GameObject[(int)BoostConfig.BoostType.NUM_TYPES];
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			AddBoostButtonForType ((BoostConfig.BoostType)i);
		}
	}

	void AddBoostButtonForType(BoostConfig.BoostType bType) {
		GameObject boostButtonObject = Instantiate(boostButtonPrototype, 
		                                               new Vector3(0, 0, 0),
		                                               Quaternion.identity) as GameObject;
		BoostButton bb = boostButtonObject.GetComponent <BoostButton> ();
		boostButtonObject.transform.SetParent (gameObject.transform, false);

		bb.ConfigureForType (bType);
		boostButtons.Add (bb);

		boostButtonGameObjects [(int)bType] = bb.gameObject;
	}
	
	void LayoutBoostButtons() {
		float containingWidth = containingCanvas.pixelRect.width / containingCanvas.scaleFactor;
		Utilities.SpaceHorizontally (containingWidth, 
		                             boostButtonGameObjects, 
		                             boostButtonYOffset);
	}

	void RefreshBoostButtons() {
		foreach (BoostButton bb in boostButtons) {
			bb.RefreshButton ();
		}
	}

	public BoostButton GetButtonForBoost(BoostConfig.BoostType boostType) {
		if (boostType == BoostConfig.BoostType.NUM_TYPES) {
			return null;
		}
		int index = (int)boostType;
		return boostButtons [index];
	}
}
