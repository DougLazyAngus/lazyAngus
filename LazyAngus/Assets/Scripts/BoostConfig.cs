using UnityEngine;
using System.Collections;

public class BoostConfig : MonoBehaviour {
	public enum BoostType {
		BOOST_TYPE_FREEZE = 0,
		BOOST_TYPE_ENERGY,
		BOOST_TYPE_BOMB,
		
		NUM_TYPES,
	};

	public Sprite freezeSprite;
	public Sprite energySprite;
	public Sprite bombSprite;

	private PlayerStats playerStats;
	private TweakableParams tweakableParams;
	
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
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public Sprite GetSpriteForType(BoostType bType) {
		// FIXME(dbanks)
		// I want to make this more object oriented, not sure how to do that.
		switch (bType) {
		case BoostType.BOOST_TYPE_FREEZE:
			return freezeSprite;
		case BoostType.BOOST_TYPE_ENERGY:
			return energySprite;
		case BoostType.BOOST_TYPE_BOMB:
			return bombSprite;
		default:
			return null;
		}
	}

	public string GetTitleForType(BoostType bType) {
		switch (bType) {
		case BoostType.BOOST_TYPE_FREEZE:
			return "Freeze Time";
		case BoostType.BOOST_TYPE_ENERGY:
			return "Fast Paws";
		case BoostType.BOOST_TYPE_BOMB:
			return "Poison";
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
		case BoostType.BOOST_TYPE_FREEZE:
			return 1;
		case BoostType.BOOST_TYPE_ENERGY:
			return 4;
		case BoostType.BOOST_TYPE_BOMB:
			return 9;
		default:
			return 1000;
		}
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

		// Make sure nothing else is going.
		CleanupActiveBoost ();

		float pauseTime = 0;
		switch (bType) {
		case BoostType.BOOST_TYPE_BOMB:
			pauseTime = tweakableParams.bombBoostTime;
			break;
		case BoostType.BOOST_TYPE_ENERGY:
			pauseTime = tweakableParams.energyBoostTime;
			break;
		case BoostType.BOOST_TYPE_FREEZE:
			pauseTime = tweakableParams.freezeBoostTime;
			break;
		}

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
