using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class BoostButtonLayout : MonoBehaviour {
	public float boostButtonSpacing = 0f;
	public float boostButtonYOffset = 60f;
	public GameObject boostButtonPrototype;
	
	private List<BoostButton> boostButtons;
	private bool registeredForEvents;

	private bool boostButtonsDirty;
	private bool treatsTextDirty;
	private bool levelTextDirty;

	private PlayerStats playerStats;
	private GameController gameController;
	private BoostConfig boostConfig;

	private bool started;

	void Awake() {
		registeredForEvents = false;
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

		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);

		registeredForEvents = true;
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			playerStats.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
			playerStats.BoostsChanged -= new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);
			gameController.GameLevelChanged -= new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
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
	}
	
	void LayoutBoostButtons() {
		float totalWidth = 0f;
		bool first = true;
		foreach (BoostButton pbb in boostButtons) {
			if (!first) {
				totalWidth += boostButtonSpacing;
			}
			first = false;
			totalWidth += pbb.GetWidth();
		}

		float leftEdge = -totalWidth / 2;
		float buttonXOffset;

		first = true;

		foreach (BoostButton pbb in boostButtons) {
			if (!first) {
				leftEdge += boostButtonSpacing;
			}
			first = false;

			buttonXOffset = leftEdge + pbb.GetWidth()/2;

			RectTransform rt = pbb.GetComponent<RectTransform>();
			Vector2 position = new Vector2(buttonXOffset, boostButtonYOffset);

			rt.anchoredPosition = position;
			leftEdge += pbb.GetWidth ();
		}
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
