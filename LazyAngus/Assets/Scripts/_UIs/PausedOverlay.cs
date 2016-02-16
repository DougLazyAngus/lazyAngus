using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class PausedOverlay : MonoBehaviour {
	public static PausedOverlay instance;
	public Button overlayButton;
	public GameObject buttonContainer;

	bool registeredForEvents;

	public delegate void PausedOverlayTouchedEventHandler();
	public event PausedOverlayTouchedEventHandler PausedOverlayTouched;


	void Awake() {
		instance = this;
		registeredForEvents = false;
		buttonContainer.SetActive (false);
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateUX ();
	}	
		
	void RegisterForEvents() {
		TimeController.instance.TimeStateChanged += 
			new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			TimeController.instance.TimeStateChanged -= 
				new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
		}
	}		

	void OnPauseChanged() {
		UpdateUX ();
	}

	// Update is called once per frame
	void UpdateUX () {
		if (TimeController.instance.timeState != TimeController.TimeState.PLAYING) {
			overlayButton.gameObject.SetActive (true);
		} else {
			overlayButton.gameObject.SetActive (false);
			buttonContainer.SetActive (false);
		}
	}

	public void ShowSettingsButtons() {
		buttonContainer.SetActive (true);
	}

	public void OnBackgroundTouched() {
		if (PausedOverlayTouched != null) {
			PausedOverlayTouched ();
		}
	}
}
