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

	public Sprite[] sprites;

	private PlayerStats playerStats;
	private TweakableParams tweakableParams;
	private GameController gameController;
	
	public delegate void BoostActiveEventHandler();
	public event BoostActiveEventHandler BoostActive;

	public static BoostConfig instance { get; private set; }

	public BoostType activeBoost { get; private set; }

	IEnumerator activePause;

	private float activeBoostStartTime;
	private float activeBoostEndTime;

	void Awake() {
		instance = this;
		activeBoost = BoostType.NUM_TYPES;
	}

	// Use this for initialization
	void Start () {
		playerStats = PlayerStats.instance;
		tweakableParams = TweakableParams.instance;
		gameController = GameController.instance;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public Sprite GetSpriteForType(BoostType bType) {
		int index = (int)bType;
		return sprites [index];
	}

	public string GetTitleForType(BoostType bType) {
		switch (bType) {
		case BoostType.BOOST_TYPE_FAST_PAWS:
			return "Fast Paws";
		case BoostType.BOOST_TYPE_GOOD_EYES:
			return "Super Sight";
		case BoostType.BOOST_TYPE_BIG_PAWS:
			return "Big Paws";
		case BoostType.BOOST_TYPE_POISON_PAWS:
			return "Poison Paws";
		case BoostType.BOOST_TYPE_FART:
			return "Farts";
		default:
			return null;
		}
	}


	public int GetCurrentPriceForBoost(BoostType bType) {
		// Triangle numbers vs number bought.
		int numBought = playerStats.GetPurchasedBoostCount (bType);
		return (numBought + 1) * (numBought + 2)/2;
	}

	
	public int GetLevelLock(BoostType bType) {
		switch (bType) {
		case BoostType.BOOST_TYPE_FAST_PAWS:
			return 2;
		case BoostType.BOOST_TYPE_GOOD_EYES:
			return 5;
		case BoostType.BOOST_TYPE_BIG_PAWS:
			return 8;
		case BoostType.BOOST_TYPE_POISON_PAWS:
			return 11;
		case BoostType.BOOST_TYPE_FART:
			return 14;
		}
		return 0;
	}

	public float GetBoostTime(BoostType bType) {
		switch (bType) {
		case BoostType.BOOST_TYPE_FAST_PAWS:
			return tweakableParams.fastPawsBoostTime;
		case BoostType.BOOST_TYPE_GOOD_EYES:
			return tweakableParams.goodEyesBoostTime;
		case BoostType.BOOST_TYPE_BIG_PAWS:
			return tweakableParams.bigPawsBoostTime;
		case BoostType.BOOST_TYPE_POISON_PAWS:
			return tweakableParams.poisonPawsBoostTime;
		case BoostType.BOOST_TYPE_FART:
			return tweakableParams.fartBoostTime;
		}
		return 10.0f;
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

		activeBoost = bType;
		activeBoostStartTime = Time.time;
		activeBoostEndTime = activeBoostStartTime + pauseTime;
		
		if (BoostActive != null) {
			BoostActive ();
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

		activeBoost = BoostType.NUM_TYPES;
		activeBoostStartTime = activeBoostEndTime = 0;

		if (BoostActive != null) {
			BoostActive ();
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
