using UnityEngine;
using System.Collections;

public class BuyBoost : MonoBehaviour {
	private BoostConfig boostConfig;
	private PlayerStats playerStats;

	void Start() {
		boostConfig = BoostConfig.instance;
		playerStats = PlayerStats.instance;
	}

	public void BuyAndUse() {
		BoostButton button = gameObject.GetComponent<BoostButton>();
		BoostConfig.BoostType boostType = button.GetBoostType ();

		int price = boostConfig.GetCurrentPriceForBoost (boostType);

		if (playerStats.CanAfford (price)) {
			playerStats.AddBoost (boostType);
			playerStats.SpendTreats (price);

			playerStats.RemoveBoost (boostType);			
			boostConfig.ExecuteBoost (boostType);
		}
	}
}
