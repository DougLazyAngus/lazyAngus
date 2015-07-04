using UnityEngine;
using System.Collections;

public class SFXSilencer: MonoBehaviour {

	bool registeredForEvents;
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateSoundsActive ();
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
		UpdateSoundsActive ();
	}	

	void UpdateSoundsActive() {
		for (int i = 0; i < transform.childCount; i++)
		{
			GameObject go = transform.GetChild(i).gameObject;
			go.SetActive(!SoundController.instance.sfxMuted);
		}
	}
}
