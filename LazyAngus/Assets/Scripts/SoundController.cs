using UnityEngine;
using System.Collections;

public class SoundController : MonoBehaviour {

	public const string sfxValueName = "sfxMuted";
	public const string musicValueName = "musicMuted";

	public static SoundController instance;
	public bool sfxMuted { get; private set;}
	public bool musicMuted { get; private set;}
	
	public delegate void SoundMuteChangedEventHandler();
	public event SoundMuteChangedEventHandler SoundMuteChanged;
	
	public delegate void MusicMuteChangedEventHandler();
	public event MusicMuteChangedEventHandler MusicMuteChanged;

	
	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
		sfxMuted = PersistentStorage.instance.GetBoolValue (sfxValueName, false);
		musicMuted = PersistentStorage.instance.GetBoolValue (musicValueName, false);
		if (SoundMuteChanged != null) {
			SoundMuteChanged ();
		}
		if (MusicMuteChanged != null) {
			MusicMuteChanged ();
		}
	}

	
	public void ToggleSoundsMuted() {
		sfxMuted = !sfxMuted;
		PersistentStorage.instance.SetBoolValue(sfxValueName, sfxMuted);
		if (SoundMuteChanged != null) {
			SoundMuteChanged ();
		}
	}
	
	public void ToggleMusicMuted() {
		musicMuted = !musicMuted;
		PersistentStorage.instance.SetBoolValue(musicValueName, musicMuted);
		if (MusicMuteChanged != null) {
			MusicMuteChanged ();
		}
	}

	public void SuppressSounds() {
		if (!musicMuted) {
			musicMuted = true;
			if (MusicMuteChanged != null) {
				MusicMuteChanged ();
			}
		}
		if (!sfxMuted) {
			sfxMuted = true;
			if (SoundMuteChanged != null) {
				SoundMuteChanged ();
			}
		}
	}

	public void UnsuppressSounds() {
		if (musicMuted != PersistentStorage.instance.GetBoolValue(musicValueName, false)) {
			musicMuted = PersistentStorage.instance.GetBoolValue(musicValueName, false);
			if (MusicMuteChanged != null) {
				MusicMuteChanged ();
			}
		}
		if (sfxMuted != PersistentStorage.instance.GetBoolValue(sfxValueName, false)) {
			sfxMuted = PersistentStorage.instance.GetBoolValue(sfxValueName, false);
			if (SoundMuteChanged != null) {
				SoundMuteChanged ();
			}
		}
	}
}
