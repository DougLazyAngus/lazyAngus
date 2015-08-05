using UnityEngine;
using System.Collections;

public class SFXPlayer : MonoBehaviour {
	public static SFXPlayer instance { get; private set; }

	public enum SFXType {
		DEAD_MOUSE_00 = 0,
		DEAD_MOUSE_01,

		BUTTON_CLICK, 

		SLAP_00,
		SLAP_01, 
		SLAP_02,
		
		USE_BOOST,
		
		SAFE_MOUSE,

		NUM_TYPES,
	};

	AudioSource[] audioSources;
	bool registeredForEvents;
	
	public SFXPlayer.SFXType [] deadMouseIds = {
		SFXType.DEAD_MOUSE_00, 
		SFXType.DEAD_MOUSE_01,
	};
	
	public SFXPlayer.SFXType [] slapIds = {
		SFXType.SLAP_00, 
		SFXType.SLAP_01,
		SFXType.SLAP_02,
	};



	void Awake() {
		instance = this;
		LoadAudioSources();
	}

	void LoadAudioSources() {
		audioSources = new AudioSource[(int)SFXType.NUM_TYPES];
		
		LoadAudioSource (SFXType.DEAD_MOUSE_00, "mouse.01");
		LoadAudioSource (SFXType.DEAD_MOUSE_01, "mouse.02");
		
		LoadAudioSource (SFXType.BUTTON_CLICK, "ButtonClick");

		LoadAudioSource (SFXType.SLAP_00, "Kick-SoundBible");
		LoadAudioSource (SFXType.SLAP_01, "Slap.01.SoundBible");
		LoadAudioSource (SFXType.SLAP_02, "Slap.02.SoundBible");
		
		LoadAudioSource (SFXType.USE_BOOST, "Dinner-bell-sound");
		
		LoadAudioSource (SFXType.SAFE_MOUSE, "safemouse.01");
	}


	void LoadAudioSource(SFXType type, string resourceName) {
		AudioSource audioSource = gameObject.AddComponent<AudioSource> ();
		AudioClip clip = Resources.Load("Sounds/" + resourceName) as AudioClip;
		audioSource.clip = clip;
		audioSources [(int)type] = audioSource;
	}

	public void Play(SFXType type) {
		if (SoundController.instance.sfxMuted) {
			return;
		}
		audioSources [(int)type].Play ();
	}

	public void PlayDelayed(SFXType type, float delay) {
		if (SoundController.instance.sfxMuted) {
			return;
		}
		audioSources [(int)type].PlayDelayed(delay);
	}


	public void PlayRandom(SFXType[] types, float delay = 0) {
		if (SoundController.instance.sfxMuted) {
			return;
		}
		int index = Random.Range (0, types.Length);
		AudioSource asource = audioSources[(int)types[index]];
		asource.PlayDelayed(delay);
	}


	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		OnSoundMuteChanged ();
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
		if (SoundController.instance.sfxMuted) {
			for (int i = 0; i < (int)SFXType.NUM_TYPES; i++) {
				audioSources[i].Stop();
			}
		}
	}
}
