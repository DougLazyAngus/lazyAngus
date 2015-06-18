using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class TwitterSharing : MonoBehaviour {
	const string Address = "http://twitter.com/intent/tweet";
	const string AppLaunch = "twitter://post";

	public static TwitterSharing instance;
	public Texture2D lazyAngusIcon;

	void Awake() {
		instance = this;
		SPTwitter.instance.Init ();
				
		SPTwitter.instance.addEventListener(TwitterEvents.POST_FAILED,  OnPostFailed);
		SPTwitter.instance.addEventListener(TwitterEvents.POST_SUCCEEDED,  OnPost);
		SPTwitter.instance.addEventListener(TwitterEvents.AUTHENTICATION_FAILED, onAuthFailed);
		SPTwitter.instance.addEventListener(TwitterEvents.AUTHENTICATION_SUCCEEDED, onAuthSucceeded);

	}
	
	void OnPostFailed() {
		Debug.Log ("Post failed");
	}
	
	void OnPost() {
		Debug.Log ("Post succeeded");
	}
	
	void onAuthFailed() {
		Debug.Log ("auth failed");
	}
	
	void onAuthSucceeded() {
		Debug.Log ("auth succeeded");
	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	public void ShareScore(int score) {
		if (DebugConfig.instance.useLibrariesForTwitter) {
			ShareScoreThroughLibraries(score);
		} else {
			ShareScoreThroughURLs(score);
		}
	}

	public void ShareScoreThroughURLs(int score) {
		string message = Utilities.GetShareMessageForScore (score);
		Application.OpenURL (AppLaunch + "?message=" + WWW.EscapeURL (message));
		
		string webURL = Address + "?text=" + WWW.EscapeURL (message) + 
			"&url=" + WWW.EscapeURL (Utilities.appURL) +
			"&hashtags=LazyAngus";
		
		message = message + " " + Utilities.appURL + " #LazyAngus";
		string appURL = AppLaunch + "?text=" + WWW.EscapeURL (message);
		
		StartCoroutine (Utilities.LaunchAppOrWeb (appURL, webURL));
	}

	public void ShareScoreThroughLibraries(int score) {
		string message = Utilities.GetShareMessageForScore (score);
		SPTwitter.instance.PostWithAuthCheck (message, lazyAngusIcon);
	}
}
