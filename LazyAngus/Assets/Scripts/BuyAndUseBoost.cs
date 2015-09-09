using UnityEngine;
using System.Collections;
using System;

public class BuyAndUseBoost : MonoBehaviour {
	BoostButton boostButton;
	
	void Awake() {
		boostButton = GetComponent<BoostButton> ();
	}

	public void BuyAndUse() {
		if (!boostButton.BoostIsUnlocked ()) {
			TipController.instance.EnqueueAnytimeTip(String.Format(LazyAngusStrings.BOOST_FAIL_LEVEL, 
			                                                       boostButton.GetLevelLock()));
			return;
		}
		
		if (BoostConfig.instance.IsBoostActive()) {
			TipController.instance.EnqueueAnytimeTip(LazyAngusStrings.BOOST_FAIL_ACTIVE);
			return;
		}
		
		if (!boostButton.CanAffordBoost ()) {
			TipController.instance.EnqueueAnytimeTip(LazyAngusStrings.BOOST_FAIL_COST);
			return;
		}

		if (!boostButton.CanUseBoost ()) {
			return;
		}

		BoostConfig.BoostType boostType = boostButton.GetBoostType ();

		int price = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
		PlayerStats.instance.AddBoost (boostType);
		PlayerStats.instance.SpendMoney (price);

		PlayerStats.instance.RemoveBoost (boostType);		
		BoostConfig.instance.ExecuteBoost (boostType);		
	}
}
