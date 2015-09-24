using UnityEngine;
using System.Collections;

public class MusicFader : MonoBehaviour {
	public float fadeTime = 1;
	AudioSource audioSource;
	InOutTransitioner transitioner;
	IEnumerator pausedFunction;

	public float targetVolume = 1.0f;

	void Awake() {
		audioSource = GetComponent<AudioSource> ();
		transitioner = new InOutTransitioner (fadeTime);
		transitioner.useRealTime = true;
		transitioner.Reset (true);
		audioSource.volume = targetVolume;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (transitioner.IsTransitioning()) {
			transitioner.UpdateTransitionFraction();
			audioSource.volume = targetVolume * transitioner.GetFractionIn();

			if (!transitioner.IsTransitioning() && 
			    transitioner.movingIn == false) {
				audioSource.Stop();
			}
		}
	}

	public void FadeIn(float pause = 0) {
		CleanupPausedFunction ();

		pausedFunction = PauseThenPlay (pause);
		StartCoroutine (pausedFunction);
	}

	IEnumerator PauseThenPlay(float pause) {
		yield return new WaitForSeconds (pause);

		pausedFunction = null;
		transitioner.Transition (true);
		if (!audioSource.isPlaying) {
			audioSource.Play ();
		}
		audioSource.volume = targetVolume * transitioner.GetFractionIn ();
	}

	void CleanupPausedFunction() {
		if (pausedFunction != null) {
			StopCoroutine(pausedFunction);
			pausedFunction = null;
		}
	}

	public void FadeOut() {
		CleanupPausedFunction ();

		if (!audioSource.isPlaying) {
			transitioner.Reset (false);
		} else {
			transitioner.Transition (false);
			audioSource.volume = targetVolume * transitioner.GetFractionIn ();
		}
	}
}
