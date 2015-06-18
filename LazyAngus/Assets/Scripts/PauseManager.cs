using UnityEngine;
using System.Collections;

public class PauseManager : MonoBehaviour {

	public static PauseManager instance;
	public bool isPaused {get; private set;}

	private bool pauseExpected;
	private bool expectedPauseHappened;

	void Awake() {
		instance = this;
		isPaused = false;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	void OnApplicationPaused(bool paused) {
		isPaused = paused;
		if (isPaused && pauseExpected) {
			expectedPauseHappened = true;
		}
	}

	public void ExpectPause() {
		pauseExpected = true;
		expectedPauseHappened = false;
	}

	public bool ConfirmExpectedPause() {
		return expectedPauseHappened;
	}

	public void ClearExpectedPause() {
		pauseExpected = expectedPauseHappened = false;
	}
}
