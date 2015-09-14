using UnityEngine;
using System.Collections;

public class MusicPlayer : MonoBehaviour {

	bool registeredForEvents;
	

	public AudioSource gameMusic;
	public AudioSource welcomeMusic;
	public AudioSource menuMusic;
	public AudioSource realAngusMusic;
	public AudioSource boostMusic;

	AudioSource currentMusic;

	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateAllMusic ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
		
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

	// Update is called once per frame
	void UpdateAllMusic () {
		AudioSource desiredMusic = null;

		if (!SoundController.instance.musicMuted) {
			switch (GamePhaseState.instance.gamePhase) {
			case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			case GamePhaseState.GamePhaseType.PENDING:
				if (BoostConfig.instance.IsBoostActive()) {
					desiredMusic = boostMusic; 
				} else {
					desiredMusic = gameMusic;
				}
				break;
			case GamePhaseState.GamePhaseType.REAL_ANGUS:
				desiredMusic = realAngusMusic;
				break;
			case GamePhaseState.GamePhaseType.WELCOME:
				desiredMusic = welcomeMusic;
				break;
			default:
				desiredMusic = menuMusic;
				break;
			}
		}

		if (desiredMusic == currentMusic) {
			// All good.
			return;
		}

		// Stop current, start desired.
		FadeOutMusic(currentMusic);
		currentMusic = null;

		if (desiredMusic) {
			currentMusic = desiredMusic;
			FadeInMusic(currentMusic);
		}
	}

	void FadeOutMusic(AudioSource music) {
		if (music == null) {
			return;
		}

		MusicFader fader = music.GetComponent<MusicFader>();
		fader.FadeOut();
	}

	void FadeInMusic(AudioSource music) {
		if (music == null) {
			return;
		}

		MusicFader fader = music.GetComponent<MusicFader> ();
		fader.FadeIn();
	}
}
