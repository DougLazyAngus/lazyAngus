using UnityEngine;
using System.Collections;

public class MusicController : MonoBehaviour {

	bool registeredForEvents;
	

	public AudioSource levelPlayMusic;
	public AudioSource levelEndMusic;
	public AudioSource gameOverMusic;
	public AudioSource welcomeMusic;
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
		float pause = 0;

		if (!SoundController.instance.musicMuted) {
			switch (GamePhaseState.instance.gamePhase) {
			case GamePhaseState.GamePhaseType.LEVEL_PLAY:
			case GamePhaseState.GamePhaseType.PENDING:
				if (BoostConfig.instance.IsBoostActive()) {
					desiredMusic = boostMusic; 
				} else {
					desiredMusic = levelPlayMusic;
				}
				break;
			case GamePhaseState.GamePhaseType.REAL_ANGUS:
				desiredMusic = realAngusMusic;
				pause = 1f;
				break;
			case GamePhaseState.GamePhaseType.WELCOME:
				desiredMusic = welcomeMusic;
				break;
			case GamePhaseState.GamePhaseType.GAME_OVER:
				desiredMusic = gameOverMusic;
				pause = 0.7f;
				break;
			case GamePhaseState.GamePhaseType.LEVEL_END:
				desiredMusic = levelEndMusic;
				break;
			default:
				desiredMusic = null;
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
		fader.FadeOut();
	}

	void FadeInMusic(AudioSource music, float pause = 0) {
		if (music == null) {
			return;
		}

		MusicFader fader = music.GetComponent<MusicFader> ();
		fader.FadeIn(pause);
	}
}
