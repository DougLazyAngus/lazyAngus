using UnityEngine;
using System.Collections;

public class BuyAndUseBoost : MonoBehaviour {
	BoostButton boostButton;
	
	void Awake() {
		boostButton = GetComponent<BoostButton> ();
	}

	public void BuyAndUse() {
		if (!boostButton.BoostIsUnlocked ()) {
			TipController.instance.EnqueueAnytimeTip("I can't eat that cat food until Wave " +
			                                         boostButton.GetLevelLock() + "!");
			return;
		}
		
		if (BoostConfig.instance.IsBoostActive()) {
			TipController.instance.EnqueueAnytimeTip("I can only use one cat food at a time!");
			return;
		}
		
		if (!boostButton.CanAffordBoost ()) {
			TipController.instance.EnqueueAnytimeTip("I can't afford that cat food!\n\nI can earn money by swiping two mice at once!");
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
