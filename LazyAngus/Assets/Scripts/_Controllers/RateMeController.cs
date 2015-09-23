using UnityEngine;
using System.Collections;

public class RateMeController : MonoBehaviour {
	public int initialLaunchFrequency = 3;
	public float minTimeFrequencySec = (60f * 60f) * (1.0f/60.0f);
	public GameObject rateMeDialogPrototype;
	bool registeredForEvents;
	public float yOffset = -50;
	
	public PhaseDelayedEventScheduler phaseDelayedEventScheduler;

	const string persistentStorageKey = "rateMeLaunchFrequency";

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		OnGamePhaseChanged ();
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
		phaseDelayedEventScheduler.OnPhaseChanged (MaybeShowDialog);
	}


	bool MaybeShowDialog() {
		bool shouldShow = GetShouldShowRateMeRightNow ();
		if (!shouldShow) {
			return shouldShow;
		}

		GameObject rateMeDialogGameObject = Instantiate (rateMeDialogPrototype, 
		                                                 new Vector2 (0, yOffset),
		                                                 Quaternion.identity) as GameObject;
		RateMeDialog rmd = rateMeDialogGameObject.GetComponent<RateMeDialog> ();
		rmd.SetHandler (OnDialogResult);

		DialogController.instance.ShowDialog(rmd);
		return true;
	}

	int GetLaunchFrequency() {
		return PersistentStorage.instance.GetIntValue (persistentStorageKey, 
		                                               initialLaunchFrequency);
	}

	void UpdateLaunchFrequency() {
		int lf = GetLaunchFrequency ();
		lf += 1;
		PersistentStorage.instance.SetIntValue (persistentStorageKey, 
		                                       lf);
	}

	bool GetShouldShowRateMeRightNow() {
		if (DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_RATE_ME_DIALOG)) {
			return true;
		}

		bool suppressRatingRequests = PersistentStorage.instance.GetBoolValue ("suppressRatingRequests", false);
		if (suppressRatingRequests) {
			return false;
		}
				
		int currentLaunch = PersistentStorage.instance.GetIntValue ("launchCount", 0);
		int previousShowLaunchCount = PersistentStorage.instance.GetIntValue ("rateThisLaunchCount", 0);
		if (currentLaunch < previousShowLaunchCount + GetLaunchFrequency()) {
			return false;
		}
		
		float currentTime = Utilities.SecondsSinceEpoch ();
		float previousShowTime = PersistentStorage.instance.GetFloatValue ("rateThisTime", 0f);
		if (currentTime < previousShowTime + minTimeFrequencySec) {
			return false;
		}

		return true;
	}

	void OnDialogResult(RateMeDialog.RateMeResult result) {
		switch (result) {
		case RateMeDialog.RateMeResult.RATE_ME:
			RatingsHelper.instance.ShowRatingsPage ();
			break;
		case RateMeDialog.RateMeResult.NEVER:
			PersistentStorage.instance.SetBoolValue ("suppressRatingRequests", true);
			break;
		case RateMeDialog.RateMeResult.LATER:
			UpdateLaunchFrequency();
			break;
		}
	}
}
