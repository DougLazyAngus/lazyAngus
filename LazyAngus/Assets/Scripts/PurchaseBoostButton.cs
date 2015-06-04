using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class PurchaseBoostButton : MonoBehaviour {
	public float width = 100f;
	public Text buttonText;
	public Text countText;
	public Text restrictionText;

	private BoostConfig.BoostType boostType;

	private RectTransform rectTransform;
	private PlayerStats playerStats;
	private BoostConfig boostConfig;
	private GameController gameController;
	private Button button;

	private int priceInTreats;

	// Update is called once per frame
	void Update () {
	
	}

	public void ConfigureForType(BoostConfig.BoostType bType) {
		boostType = bType;

		rectTransform = GetComponent<RectTransform> ();	
		rectTransform.localScale = new Vector3 (1f, 1f, 1f);

		playerStats = Utilities.GetPlayerStats ();
		boostConfig = Utilities.GetBoostConfig ();
		gameController = Utilities.GetGameController ();
		button = gameObject.GetComponent<Button> ();		

		Image image = gameObject.GetComponent<Image> ();
		image.sprite = boostConfig.GetSpriteForType (bType);

		buttonText.text = boostConfig.GetTitleForType (boostType);

		RefreshButton ();
	} 

	public void RefreshButton() {
		int levelLock = boostConfig.GetLevelLock (boostType);
		int gameLevel = gameController.GetGameLevel ();
		if (gameLevel < levelLock) {
			restrictionText.text = "Wave " + levelLock;
			button.interactable = false;
			countText.text = "";
		} else {
			priceInTreats = boostConfig.GetCurrentPriceForBoost (boostType);
			button.interactable = playerStats.CanAfford (priceInTreats);
			restrictionText.text = "$ " + priceInTreats;
			countText.text = "x " + playerStats.GetAvailableBoostCount(boostType);
		}
	}

	public float GetWidth() {
		return rectTransform.rect.width;
	}
	
	public float GetHeight() {
		return rectTransform.rect.height;
	}

	public void BuyBoost() {
		int price = boostConfig.GetCurrentPriceForBoost (boostType);
		if (playerStats.CanAfford (price)) {
			playerStats.AddBoost (boostType);
			playerStats.SpendTreats (price);
		}
	}
}
