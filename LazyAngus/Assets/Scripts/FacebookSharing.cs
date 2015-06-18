using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class FacebookSharing : MonoBehaviour {

	public static FacebookSharing instance;
	private int scoreToShare;

	const string Address = "http://www.facebook.com/dialog/feed";
	const string AppID = "853535184714876";
	const string AppLaunch = "fb://publish/profile/me";
	public Texture2D lazyAngusIcon;
	
	void Awake() {
		instance = this;
		FB.Init (OnInitComplete);

	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void OnInitComplete()
	{
 		Debug.Log("FB.Init completed: Is user logged in? " + FB.IsLoggedIn);
	}
	
	private void OnHideUnity(bool isGameShown)
	{
		Debug.Log("Is game showing? " + isGameShown);
	}

	public void ShareScore(int score) {
		if (DebugConfig.instance.useLibrariesForFB) {
			ShareScoreThroughLibraries (score);
		} else {
			ShareScoreThroughURLs (score);
		}
	}

	public void ShareScoreThroughLibraries(int score) {
		if (!FB.IsLoggedIn) {
			scoreToShare = score;
			FB.Login ("publish_actions", LoginCallback);
		} else {
			ShareScoreInternal (score);
		}
	}

	public void ShareScoreThroughURLs(int score) {
		string args = "?app_id=" + AppID +
			"&link=" + WWW.EscapeURL(Utilities.appURL) +
			"&name=" + WWW.EscapeURL("Lazy Angus") +
			"&caption=" + WWW.EscapeURL(Utilities.GetShareTitleForScore(score)) + 
			"&description=" + WWW.EscapeURL(Utilities.GetShareMessageForScore(score)) + 
			"&picture=" + WWW.EscapeURL(Utilities.appImageURL) + 
			"&redirect_uri=" + WWW.EscapeURL ("http://facebook.com");
		string webURL = Address + args;

		args = "?text=" + WWW.EscapeURL (Utilities.GetShareMessageForScore (score)) + 
			"&picture=" + WWW.EscapeURL (Utilities.appImageURL);
		string appURL = AppLaunch + args;

		Debug.Log ("facebook web url = \n" + webURL);
		Debug.Log ("facebook app url = \n" + appURL);

		StartCoroutine(Utilities.LaunchAppOrWeb (appURL, webURL));
	}

	private void LoginCallback(FBResult result) {
		if (FB.IsLoggedIn) {
			ShareScoreInternal (scoreToShare);
		}
	}
		

	private void ShareScoreInternal(int score) {
		string title = Utilities.GetShareTitleForScore (score);
		string message = Utilities.GetShareMessageForScore (score);

		FB.Feed (null, 
		         Utilities.appURL, 
		         "Lazy Angus",
		         title, 
		         message,
		         Utilities.appImageURL, 
		         null, 
		         null, 
		         null, 
		         null, 
		         null, 
		         OnFeedFinished);
	}

  private void OnFeedFinished(FBResult result) {
		Debug.Log ("Posted...");
	}
}
