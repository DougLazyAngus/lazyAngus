using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class BoostButton : MonoBehaviour {
	public Text levelLockText;
	public Image levelLockImage;
	public Text costText;

	Image image;

	BoostConfig.BoostType boostType;
	
	int priceInTreats;
	bool registeredForEvents;

	Color enabledColor;
	Color disabledColor;

	bool buttonDirty;

	void Awake() {
		image = gameObject.GetComponent<Image> ();		
		enabledColor = new Color (1, 1, 1, 1);
		disabledColor = new Color (1, 1, 1, 0.5f);
	}

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
			PlayerStats.instance.MoneyChanged += new PlayerStats.MoneyChangedEventHandler (OnTreatsChanged);
			PlayerStats.instance.BoostsChanged += new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);			
			GameLevelState.instance.GameLevelChanged += new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
			GamePhaseState.instance.GamePhaseChanged += new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			PlayerStats.instance.MoneyChanged -= new PlayerStats.MoneyChangedEventHandler (OnTreatsChanged);
			PlayerStats.instance.BoostsChanged -= new PlayerStats.BoostsChangedEventHandler (OnBoostsChanged);			
			GameLevelState.instance.GameLevelChanged -= new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
			GamePhaseState.instance.GamePhaseChanged -= new GamePhaseState.GamePhaseChangedEventHandler (OnGameLevelChanged);			
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	public void ConfigureForType(BoostConfig.BoostType bType) {
		boostType = bType;

		Image image = gameObject.GetComponent<Image> ();
		image.sprite = BoostConfig.instance.GetButtonImageForType (boostType);
	} 

	public int GetLevelLock() {
		return LevelConfig.instance.GetLevelLock (boostType);
	}

	public bool BoostIsUnlocked() {
		int levelLock = GetLevelLock ();
		int gameLevel = GameLevelState.instance.gameLevel;
		return (gameLevel >= levelLock);
	}

	public bool CanAffordBoost() {
		priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
		return PlayerStats.instance.CanAfford (priceInTreats);
	}

	public bool CanUseBoost() {
		return (BoostIsUnlocked() &&
		        CanAffordBoost() &&
				!BoostConfig.instance.IsBoostActive() &&
		        GamePhaseState.instance.IsPlaying());
	}

	public void RefreshButton() {
		levelLockText.gameObject.SetActive(true);

		int levelLock = LevelConfig.instance.GetLevelLock (boostType);

		if (!BoostIsUnlocked ()) {
			levelLockText.gameObject.SetActive (true);
			levelLockImage.gameObject.SetActive (true);
			costText.gameObject.SetActive (false);

			levelLockText.text = "Wave " + levelLock;
		} else {
			levelLockText.gameObject.SetActive (false);
			levelLockImage.gameObject.SetActive (false);
			costText.gameObject.SetActive (true);
		}

		priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
		costText.text = "$ " + priceInTreats;
		if (!CanAffordBoost()) {
			costText.fontStyle = FontStyle.Italic;
		} else {
			costText.fontStyle = FontStyle.Normal;
		}

		if (CanUseBoost ()) {
			image.color = enabledColor;
		} else {
			image.color = disabledColor;
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
		if (GamePhaseState.instance.IsPlaying () && 
		    GameLevelState.instance.gameLevel == LevelConfig.instance.GetLevelLock (boostType)) {
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
	
	IEnumerator TriggerDistortionEffect() {
		yield return new WaitForSeconds (0.25f); 
		GetComponent<DistortForEffect>().Distort();
	}

}
