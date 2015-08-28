using UnityEngine;
using System.Collections;

public class RateMeController : MonoBehaviour {
	public int launchFrequency = 1;
	public float minTimeFrequencySec = (60f * 60f) * (1.0f/60.0f);
	public GameObject rateMeDialogPrototype;
	public float waitToShow = 3;
	bool registeredForEvents;

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
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
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}

	void OnGamePhaseChanged() {
		// Game end....
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_END) {
			 StartCoroutine(WaitAndShowDialog());
		}
	}


	IEnumerator WaitAndShowDialog() {
		yield return new WaitForSeconds (waitToShow);
		MaybeShowRateMeDialog ();
	}

	bool MaybeShowRateMeDialog() {
		bool suppressRatingRequests = PersistentStorage.instance.GetBoolValue ("suppressRatingRequests", false);
		if (suppressRatingRequests) {
			return false;
		}

		int currentLaunch = PersistentStorage.instance.GetIntValue ("launchCount", 0);
		int previousShowLaunchCount = PersistentStorage.instance.GetIntValue ("rateThisLaunchCount", 0);
		if (currentLaunch < previousShowLaunchCount + launchFrequency) {
			return false;
		}

		float currentTime = Utilities.SecondsSinceEpoch ();
		float previousShowTime = PersistentStorage.instance.GetFloatValue ("rateThisTime", 0f);
		if (currentTime < previousShowTime + minTimeFrequencySec) {
			return false;
		}

		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_END) {
			return false;
		}

		GameObject rateMeDialogGameObject = Instantiate (rateMeDialogPrototype, 
		                                                 new Vector3 (0, 0, 0),
		                                                 Quaternion.identity) as GameObject;

		DialogController.instance.ShowDialog(rateMeDialogGameObject);
		return true;
	}
}
