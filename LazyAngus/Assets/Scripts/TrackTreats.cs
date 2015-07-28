using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackTreats : MonoBehaviour {
	
	private Text treatsText;
	private DistortForEffect distortForEffect;
	
	private PlayerStats playerStats;
	private bool registerdForEvents;
	
	// Use this for initialization
	void Start () {
		playerStats = PlayerStats.instance;

		treatsText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();
		
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
		treatsText.text = "$" + playerStats.money;
	}
	
	// Update is called once per frame
	void DynamicUpdateTreatsText () {
		SetTreatsText ();
		distortForEffect.Distort ();
	}
}
