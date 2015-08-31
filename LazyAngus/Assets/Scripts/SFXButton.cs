using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SFXButton : MonoBehaviour {
	bool registeredForEvents;

	Sprite soundOnSprite;
	Sprite soundOffSprite;
	public Image buttonImage;

	void Awake() {
		string path;

		path = "Textures/Buttons/sound_button.01";
		soundOnSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/Buttons/mute_button.01";
		soundOffSprite = Resources.Load<UnityEngine.Sprite>(path);		
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateButtonImage ();
	}

	void OnDestroy() {
		UnregisterForEvents ();

	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		SoundController.instance.SoundMuteChanged +=
			new SoundController.SoundMuteChangedEventHandler (OnSoundMuteChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			SoundController.instance.SoundMuteChanged -=
				new SoundController.SoundMuteChangedEventHandler (OnSoundMuteChanged);
		}
	}

	void OnSoundMuteChanged() {
		UpdateButtonImage ();
	}

	// Update is called once per frame
	void UpdateButtonImage () {
		if (SoundController.instance.sfxMuted) {
			buttonImage.sprite = soundOffSprite;
		} else {
			buttonImage.sprite = soundOnSprite;
		}
	}
}
