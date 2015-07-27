using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class RateMeDialog : MonoBehaviour {
	void Start() {
		RecordShowTime ();
	}

	void RecordShowTime() {
		int launchCount = PersistentStorage.instance.GetIntValue("launchCount", 0);
		float time = Utilities.SecondsSinceEpoch ();


		PersistentStorage.instance.SetIntValue ("rateThisLaunchCount", launchCount);
		PersistentStorage.instance.SetFloatValue ("rateThisTime", time);
	}


	public void RateThis() {
		RatingsHelper.instance.ShowRatingsPage ();

		PersistentStorage.instance.SetBoolValue ("suppressRatingRequests", true);
		DialogController.instance.HideDialog (gameObject);
	}

	public void RemindMeLater() {
		DialogController.instance.HideDialog (gameObject);
	}

	public void NoThanks() {
		PersistentStorage.instance.SetBoolValue ("suppressRatingRequests", true);
		DialogController.instance.HideDialog (gameObject);
	}
}
