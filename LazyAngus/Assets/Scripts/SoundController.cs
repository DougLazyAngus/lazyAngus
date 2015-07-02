using UnityEngine;
using System.Collections;

public class SoundController : MonoBehaviour {

	public static SoundController instance;
	public bool soundMuted { get; private set;}

	public delegate void SoundMuteChangedEventHandler();
	public event SoundMuteChangedEventHandler SoundMuteChanged;

	
	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void ToggleSoundsMuted() {
		soundMuted = !soundMuted;
		if (SoundMuteChanged != null) {
			SoundMuteChanged ();
		}
	}
}
