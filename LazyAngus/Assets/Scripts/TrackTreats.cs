using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackTreats : MonoBehaviour {
	
	private Text treatsText;
	private DistortForEffect distortForEffect;
	
	private PlayerStats playerStats;
	private bool registeredForEvents;
	
	// Use this for initialization
	void Start () {
		treatsText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();
		
		playerStats = Utilities.GetPlayerStats ();
		playerStats.TreatsChanged += new PlayerStats.TreatsChangedEventHandler (DynamicUpdateTreatsText);
		registeredForEvents = true;
		SetTreatsText ();
	}
	
	void OnDestroy() {
		if (registeredForEvents) {
			playerStats.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (DynamicUpdateTreatsText);
		}
	}
	
	void SetTreatsText() {
		treatsText.text = "$: " + playerStats.GetTreats ();
	}
	
	// Update is called once per frame
	void DynamicUpdateTreatsText () {
		SetTreatsText ();
		distortForEffect.Distort ();
	}
}
