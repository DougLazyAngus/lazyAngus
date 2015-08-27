using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class PausedOverlay : MonoBehaviour {
	public static PausedOverlay instance;
	public GameObject overlay;
	public Button bigPlayButton;

	GameObject childElement;

	bool registeredForEvents;
	
	void Awake() {
		instance = this;
		registeredForEvents = false;
		bigPlayButton.gameObject.SetActive (false);
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateUX ();
	}	
	
	void RegisterForEvents() {
		TimeController.instance.TimeStateChanged += new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			TimeController.instance.TimeStateChanged -= new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
		}
	}		

	void OnPauseChanged() {
		UpdateUX ();
	}

	// Update is called once per frame
	void UpdateUX () {
		if (TimeController.instance.timeState != TimeController.TimeState.PLAYING) {
			overlay.SetActive (true);
		} else {
			overlay.SetActive (false);

			bigPlayButton.gameObject.SetActive (false);
			if (childElement != null) {
				childElement.transform.SetParent (null, false);
				childElement = null;
			}
		}
	}

	public void ShowBigPlayButton() {
		bigPlayButton.gameObject.SetActive (true);
	}

	public void SetChildElement(GameObject newChildElement) {
		childElement = newChildElement;
		bigPlayButton.gameObject.SetActive (false);

		if (childElement != null) {
			childElement.transform.SetParent (overlay.transform, false);
		}
	}
}
