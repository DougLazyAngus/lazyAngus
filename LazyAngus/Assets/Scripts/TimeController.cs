using UnityEngine;
using System.Collections;

public class TimeController : MonoBehaviour {
	public static TimeController instance;

	public delegate void PauseChangedEventHandler();
	public event PauseChangedEventHandler PauseChanged;

	public bool paused {get; private set;}

	void Awake() {
		instance = this;
	}

	public void PauseTime() {
		if (!paused) {
			paused = true;
			Time.timeScale = 0f;
			if (PauseChanged != null) {
				PauseChanged ();
			}
		}
	}

	public void UnPauseTime() {
		if (paused) {
			paused = false;
			Time.timeScale = 1f;
			if (PauseChanged != null) {
				PauseChanged ();
			}
		}
	}
}
