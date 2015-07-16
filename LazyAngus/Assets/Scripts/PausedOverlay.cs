using UnityEngine;
using System.Collections;

public class PausedOverlay : MonoBehaviour {
	public static PausedOverlay instance;
	public GameObject defaultChildElement;
	public GameObject overlay;

	GameObject customChildElement;

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

	public void SetChildElement(GameObject childElement) {
		if (customChildElement) {
			customChildElement.transform.SetParent (null, false);
		}

		customChildElement = childElement;
		if (customChildElement == null) {
			customChildElement = defaultChildElement;
		}
		customChildElement.transform.SetParent (overlay.transform, false);
	}
}
