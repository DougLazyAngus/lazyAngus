using UnityEngine;
using System.Collections;

public class BuyBoost : MonoBehaviour {
	private BoostConfig boostConfig;
	private PlayerStats playerStats;

	void Start() {
		boostConfig = BoostConfig.instance;
		playerStats = PlayerStats.instance;
	}

	public void Buy() {
		BoostButton button = gameObject.GetComponent<BoostButton>();

		int price = boostConfig.GetCurrentPriceForBoost (button.GetBoostType());
		if (playerStats.CanAfford (price)) {
			playerStats.AddBoost (button.GetBoostType());
			playerStats.SpendTreats (price);
		}
	}
}
