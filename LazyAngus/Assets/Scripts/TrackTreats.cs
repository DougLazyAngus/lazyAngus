using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class TrackTreats : MonoBehaviour {
	
	private Text treatsText;
	private DistortForEffect distortForEffect;
	
	private GameController gc;
	private bool registeredForEvents;
	
	// Use this for initialization
	void Start () {
		treatsText = this.gameObject.GetComponent<Text> ();
		distortForEffect = this.gameObject.GetComponent<DistortForEffect> ();
		
		gc = Utilities.GetGameController ();
		gc.TreatsChanged += new GameController.TreatsChangedEventHandler (DynamicUpdateTreatsText);
		registeredForEvents = true;
		SetTreatsText ();
	}
	
	void OnDestroy() {
		if (registeredForEvents) {
			gc.TreatsChanged -= new GameController.TreatsChangedEventHandler (DynamicUpdateTreatsText);
		}
	}
	
	void SetTreatsText() {
		treatsText.text = "Treats: " + gc.GetTreats ();
	}
	
	// Update is called once per frame
	void DynamicUpdateTreatsText () {
		SetTreatsText ();
		distortForEffect.Distort ();
	}
}
