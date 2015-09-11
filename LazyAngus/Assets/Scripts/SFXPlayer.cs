using UnityEngine;
using System.Collections;

public class SFXPlayer : MonoBehaviour {
	public static SFXPlayer instance { get; private set; }

	public enum SFXType {
		PAW_SWIPE_00,
		PAW_SWIPE_01, 
		PAW_SWIPE_02,

		COMIC_VIOLENCE_00,
		COMIC_VIOLENCE_01,
		COMIC_VIOLENCE_02,

		MOUSE_SQUEAK,

		BUTTON_CLICK, 
		  
		USE_BOOST,
		
		MOUSE_TRAP,

		CAMERA,

		EARN_MONEY,

		MOUSE_ESCAPE,

		ESCAPING_00, 
		ESCAPING_01, 
		ESCAPING_02, 

		NUM_TYPES,
	};

	public enum SFXTypeGroup {
		PAW_SWIPE, 
		COMIC_VIOLENCE,
		MOUSE_SQUEAK,
		ESCAPING,
	}

	AudioSource[] audioSources;
	bool registeredForEvents;

	SFXPlayer.SFXType[] comicViolenceIds = {
		SFXType.COMIC_VIOLENCE_00, 
		SFXType.COMIC_VIOLENCE_01,
		SFXType.COMIC_VIOLENCE_02,
	};
	
	SFXPlayer.SFXType [] mouseSqueakIds = {
		SFXType.MOUSE_SQUEAK, 
	};
	
	SFXPlayer.SFXType [] pawSwipeIds = {
		SFXType.PAW_SWIPE_00, 
		SFXType.PAW_SWIPE_01,
		SFXType.PAW_SWIPE_02,
	};
	
	SFXPlayer.SFXType [] escapingIds = {
		SFXType.ESCAPING_00, 
		SFXType.ESCAPING_01,
		SFXType.ESCAPING_02,
	};



	void Awake() {
		instance = this;
		LoadAudioSources();
	}

	void LoadAudioSources() {
		audioSources = new AudioSource[(int)SFXType.NUM_TYPES];
		
		LoadAudioSource (SFXType.COMIC_VIOLENCE_00, "Boing_3");
		LoadAudioSource (SFXType.COMIC_VIOLENCE_01, "Boing_4");
		LoadAudioSource (SFXType.COMIC_VIOLENCE_02, "boingding");

		LoadAudioSource (SFXType.MOUSE_SQUEAK, "tmp.mouse.02");

		LoadAudioSource (SFXType.BUTTON_CLICK, "ButtonClick");
		
		LoadAudioSource (SFXType.PAW_SWIPE_00, "tmp.woosh_1");
		LoadAudioSource (SFXType.PAW_SWIPE_01, "tmp.woosh_2");
		LoadAudioSource (SFXType.PAW_SWIPE_02, "tmp.woosh_3");
		
		LoadAudioSource (SFXType.ESCAPING_00, "escaping.01");
		LoadAudioSource (SFXType.ESCAPING_01, "escaping.02");
		LoadAudioSource (SFXType.ESCAPING_02, "escaping.03");

		LoadAudioSource (SFXType.USE_BOOST, "tmp.Dinner-bell-sound");
		
		LoadAudioSource (SFXType.MOUSE_TRAP, "mouse_trap.03");
		
		LoadAudioSource (SFXType.CAMERA, "tmp.camera_hack");
		
		LoadAudioSource (SFXType.EARN_MONEY, "tmp.cash_register.01");

		LoadAudioSource (SFXType.MOUSE_ESCAPE, "Mouse_marimba");
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


	public void PlayRandom(SFXTypeGroup typeGroup, float delay = 0) {
		if (SoundController.instance.sfxMuted) {
			return;
		}

		SFXType [] types;
		switch (typeGroup) {
		case SFXTypeGroup.COMIC_VIOLENCE:
			types = comicViolenceIds;
			break;
		case SFXTypeGroup.MOUSE_SQUEAK:
			types = mouseSqueakIds;
			break;
		case SFXTypeGroup.ESCAPING:
			types = escapingIds;
			break;
		default:
			types = pawSwipeIds;
			break;
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
