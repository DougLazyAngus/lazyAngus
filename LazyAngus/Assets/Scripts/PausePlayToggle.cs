using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PausePlayToggle : MonoBehaviour {
	/*
	public Image pausePlayButtonImage;

	public Sprite pauseSprite;
	public Sprite playSprite;

	bool registeredForEvents;

	void Awake() {
		registeredForEvents = false;
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateUX ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
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
			pausePlayButtonImage.sprite = playSprite;
		} else {
			pausePlayButtonImage.sprite = pauseSprite;
		}
	}
	*/

	public void TogglePausePlay() {
		if (TimeController.instance.paused) {
			TimeController.instance.UnPauseTime ();
		} else {
			TimeController.instance.PauseTime ();
		}
	}
}
