using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackMoney : MonoBehaviour {
	
	public Text moneyText;
	public DistortForEffect distortForEffect;
	
	private PlayerStats playerStats;
	private bool registerdForEvents;
	
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
	
	// Update is called once per frame
	void DynamicUpdateTreatsText () {
		SetTreatsText ();
		distortForEffect.DistortWithDelay (TweakableParams.flyingAnimationTime);
	}
}
