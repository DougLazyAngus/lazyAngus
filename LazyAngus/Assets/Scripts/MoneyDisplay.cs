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
	
	void SetTreatsText() {
		moneyText.text = "" + playerStats.money;
	}
	
	void DynamicUpdateTreatsText () {
		SetTreatsText ();
		distortForEffect.DistortWithDelay (TweakableParams.flyingAnimationTime);
	}
}
