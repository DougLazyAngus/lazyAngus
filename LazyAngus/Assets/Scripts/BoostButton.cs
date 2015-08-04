using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class BoostButton : MonoBehaviour {
	private Button button;
	public Text levelLockText;
	public Image levelLockImage;
	public Text costText;


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

		button = gameObject.GetComponent<Button> ();		

		Image image = gameObject.GetComponent<Image> ();
		image.sprite = BoostConfig.instance.GetButtonImageForType (boostType);
	} 


	public void RefreshButton() {
		levelLockText.gameObject.SetActive(true);

		int levelLock = LevelConfig.instance.GetLevelLock (boostType);
		int gameLevel = GameLevelState.instance.gameLevel;
		
		if (gameLevel < levelLock) {
			levelLockText.gameObject.SetActive(true);
			levelLockImage.gameObject.SetActive (true);
			costText.gameObject.SetActive (false);

			levelLockText.text = "Wave " + levelLock;
			button.interactable = false;
		} else {
			levelLockText.gameObject.SetActive(false);
			levelLockImage.gameObject.SetActive (false);
			costText.gameObject.SetActive (true);

			priceInTreats = BoostConfig.instance.GetCurrentPriceForBoost (boostType);

			costText.text = "$ " + priceInTreats;

			button.interactable = (PlayerStats.instance.CanAfford (priceInTreats) && 
			                       !BoostConfig.instance.IsBoostActive () && 
			                       GamePhaseState.instance.IsPlaying());
			if (!button.interactable) {
				costText.fontStyle = FontStyle.Italic;
			} else {
				costText.fontStyle = FontStyle.Normal;
			}
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
