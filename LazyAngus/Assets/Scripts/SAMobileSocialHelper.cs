using UnityEngine;
using System.Collections;

public class SAMobileSocialHelper : MonoBehaviour {
	public static SAMobileSocialHelper instance;

	public Texture2D lazyAngusIcon;

	const string TwitterAddress = "http://twitter.com/intent/tweet";
	const string TwitterAppLaunch = "twitter://post";

	const string FBAddress = "http://www.facebook.com/dialog/feed";
	const string FBAppLaunch = "fb://publish/profile/me";
	const string FBAppID = "853535184714876";

	int scoreToShare;

	// Use this for initialization
	void Start () {
		instance = this;
		SPTwitter.instance.Init ();
		FB.Init (OnFBInitComplete);

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ShareScoreOnTwitter(int score) {
		// FIXME(dbanks)
		// Maybe don't need the rest of the functions if this works.
		string message = Utilities.GetShareMessageForScore (score);
		message += " #LazyAngus";
		
		SPShareUtility.TwitterShare(message, lazyAngusIcon);
	}

	private void OnFBInitComplete()
	{
		Debug.Log("FB.Init completed: Is user logged in? " + FB.IsLoggedIn);
	}

	
	public void ShareScoreOnFB(int score, bool isHighScore) {
		ShareScoreOnFBThroughLibraries (score);
	}
	
	public void ShareScoreOnFBThroughLibraries(int score) {
		Debug.Log ("FacebookSharing.ShareScoreThroughLibraries");
		if (!FB.IsLoggedIn) {
			scoreToShare = score;
			Debug.Log ("Calling FB.Login");
			FB.Login ("publish_actions", LoginCallback);
		} else {
			ShareScoreOnFBInternal (score);
		}
	}
	
	private void LoginCallback(FBResult result) {
		Debug.Log ("FacebookSharing.LoginCallback");
		if (FB.IsLoggedIn) {
			ShareScoreOnFBInternal (scoreToShare);
		}
	}
	
	
	private void ShareScoreOnFBInternal(int score) {
		Debug.Log ("FacebookSharing.ShareScoreInternal");
		
		string title = Utilities.GetShareTitleForScore (score);
		string message = Utilities.GetShareMessageForScore (score);
		
		Debug.Log ("title = " + title);
		Debug.Log ("message = " + message);
		
		Debug.Log ("Calling FB.Feed");
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
		         OnFBFeedFinished);
	}
	
	private void OnFBFeedFinished(FBResult result) {
		Debug.Log ("FacebookSharing.OnFeedFinished");
		Debug.Log ("Posted...");
	}


	public void DEPRECATED_ShareScoreOnTwitter(int score) {
		Debug.Log ("TwitterSharing.ShareScore");
		// If twitter authorized, use libraries, else use urls.
		if (SPTwitter.instance.IsAuthed) {
			DEPRECATED_ShareScoreOnTwitterInternal (score);
		} else {
			DEPRECATED_ShareScoreOnTwitterThroughURLs (score);
		}
	}
	
	void DEPRECATED_ShareScoreOnTwitterThroughURLs(int score) {
		Debug.Log ("TwitterSharing.ShareScoreThroughURLs");
		string message = Utilities.GetShareMessageForScore (score);
		
		string webURL = TwitterAddress + "?text=" + WWW.EscapeURL (message) + 
			"&url=" + WWW.EscapeURL (Utilities.appURL) +
				"&hashtags=LazyAngus";
		
		message = message + " " + Utilities.appURL + " #LazyAngus";
		string appURL = TwitterAppLaunch + "?text=" + WWW.EscapeURL (message);
		
		// OK the appURL For twitter doesn't seem to handle '+', maybe it wants 
		// %20?
		appURL = appURL.Replace ("+", "%20");
		
		StartCoroutine (Utilities.LaunchAppOrWeb (appURL, webURL));
	}
	
	void DEPRECATED_ShareScoreOnTwitterInternal(int score) {
		Debug.Log ("TwitterSharing.ShareScoreInternal");
		string message = Utilities.GetShareMessageForScore (score);
		SPTwitter.instance.Post (message, lazyAngusIcon);
	}
	
	public void DEPRECATED_ShareScoreOnFBThroughURLs(int score) {
		string args = "?app_id=" + FBAppID +
			"&link=" + WWW.EscapeURL(Utilities.appURL) +
				"&name=" + WWW.EscapeURL("Lazy Angus") +
				"&caption=" + WWW.EscapeURL(Utilities.GetShareTitleForScore(score)) + 
				"&description=" + WWW.EscapeURL(Utilities.GetShareMessageForScore(score)) + 
				"&picture=" + WWW.EscapeURL(Utilities.appImageURL) + 
				"&redirect_uri=" + WWW.EscapeURL ("http://facebook.com");
		string webURL = FBAddress + args;
		
		args = "?text=" + WWW.EscapeURL (Utilities.GetShareMessageForScore (score)) + 
			"&picture=" + WWW.EscapeURL (Utilities.appImageURL);
		string appURL = FBAppLaunch + args;
		
		Debug.Log ("facebook web url = \n" + webURL);
		Debug.Log ("facebook app url = \n" + appURL);
		
		StartCoroutine(Utilities.LaunchAppOrWeb (appURL, webURL));
	}
}
