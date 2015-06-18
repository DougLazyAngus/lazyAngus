using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class FacebookSharing : MonoBehaviour {

	public static FacebookSharing instance;
	private int scoreToShare;



	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
		FB.Init (OnInitComplete, OnHideUnity);
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
		if (!FB.IsLoggedIn) {
			scoreToShare = score;
			FB.Login ("publish_actions", LoginCallback);
			return;
		} else {
			ShareScoreInternal (score);
		}
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
