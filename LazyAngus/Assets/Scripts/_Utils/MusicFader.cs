using UnityEngine;
using System.Collections;

public class MusicFader : MonoBehaviour {
	public float fadeTime = 1;
	AudioSource audioSource;
	InOutTransitioner transitioner;

	void Awake() {
		audioSource = GetComponent<AudioSource> ();
		transitioner = new InOutTransitioner (fadeTime);
		transitioner.useRealTime = true;
		transitioner.Reset (true);
		audioSource.volume = 1.0f;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (transitioner.IsTransitioning()) {
			transitioner.UpdateTransitionFraction();
			audioSource.volume = transitioner.GetFractionIn();

			if (!transitioner.IsTransitioning() && 
			    transitioner.movingIn == false) {
				audioSource.Stop();
			}
		}
	}

	public void FadeIn() {
		transitioner.Transition (true);
		if (!audioSource.isPlaying) {
			audioSource.Play ();
		}
		audioSource.volume = transitioner.GetFractionIn ();
	}

	public void FadeOut() {
		if (!audioSource.isPlaying) {
			transitioner.Reset (false);
		} else {
			transitioner.Transition (false);
			audioSource.volume = transitioner.GetFractionIn ();
		}
	}
}
