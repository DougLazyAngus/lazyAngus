using UnityEngine;
using System.Collections;

public class PausedOverlay : MonoBehaviour {
	public GameObject overlay;
	public static PausedOverlay instance;

	bool registeredForEvents;
	
	void Awake() {
		instance = this;
		registeredForEvents = false;
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateUX ();
	}	
	
	void RegisterForEvents() {
		TimeController.instance.PauseChanged += new TimeController.PauseChangedEventHandler (OnPauseChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			TimeController.instance.PauseChanged -= new TimeController.PauseChangedEventHandler (OnPauseChanged);
		}
	}		

	void OnPauseChanged() {
		UpdateUX ();
	}

	// Update is called once per frame
	void UpdateUX () {
		if (TimeController.instance.paused) {
			overlay.SetActive (true);
		} else {
			overlay.SetActive (false);
		}
	}
}
