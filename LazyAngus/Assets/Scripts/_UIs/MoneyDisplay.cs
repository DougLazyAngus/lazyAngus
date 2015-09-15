using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class MoneyDisplay : MonoBehaviour {
	
	public Text moneyText;

	PlayerStats playerStats;
	bool registerdForEvents;
	DistortForEffect distortForEffect;


	void Awake() {
		distortForEffect = GetComponent<DistortForEffect> ();
	}

	// Use this for initialization
	void Start () {
		playerStats = PlayerStats.instance;

		playerStats.MoneyChanged += new PlayerStats.MoneyChangedEventHandler (DynamicUpdateTreatsText);
		registerdForEvents = true;
		SetTreatsText ();
	}
	
	void OnDestroy() {
		if (registerdForEvents) {
			playerStats.MoneyChanged -= new PlayerStats.MoneyChangedEventHandler (DynamicUpdateTreatsText);
		}
	}
	
	bool SetTreatsText() {
		string text = "" + playerStats.money;
		if (text != moneyText.text) {
			moneyText.text = text;
			return true;
		} else {
			return false;
		}
	}
	
	void DynamicUpdateTreatsText () {
		if (SetTreatsText()) {
			distortForEffect.DistortWithDelay (TweakableParams.flyingAnimationTime);
		}
	}
}
