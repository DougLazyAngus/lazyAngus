using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class TwitterSharing : MonoBehaviour {
	const string Address = "http://twitter.com/intent/tweet";

	public static TwitterSharing instance;
	private int scoreToShare;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	public void ShareScore(int score) {
		string message = Utilities.GetShareMessageForScore (score);

		Application.OpenURL (Address +
		                     "?text=" + WWW.EscapeURL (message) +
		                     "&hashtags=LazyAngus" + 
		                     "&amp;url=" + WWW.EscapeURL (Utilities.appURL)); 
	}
}
