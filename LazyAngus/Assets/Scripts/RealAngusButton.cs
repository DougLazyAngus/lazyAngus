using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusButton : MonoBehaviour {
	public GameObject newLabel;
	bool registeredForEvents;

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateDisplay ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnDestroy() {
		UnregisterForEvents ();
		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (UpdateDisplay);
		RealAngusData.instance.RealAngusDataChanged += 
			new RealAngusData.RealAngusDataChangedEventHandler (UpdateDisplay);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (UpdateDisplay);
			RealAngusData.instance.RealAngusDataChanged -= 
				new RealAngusData.RealAngusDataChangedEventHandler (UpdateDisplay);
		}
	}

	void OnEnable() {
		UpdateDisplay ();
	}

	void UpdateDisplay() {
		if (RealAngusData.instance == null) {
			return;
		}

		List<RealAngusItemDesc> raids = RealAngusData.instance.GetRealAngusItemDescs ();

		if (raids == null) {
			return;
		}

		bool hasNewStuff = false;

		for (int i = 0; i < raids.Count; i++) {
			if (raids[i].unlocked && !raids[i].viewed) {
				hasNewStuff = true;
				break;
			}
		}

		newLabel.SetActive (hasNewStuff);
	}

	public void ShowRealAngusPage() {
		GamePhaseState.instance.TransitionToPhase (GamePhaseState.GamePhaseType.REAL_ANGUS);
	}
}
