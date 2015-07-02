using UnityEngine;
using System.Collections;

public class MusicPlayer : MonoBehaviour {

	bool registeredForEvents;
	

	public AudioSource gameMusic;
	public AudioSource menuMusic;

	AudioSource currentMusic;
	IEnumerator playCuedMusic;
	
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
		GameController.instance.GamePhaseChanged += 
			new GameController.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		SoundController.instance.MusicMuteChanged +=
			new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameController.instance.GamePhaseChanged -= 
				new GameController.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			SoundController.instance.MusicMuteChanged -=
				new SoundController.MusicMuteChangedEventHandler (OnMusicMuteChanged);
		}
	}

	void OnGamePhaseChanged() {
		UpdateAllMusic ();
	}

	void OnMusicMuteChanged() {
		UpdateAllMusic ();
	}
	
	// Update is called once per frame
	void UpdateAllMusic () {
		AudioSource desiredMusic = null;

		if (!SoundController.instance.musicMuted) {
			switch (GameController.instance.gamePhase) {
			case GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY:
			case GameController.GamePhaseType.GAME_PHASE_PENDING:
				desiredMusic = gameMusic;
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
		if (currentMusic != null && currentMusic.isPlaying) {
			currentMusic.Stop ();
		}
		if (playCuedMusic != null) {
			StopCoroutine (playCuedMusic);
			playCuedMusic = null;
		}
		currentMusic = null;

		if (desiredMusic) {
			currentMusic = desiredMusic;
			playCuedMusic = PlayMusic (desiredMusic);
			StartCoroutine (playCuedMusic);
		}

	}


	IEnumerator PlayMusic(AudioSource music) {
		yield return new WaitForSeconds(0.5f);
			playCuedMusic = null;
		if (music == currentMusic) {
			music.Play ();
		}
	}
}
