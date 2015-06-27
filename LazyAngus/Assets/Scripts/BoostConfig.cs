using UnityEngine;
using System.Collections;

public class BoostConfig : MonoBehaviour {
	public enum BoostType {
		BOOST_TYPE_FAST_PAWS = 0,
		BOOST_TYPE_GOOD_EYES,
		BOOST_TYPE_BIG_PAWS,
		BOOST_TYPE_POISON_PAWS,
		BOOST_TYPE_FART,

		NUM_TYPES,
	};

	private BoostDesc[] boostDescs;

	private PlayerStats playerStats;
	private GameController gameController;
	
	public delegate void BoostActiveEventHandler(BoostConfig.BoostType newBoostType, 
	                                             BoostConfig.BoostType oldBoostType);
	public event BoostActiveEventHandler BoostActive;

	public static BoostConfig instance { get; private set; }

	public BoostType activeBoost { get; private set; }

	IEnumerator activePause;

	private float activeBoostStartTime;
	private float activeBoostEndTime;

	void Awake() {
		instance = this;
		activeBoost = BoostType.NUM_TYPES;

		LoadBoostDescs ();
	}

	void LoadBoostDescs() {
		boostDescs = new BoostDesc[(int)BoostType.NUM_TYPES];

		boostDescs [(int)BoostType.BOOST_TYPE_FAST_PAWS] = new BoostDesc (
			"Fast Paws", 
			"energy_can", 
			"energy_can", 
			7.0f, 
			2);

		boostDescs [(int)BoostType.BOOST_TYPE_GOOD_EYES] = new BoostDesc (
			"Super Sight", 
			"glasses_can", 
			"glasses_can", 
			7.0f, 
			5);

		boostDescs [(int)BoostType.BOOST_TYPE_BIG_PAWS] = new BoostDesc (
			"Big Paws", 
			"big_paws_can", 
			"big_paws_can", 
			7.0f, 
			8);

		boostDescs [(int)BoostType.BOOST_TYPE_POISON_PAWS] = new BoostDesc (
			"Poison Paws", 
			"poison_paw_can", 
			"poison_paw_can", 
			7.0f, 
			11);

		boostDescs [(int)BoostType.BOOST_TYPE_FART] = new BoostDesc (
			"Farts", 
			"fart_can", 
			"fart_can", 
			7.0f, 
			14);
	}


	// Use this for initialization
	void Start () {
		playerStats = PlayerStats.instance;
		gameController = GameController.instance;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	public Sprite GetButtonImageForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].buttonSprite;
	}
	
	public Sprite GetIntroImageForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].introScreenSprite;
	}

	public string GetTitleForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].boostName;
	}


	public int GetCurrentPriceForBoost(BoostType bType) {
		// Triangle numbers vs number bought.
		int numBought = playerStats.GetPurchasedBoostCount (bType);
		return (numBought + 1) * (numBought + 2)/2;
	}

	
	public int GetLevelLock(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].levelLock;
	}

	public float GetBoostTime(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].effectiveTime;
	}

	public void CancelBoosts() {
		if (activeBoost == BoostType.NUM_TYPES) {
			return;
		}

		CleanupActiveBoost ();
	}

	public void ExecuteBoost(BoostType bType) {
		// If something's active, ignore.
		if (activeBoost != BoostType.NUM_TYPES) {
			return;
		}

		// If you're trying to 'execute' null type, ignore.
		if (bType == BoostType.NUM_TYPES) {
			return;
		}

		// If we're not in play mode, no dice.
		if (gameController.gamePhase != GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			return;
		}

		// Make sure nothing else is going.
		CleanupActiveBoost ();

		float pauseTime = GetBoostTime (bType);

		BoostType oldType = activeBoost;
		activeBoost = bType;
		activeBoostStartTime = Time.time;
		activeBoostEndTime = activeBoostStartTime + pauseTime;
		
		if (BoostActive != null) {
			BoostActive (activeBoost, oldType);
		}

		activePause = WaitThenCleanup (pauseTime);

		StartCoroutine(activePause);
	}

	IEnumerator WaitThenCleanup(float pauseTime) {
		yield return new WaitForSeconds (pauseTime);
		activePause = null;
		CleanupActiveBoost ();
	}

	void CleanupActiveBoost() {
		if (activePause != null) {
			StopCoroutine (activePause);
			activePause = null;
		}

		BoostType oldType = activeBoost;
		activeBoost = BoostType.NUM_TYPES;
		activeBoostStartTime = activeBoostEndTime = 0;

		if (BoostActive != null) {
			BoostActive (activeBoost, oldType);
		}
	}

	public float GetActiveBoostFractionUsed() {
		return (Time.time - activeBoostStartTime)/
			(activeBoostEndTime - activeBoostStartTime);
	}
	
	public bool IsBoostActive() {
		return (activeBoost != BoostType.NUM_TYPES);
	}
}
