using UnityEngine;
using System.Collections;

public class BoostConfig : MonoBehaviour {
	public Sprite freezeSprite;
	public Sprite energySprite;
	public Sprite bombSprite;

	private PlayerStats playerStats;

	public enum BoostType {
		BOOST_TYPE_FREEZE = 0,
		BOOST_TYPE_ENERGY,
		BOOST_TYPE_BOMB,

		NUM_TYPES,
	};


	// Use this for initialization
	void Start () {
		playerStats = Utilities.GetPlayerStats ();
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

	public void ExecuteBoost(BoostType bType) {
	}
}
