using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MusicButton : MonoBehaviour {
	bool registeredForEvents;
	
	Sprite onSprite;
	Sprite offSprite;
	public Image buttonImage;
	
	void Awake() {
		string path;
		
		path = "Textures/Buttons/music_button.01";
		onSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/Buttons/music_button_off.01";
		offSprite = Resources.Load<UnityEngine.Sprite>(path);		
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
		SoundController.instance.MusicMuteChanged +=
			new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			SoundController.instance.MusicMuteChanged -=
				new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);
		}
	}
	
	void OnMusicMuteChanged() {
		UpdateButtonImage ();
	}
	
	// Update is called once per frame
	void UpdateButtonImage () {
		if (SoundController.instance.musicMuted) {
			buttonImage.sprite = offSprite;
		} else {
			buttonImage.sprite = onSprite;
		}
	}

}
