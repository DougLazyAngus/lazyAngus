using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PausePlayToggle : MonoBehaviour {
	public Text pausePlayButtonText;
	public GameObject overlay;

	bool registeredForEvents;

	void Awake() {
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
			pausePlayButtonText.text = "Play";
			overlay.SetActive (true);
		} else {
			pausePlayButtonText.text = "Pause";
			overlay.SetActive (false);
		}
	}

	public void TogglePausePlay() {
		if (TimeController.instance.paused) {
			TimeController.instance.UnPauseTime ();
		} else {
			TimeController.instance.PauseTime ();
		}
	}
}
