using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class BoostButton : MonoBehaviour {
	public Text levelLockText;
	public GameObject levelLockWidget;
	public Text costText;
	public GameObject costWidget;
	public float delayForDistortOnEnable = 1;
	
	BoostConfig.BoostType boostType;
	
	int priceInTreats;
	bool registeredForEvents;
	
	public Color cantUseColor;

	bool buttonDirty;

	float overrideAdditionalScale = 0.25f;
	float normalAdditionalScale = 1.0f;

	void Awake() {
		levelLockText.color = cantUseColor;
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
		int levelLock = LevelConfig.instance.GetLevelLock (boostType);

		if (!BoostIsUnlocked ()) {
			levelLockWidget.SetActive (true);
			costWidget.gameObject.SetActive (false);

			levelLockText.text = "" + levelLock;
		} else {
			levelLockWidget.SetActive (false);
			costWidget.gameObject.SetActive (true);
		}

		priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);
		costText.text = "$" + priceInTreats;
		if (CanAffordBoost()) {
			costText.color = Color.black;
		} else {
			costText.color = cantUseColor;
		}

		if (BoostConfig.instance.activeBoost == boostType) {
			DistortForEffect d4e = GetComponent<DistortForEffect> ();
			d4e.Cancel ();
		}

		buttonDirty = false;
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
			DistortForEffect d4e = GetComponent<DistortForEffect> ();
			d4e.DistortWithDelay (delayForDistortOnEnable);

			// If the user has never used this boost before, 
			// and this is the first boost, 
			// just flash it the whole time.
			if (boostType == BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS && 
			    !BoostConfig.instance.UserHasUsedBoost (boostType)) {
				d4e.looping = true;
				d4e.additionalScale = overrideAdditionalScale;
			} else {
				d4e.additionalScale = normalAdditionalScale;
			}
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
}
