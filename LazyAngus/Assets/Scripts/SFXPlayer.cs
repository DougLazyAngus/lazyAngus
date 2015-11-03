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
		COMIC_VIOLENCE_03,
		COMIC_VIOLENCE_04,
		COMIC_VIOLENCE_05,

		MOUSE_SQUEAK_00,
		MOUSE_SQUEAK_01,
		MOUSE_SQUEAK_02,
		MOUSE_SQUEAK_03,

		BUTTON_CLICK, 
		  
		USE_BOOST,
		
		MOUSE_TRAP_00,
		MOUSE_TRAP_01,
		MOUSE_TRAP_02,

		CAMERA,

		EARN_MONEY,

		ESCAPING_00, 
		ESCAPING_01, 
		ESCAPING_02, 

		LOSER,

		NUM_TYPES,
	};

	public enum SFXTypeGroup {
		PAW_SWIPE, 
		COMIC_VIOLENCE,
		MOUSE_SQUEAK,
		ESCAPING,
		MOUSE_TRAP,
	}

	AudioSource[] audioSources;
	bool registeredForEvents;

	SFXPlayer.SFXType[] comicViolenceIds = {
		SFXType.COMIC_VIOLENCE_00, 
		SFXType.COMIC_VIOLENCE_01,
		SFXType.COMIC_VIOLENCE_02,
		SFXType.COMIC_VIOLENCE_03,
		SFXType.COMIC_VIOLENCE_04,
		SFXType.COMIC_VIOLENCE_05,
	};
	
	SFXPlayer.SFXType [] mouseSqueakIds = {
		SFXType.MOUSE_SQUEAK_00, 
		SFXType.MOUSE_SQUEAK_01, 
		SFXType.MOUSE_SQUEAK_02, 
		SFXType.MOUSE_SQUEAK_03, 
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
	
	SFXPlayer.SFXType[] mouseTrapIds = {
		SFXType.MOUSE_TRAP_00, 
		SFXType.MOUSE_TRAP_01,
		SFXType.MOUSE_TRAP_02,
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
		LoadAudioSource (SFXType.COMIC_VIOLENCE_03, "Boing_3");
		LoadAudioSource (SFXType.COMIC_VIOLENCE_04, "Boing_4");
		LoadAudioSource (SFXType.COMIC_VIOLENCE_05, "boingding");

		audioSources [(int)SFXType.COMIC_VIOLENCE_03].pitch = 1.3f;
		audioSources [(int)SFXType.COMIC_VIOLENCE_03].volume = 1.85f;
		
		audioSources [(int)SFXType.COMIC_VIOLENCE_04].pitch = 1.3f;
		audioSources [(int)SFXType.COMIC_VIOLENCE_04].volume = 0.85f;
		
		audioSources [(int)SFXType.COMIC_VIOLENCE_05].pitch = 1.3f;
		audioSources [(int)SFXType.COMIC_VIOLENCE_05].volume = 0.85f;

		LoadAudioSource (SFXType.MOUSE_SQUEAK_00, "squeak.01");
		LoadAudioSource (SFXType.MOUSE_SQUEAK_01, "squeak.01");
		LoadAudioSource (SFXType.MOUSE_SQUEAK_02, "squeak.01");
		LoadAudioSource (SFXType.MOUSE_SQUEAK_03, "squeak.01");

		audioSources [(int)SFXType.MOUSE_SQUEAK_00].pitch = 1.0f;
		audioSources [(int)SFXType.MOUSE_SQUEAK_00].volume = 1.0f;

		audioSources [(int)SFXType.MOUSE_SQUEAK_01].pitch = 1.1f;
		audioSources [(int)SFXType.MOUSE_SQUEAK_00].volume = 0.9f;

		audioSources [(int)SFXType.MOUSE_SQUEAK_02].pitch = 1.3f;
		audioSources [(int)SFXType.MOUSE_SQUEAK_02].volume = 0.85f;

		audioSources [(int)SFXType.MOUSE_SQUEAK_03].pitch = 1.5f;
		audioSources [(int)SFXType.MOUSE_SQUEAK_03].volume = 0.85f;

		LoadAudioSource (SFXType.BUTTON_CLICK, "ButtonClick");
		
		LoadAudioSource (SFXType.PAW_SWIPE_00, "woosh_1");
		LoadAudioSource (SFXType.PAW_SWIPE_01, "woosh_2");
		LoadAudioSource (SFXType.PAW_SWIPE_02, "woosh_3");
		
		LoadAudioSource (SFXType.ESCAPING_00, "escaping.01");
		LoadAudioSource (SFXType.ESCAPING_01, "escaping.02");
		LoadAudioSource (SFXType.ESCAPING_02, "escaping.03");

		LoadAudioSource (SFXType.USE_BOOST, "dinner_bell");
		
		LoadAudioSource (SFXType.MOUSE_TRAP_00, "mouse_trap.03");
		LoadAudioSource (SFXType.MOUSE_TRAP_01, "mouse_trap.03");
		LoadAudioSource (SFXType.MOUSE_TRAP_02, "mouse_trap.03");
		audioSources [(int)SFXType.MOUSE_TRAP_00].pitch = 0.9f;
		audioSources [(int)SFXType.MOUSE_TRAP_01].pitch = 1f;
		audioSources [(int)SFXType.MOUSE_TRAP_02].pitch = 1.1f;

		audioSources [(int)SFXType.MOUSE_SQUEAK_02].pitch = 1.3f;

		LoadAudioSource (SFXType.CAMERA, "camera");
		audioSources [(int)SFXType.CAMERA].volume = 0.3f;
		
		LoadAudioSource (SFXType.EARN_MONEY, "money.01");
		
		LoadAudioSource (SFXType.LOSER, "loser");
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
		case SFXTypeGroup.MOUSE_TRAP:
			types = mouseTrapIds;
			break;
		default:
			types = pawSwipeIds;
			break;
		}

		int index = Random.Range (0, types.Length);
		AudioSource asource = audioSources[(int)types[index]];
		asource.PlayDelayed(delay);

		if (Debug.isDebugBuild) {
			Debug.Log ("Pitch = " + asource.pitch);
		}
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
