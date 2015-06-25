using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class BoostButton : MonoBehaviour {
	public enum BoostButtonMode {
		BOOST_BUTTON_MODE_USE = 0,
		BOOST_BUTTON_MODE_BUY,
		BOOST_BUTTON_MODE_BUY_AND_USE,

		NUM_TYPES,
	}

	public BoostButtonMode mode;

	private Button button;
	public Text buttonText;
	public Text countText;
	public Text restrictionText;


	private BoostConfig.BoostType boostType;

	private PlayerStats playerStats;
	private BoostConfig boostConfig;
	private GameController gameController;

	private int priceInTreats;

	private bool started;

	void Awake() {
		playerStats = PlayerStats.instance;
		boostConfig = BoostConfig.instance;
		gameController = GameController.instance;
	}
	
	public void ConfigureForType(BoostConfig.BoostType bType) {
		boostType = bType;

		button = gameObject.GetComponent<Button> ();		

		Image image = gameObject.GetComponent<Image> ();
		image.sprite = boostConfig.GetButtonImageForType (boostType);

		buttonText.text = boostConfig.GetTitleForType (boostType);

		RefreshButton ();
	} 

	public void RefreshButton() {
		switch (mode) {
		case BoostButtonMode.BOOST_BUTTON_MODE_BUY:
			RefreshForBuy ();
			break;
		case BoostButtonMode.BOOST_BUTTON_MODE_USE:
			RefreshForUse ();
			break;
		default:
			RefreshForBuyAndUse ();
			break;
		}
	}

	public void RefreshForBuyAndUse() {
		restrictionText.gameObject.SetActive(true);
		buttonText.gameObject.SetActive(false);
		countText.gameObject.SetActive(false);

		int levelLock = boostConfig.GetLevelLock (boostType);
		int gameLevel = gameController.gameLevel;
		
		if (gameLevel < levelLock) {
			restrictionText.text = "Wave " + levelLock;
			button.interactable = false;
			countText.text = "";
		} else {
			priceInTreats = boostConfig.GetCurrentPriceForBoost (boostType);
			restrictionText.text = "$ " + priceInTreats;
			button.interactable = (playerStats.CanAfford (priceInTreats) && 
			                       !boostConfig.IsBoostActive () && 
			                       gameController.gamePhase == GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
		}

		if (!button.interactable) {
			restrictionText.fontStyle = FontStyle.Italic;
		} else {
			restrictionText.fontStyle = FontStyle.Normal;
		}
	}

	public void RefreshForBuy() {
		restrictionText.gameObject.SetActive(true);
		buttonText.gameObject.SetActive(true);
		countText.gameObject.SetActive(true);

		int levelLock = boostConfig.GetLevelLock (boostType);
		int gameLevel = gameController.gameLevel;

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

	public void RefreshForUse() {
		restrictionText.gameObject.SetActive(false);
		buttonText.gameObject.SetActive(false);
		countText.gameObject.SetActive(true);

		if (playerStats.GetAvailableBoostCount(boostType) > 0) {
			button.gameObject.SetActive (true);
			countText.gameObject.SetActive (true);
			countText.text = "x " + playerStats.GetAvailableBoostCount(boostType);

			button.interactable = (!boostConfig.IsBoostActive() && 
			                       gameController.gamePhase == GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY);
		} else {
			button.gameObject.SetActive (false);
			countText.gameObject.SetActive (false);
		}
	}

	public BoostConfig.BoostType GetBoostType() {
		return boostType;
	}
}
