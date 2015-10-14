using UnityEngine;
using System.Collections;

public class MusicController : MonoBehaviour {

	bool registeredForEvents;
	public GameObject fadeableAudioSourcePrototype;
	public int altMusicCutoff = 6;
	public float altMusicLikelihood = 0.33f;

	bool useAltMusic;
	MusicType altBoostType;
	MusicType altPlayType;

	public enum MusicType {
		LEVEL_PLAY,
		LEVEL_END,
		GAME_OVER,
		WELCOME,
		REAL_ANGUS,
		BOOST,

		BOOST_ALT_01,
		BOOST_ALT_02,
		BOOST_ALT_03,

		LEVEL_PLAY_MOD_01,
		LEVEL_PLAY_MOD_02,

		LEVEL_PLAY_ALT_01,
		LEVEL_PLAY_ALT_02,
		LEVEL_PLAY_ALT_03,

		LOSING,

		NUM_TYPES,
	}
	
	MusicType [] playTypes = {
		MusicType.LEVEL_PLAY,
		MusicType.LEVEL_PLAY,
		MusicType.LEVEL_PLAY_MOD_01,
		MusicType.LEVEL_PLAY,
		MusicType.LEVEL_PLAY_MOD_02,
	};
	
	MusicType [] altPlays = {
		MusicType.LEVEL_PLAY_ALT_01,
		MusicType.LEVEL_PLAY_ALT_02,
		MusicType.LEVEL_PLAY_ALT_03,
	};

	MusicType[] altBoosts = {
		MusicType.BOOST_ALT_01,
		MusicType.BOOST_ALT_02,
		MusicType.BOOST_ALT_03,
	};

	AudioSource currentMusic;
	AudioSource[] audioSources;

	void Awake() {
		useAltMusic = false;
		LoadAudioSources();
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateAllMusic ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void LoadAudioSources() {
		audioSources = new AudioSource[(int)MusicType.NUM_TYPES];
		
		LoadAudioSource (MusicType.LEVEL_PLAY, "level_play");
		LoadAudioSource (MusicType.LEVEL_END, "level_end");
		LoadAudioSource (MusicType.GAME_OVER, "game_over");
		LoadAudioSource (MusicType.WELCOME, "welcome");
		LoadAudioSource (MusicType.REAL_ANGUS, "real_angus");
		LoadAudioSource (MusicType.BOOST, "boost");

		LoadAudioSource (MusicType.BOOST_ALT_01, "boost.alt.01");
		LoadAudioSource (MusicType.BOOST_ALT_02, "boost.alt.02");
		LoadAudioSource (MusicType.BOOST_ALT_03, "boost.alt.03");

		LoadAudioSource (MusicType.LEVEL_PLAY_MOD_01, "level_play.mod.01");
		AdjustVolume (MusicType.LEVEL_PLAY_MOD_01, 0.18f);
		LoadAudioSource (MusicType.LEVEL_PLAY_MOD_02, "level_play.mod.02");

		LoadAudioSource (MusicType.LEVEL_PLAY_ALT_01, "level_play.alt.01");
		LoadAudioSource (MusicType.LEVEL_PLAY_ALT_02, "level_play.alt.02");
		LoadAudioSource (MusicType.LEVEL_PLAY_ALT_03, "level_play.alt.03");

		LoadAudioSource (MusicType.LOSING, "loser");
		audioSources [(int)(MusicType.LOSING)].loop = false;
	}


	int GetRandomSeed() {
		return 1000 * GameLevelState.instance.gameLevel + GamePhaseState.instance.instancesFinishedEver; 
	}

	void AdjustVolume(MusicType type, float volume) {
		AudioSource music = audioSources [(int)type];
		MusicFader fader = music.GetComponent<MusicFader>();
		if (fader) {
			fader.targetVolume = volume;
		} else {
			music.volume = volume;
		}
	}

	void LoadAudioSource(MusicType type, string resourceName) {
		GameObject fadeableAudioSourceObject = Instantiate (fadeableAudioSourcePrototype, 
		                                         new Vector3 (0, 0, 0), 
		                                                    Quaternion.identity) as GameObject;

		AudioSource audioSource = fadeableAudioSourceObject.GetComponent<AudioSource> ();
		AudioClip clip = Resources.Load("Music/" + resourceName) as AudioClip;
		audioSource.clip = clip;
		audioSources [(int)type] = audioSource;
	}

	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		SoundController.instance.MusicMuteChanged +=
			new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);

