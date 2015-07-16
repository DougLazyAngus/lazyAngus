using UnityEngine;
using System.Collections;

public class RateMeController : MonoBehaviour {
	public int launchFrequency = 2;
	public float minTimeFrequencySec = (60f * 60f) * (1.0f/60.0f);
	public GameObject rateMeDialogPrototype;
	public float waitToShow = 3;

	void Start() {
		StartCoroutine (WaitAndShowDialog ());
	}

	IEnumerator WaitAndShowDialog() {
		yield return new WaitForSeconds (waitToShow);
		MaybeShowRateMeDialog ();
	}

	bool MaybeShowRateMeDialog() {
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

		GameObject rateMeDialogGameObject = Instantiate (rateMeDialogPrototype, 
		                                                 new Vector3 (0, 0, 0),
		                                                 Quaternion.identity) as GameObject;

		DialogController.instance.ShowDialog(rateMeDialogGameObject);
		return true;
	}
}
