using UnityEngine;
using System.Collections;

public class TimeController : MonoBehaviour {
	public enum TimeState {
		PLAYING, 
		PAUSE_FOR_DIALOG,
		COMPLETE_PAUSE,
		NUM_STATES,
	};

	public static TimeController instance;

	public delegate void TimeStateChangedEventHandler();
	public event TimeStateChangedEventHandler TimeStateChanged;

	public TimeState timeState {get; private set;}

	void Awake() {
		instance = this;
	}

	public void SetTimeState(TimeState ts) {
		if (ts != timeState) {
			timeState = ts;
			if (ts == TimeState.PLAYING) {
				Time.timeScale = 1f;
			} else {
				Time.timeScale = 0f;
			}
			if (TimeStateChanged != null) {
				TimeStateChanged ();
			}
		}
	}
}