		TimeController.instance.TimeStateChanged += 
			new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
		BoostConfig.instance.BoostActive += 
			new BoostConfig.BoostActiveEventHandler (OnBoostActive);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			SoundController.instance.MusicMuteChanged -=
				new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);
			TimeController.instance.TimeStateChanged -= 
				new TimeController.TimeStateChangedEventHandler (OnPauseChanged);
			BoostConfig.instance.BoostActive -= 
				new BoostConfig.BoostActiveEventHandler (OnBoostActive);
		}
	}

	void OnGamePhaseChanged() {
		useAltMusic = false;
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY ||
		    GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.PENDING) {
			if (GameLevelState.instance.gameLevel > altMusicCutoff) {
				Random.seed = GetRandomSeed ();
				float testValue = Random.Range (0f, 1f);
				useAltMusic = (testValue < altMusicLikelihood);
				altBoostType = Utilities.RandomElementFromArray<MusicType> (altBoosts);
				altPlayType = Utilities.RandomElementFromArray<MusicType> (altPlays);				
			} 
		}

		UpdateAllMusic ();
	}
	
	void OnMusicMuteChanged() {
		UpdateAllMusic ();
	}
	
	void OnBoostActive(BoostConfig.BoostType newBoost, 
	                   BoostConfig.BoostType oldBoost) {
		UpdateAllMusic ();
	}

	void OnPauseChanged() {
		if (currentMusic != null) {
			if (TimeController.instance.timeState == TimeController.TimeState.COMPLETE_PAUSE) {
				FadeOutMusic(currentMusic);
			} else {
				FadeInMusic(currentMusic);
			}
		}
	}

	AudioSource GetBoostMusic() {
		if (useAltMusic) {
			return audioSources [(int)altBoostType];
		} else {
			return audioSources [(int)MusicType.BOOST];
		}
	}

	AudioSource GetLevelPlayMusic() {
		if (useAltMusic) {
			return audioSources [(int)altPlayType];
		}
		int index = GameLevelState.instance.gameLevel - 1;
		index = index % playTypes.Length;
		return audioSources [(int)playTypes [index]];
	}

	AudioSource GetDesiredPlayMusic() {
		if (BoostConfig.instance.IsBoostActive()) {
			return GetBoostMusic();
		} else {
			return GetLevelPlayMusic();
		}
	}

	AudioSource GetDesiredMusic() {
		if (SoundController.instance.musicMuted) {
			return null;
		}

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			return GetDesiredPlayMusic();
		case GamePhaseState.GamePhaseType.PENDING:
			if (GamePhaseState.instance.pendingPhase == GamePhaseState.GamePhaseType.GAME_OVER) {
				return audioSources[(int)MusicType.LOSING];
			} else {
				return GetDesiredPlayMusic();
			}
		case GamePhaseState.GamePhaseType.REAL_ANGUS:
			return audioSources[(int)MusicType.REAL_ANGUS];
		case GamePhaseState.GamePhaseType.WELCOME:
			return audioSources[(int)MusicType.WELCOME];
		case GamePhaseState.GamePhaseType.GAME_OVER:
		case GamePhaseState.GamePhaseType.INFO:
			return audioSources[(int)MusicType.GAME_OVER];
		case GamePhaseState.GamePhaseType.LEVEL_END:
			return audioSources[(int)MusicType.LEVEL_END];
		default:
			return null;
		}
	}

	float GetDesiredMusicPause() {
		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.REAL_ANGUS:
			return 1f;
		case GamePhaseState.GamePhaseType.GAME_OVER:
		case GamePhaseState.GamePhaseType.INFO:
			return 0.7f;
		default:
			return 0;
		}	
	}

	// Update is called once per frame
	void UpdateAllMusic () {
		AudioSource desiredMusic = GetDesiredMusic ();

		if (desiredMusic == currentMusic) {
			// All good.
			return;
		}

		float pause = GetDesiredMusicPause ();

		// Stop current, start desired.
		FadeOutMusic(currentMusic);
		currentMusic = null;

		if (desiredMusic != null) {
			currentMusic = desiredMusic;
			FadeInMusic(currentMusic, pause);
		}
	}

	void FadeOutMusic(AudioSource music) {
		if (music == null) {
			return;
		}

		MusicFader fader = music.GetComponent<MusicFader>();
		if (fader) {
			fader.FadeOut();
		} else {
			music.Stop();
		}
	}

	void FadeInMusic(AudioSource music, float pause = 0) {
		if (music == null) {
			return;
		}

		MusicFader fader = music.GetComponent<MusicFader> ();
		if (fader) {
			fader.FadeIn(pause);
		} else {
			music.Play ();
		}
	}
}
