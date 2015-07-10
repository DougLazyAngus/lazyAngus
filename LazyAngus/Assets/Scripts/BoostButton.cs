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
	
	private int priceInTreats;
	private bool registeredForEvents;
	
	private bool buttonDirty;

	void Start() {
		RegisterForEvents();
		buttonDirty = false;

		CheckForLevelUnlockEffects ();
	}

	void Update() {
		if (buttonDirty) {
			RefreshButton ();
		}
	}

	void RegisterForEvents() {
		if (!registeredForEvents) {
			registeredForEvents = true;
			PlayerStats.instance.TreatsChanged += new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
			PlayerStats.instance.BoostsChanged += new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);			
			GameController.instance.GameLevelChanged += new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
			GameController.instance.GamePhaseChanged += new GameController.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			PlayerStats.instance.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
			PlayerStats.instance.BoostsChanged -= new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);			
			GameController.instance.GameLevelChanged -= new GameController.GameLevelChangedEventHandler (OnGameLevelChanged);
			GameController.instance.GamePhaseChanged -= new GameController.GamePhaseChangedEventHandler (OnGameLevelChanged);			
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	public void ConfigureForType(BoostConfig.BoostType bType) {
		boostType = bType;

		button = gameObject.GetComponent<Button> ();		

		Image image = gameObject.GetComponent<Image> ();
		image.sprite = BoostConfig.instance.GetButtonImageForType (boostType);

		buttonText.text = BoostConfig.instance.GetTitleForType (boostType);

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

		int levelLock = LevelConfig.instance.GetLevelLock (boostType);
		int gameLevel = GameController.instance.gameLevel;
		
		if (gameLevel < levelLock) {
			restrictionText.text = "Wave " + levelLock;
			button.interactable = false;
			countText.text = "";
		} else {
			priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
			restrictionText.text = "$ " + priceInTreats;
			button.interactable = (PlayerStats.instance.CanAfford (priceInTreats) && 
			                       !BoostConfig.instance.IsBoostActive () && 
			                       GameController.instance.IsPlaying());
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

		int levelLock = LevelConfig.instance.GetLevelLock (boostType);
		int gameLevel = GameController.instance.gameLevel;

		if (gameLevel < levelLock) {
			restrictionText.text = "Wave " + levelLock;
			button.interactable = false;
			countText.text = "";
		} else {
			priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
			button.interactable = PlayerStats.instance.CanAfford (priceInTreats);
			restrictionText.text = "$ " + priceInTreats;
			countText.text = "x " + PlayerStats.instance.GetAvailableBoostCount(boostType);
		}
	}

	public void RefreshForUse() {
		restrictionText.gameObject.SetActive(false);
		buttonText.gameObject.SetActive(false);
		countText.gameObject.SetActive(true);

		if (PlayerStats.instance.GetAvailableBoostCount(boostType) > 0) {
			button.gameObject.SetActive (true);
			countText.gameObject.SetActive (true);
			countText.text = "x " + PlayerStats.instance.GetAvailableBoostCount(boostType);

			button.interactable = (!BoostConfig.instance.IsBoostActive() && 
			                       GameController.instance.IsPlaying());
		} else {
			button.gameObject.SetActive (false);
			countText.gameObject.SetActive (false);
		}
	}

	public BoostConfig.BoostType GetBoostType() {
		return boostType;
	}

	void OnGameLevelChanged() {
		buttonDirty = true;
	}
	
	void OnGamePhaseChanged() {
		buttonDirty = true;

		CheckForLevelUnlockEffects ();
	}

	void CheckForLevelUnlockEffects() {
		if (GameController.instance.IsPlaying () && 
		    GameController.instance.gameLevel == LevelConfig.instance.GetLevelLock (boostType)) {
			// Wait, then wiggle.
			StartCoroutine(TriggerDistortionEffect ());
		}

	}
	
	void OnBoostsChanged() {
		buttonDirty = true;
	}
	
	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		buttonDirty = true;
	}
	
	void OnTreatsChanged() {
		buttonDirty = true;
	}

	void OnBoostUnlocked(BoostConfig.BoostType bType) {
		if (bType == boostType) {
			// Give a bounce effect.
			GetComponent<DistortForEffect>().Distort();
		}
	}

	IEnumerator TriggerDistortionEffect() {
		yield return new WaitForSeconds (0.25f); 
		GetComponent<DistortForEffect>().Distort();
	}

}
