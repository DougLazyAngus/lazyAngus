using UnityEngine;
using System.Collections;

public class RatingsHelper : MonoBehaviour {
	public string iosAppID = "1049415206";
	public string androidPackageName = "com.snackfortgames.lazyangus";
	public static RatingsHelper instance;

	void Awake() {
		instance = this;
	}

	public string GetStorePageURL() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			float iOSVersion = Utilities.GetIOSVersion ();
			if (iOSVersion >= 8f) {
				return "itms-apps://itunes.apple.com/app/id" + iosAppID;
			} else { 
				return "itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?id=" + 
					iosAppID + 
					"&onlyLatestVersion=true&pageNumber=0&sortOrdering=1&type=Purple+Software";
			}
		} else if (Application.platform == RuntimePlatform.Android) {
			return "market://details?id=" + androidPackageName;
		} else {
			return "http://itunes.apple.com/app/id" + iosAppID;
		}
	}

	public void ShowRatingsPage() {
		string rateThisURL = GetStorePageURL ();
		Application.OpenURL (rateThisURL);
	}
}
