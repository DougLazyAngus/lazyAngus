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
	}
	
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	public void ShareScore(int score) {
		Debug.Log ("TwitterSharing.ShareScore");
		// If twitter authorized, use libraries, else use urls.
		if (SPTwitter.instance.IsAuthed) {
			ShareScoreInternal (score);
		} else {
			ShareScoreThroughURLs (score);
		}
	}

	public void ShareScoreThroughURLs(int score) {
		Debug.Log ("TwitterSharing.ShareScoreThroughURLs");
		string message = Utilities.GetShareMessageForScore (score);

		string webURL = Address + "?text=" + WWW.EscapeURL (message) + 
			"&url=" + WWW.EscapeURL (Utilities.appURL) +
			"&hashtags=LazyAngus";
		
		message = message + " " + Utilities.appURL + " #LazyAngus";
		string appURL = AppLaunch + "?text=" + WWW.EscapeURL (message);
		
		StartCoroutine (Utilities.LaunchAppOrWeb (appURL, webURL));
	}

	private void ShareScoreInternal(int score) {
		Debug.Log ("TwitterSharing.ShareScoreInternal");
		string message = Utilities.GetShareMessageForScore (score);
		SPTwitter.instance.Post (message, lazyAngusIcon);
	}
}
