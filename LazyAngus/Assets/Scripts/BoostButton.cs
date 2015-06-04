﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class BoostButton : MonoBehaviour {
	public enum BoostButtonMode {
		BOOST_BUTTON_MODE_USE = 0,
		BOOST_BUTTON_MODE_BUY,

		NUM_TYPES,
	}

	public BoostButtonMode mode;

	public float width = 100f;

	private Button button;
	public Text buttonText;
	public Text countText;
	public Text restrictionText;


	private BoostConfig.BoostType boostType;

	private RectTransform rectTransform;
	private PlayerStats playerStats;
	private BoostConfig boostConfig;
	private GameController gameController;

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
		if (mode == BoostButtonMode.BOOST_BUTTON_MODE_BUY) {
			RefreshForBuy ();
		} else {
			RefreshForUse ();
		}
	}

	public void RefreshForBuy() {
		restrictionText.gameObject.SetActive(true);
		buttonText.gameObject.SetActive(true);

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

	public void RefreshForUse() {
		restrictionText.gameObject.SetActive(false);
		buttonText.gameObject.SetActive(false);

		int levelLock = boostConfig.GetLevelLock (boostType);
		int gameLevel = gameController.GetGameLevel ();
		
		if (playerStats.GetAvailableBoostCount(boostType) > 0) {
			button.gameObject.SetActive (true);
			countText.gameObject.SetActive (true);
			countText.text = "x " + playerStats.GetAvailableBoostCount(boostType);
		} else {
			button.gameObject.SetActive (false);
			countText.gameObject.SetActive (false);
		}
	}
	
	public float GetWidth() {
		return rectTransform.rect.width;
	}
	
	public float GetHeight() {
		return rectTransform.rect.height;
	}

	public BoostConfig.BoostType GetBoostType() {
		return boostType;
	}
}