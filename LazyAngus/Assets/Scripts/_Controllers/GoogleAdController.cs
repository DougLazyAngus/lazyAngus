using UnityEngine;
using System;
using System.Collections;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;

public class GoogleAdController : MonoBehaviour {
	public static GoogleAdController instance;

	public int instancesBetweenInterstitialAds = 3;

	public PhaseDelayedEventScheduler phaseDelayedEventScheduler;

	bool registeredForEvents;
	bool adsEnabled = true;

	BannerView bannerView;
	InterstitialAd interstitialAd;

	public string iosBannerViewAdId;
	public string androidBannerViewAdId;
	public string iosInterstitialAdId;
	public string androidInterstitialAdId;

	void Awake() {
		instance = this;
		bannerView = new BannerView (GetBannerAdUnitId(), 
		                                                AdSize.SmartBanner,
		                                                AdPosition.Bottom);
		bannerView.LoadAd (MakeAdRequest());
		bannerView.AdLoaded += OnBannerAdLoaded;
		bannerView.Hide ();

		PrepInterstitialAd ();
	}


	void PrepInterstitialAd() {
		Debug.Log ("Setting up interstitialAd");
		
		interstitialAd = new InterstitialAd (GetInterstitialAdUnitId());
		interstitialAd.AdLoaded += OnInterstitialAdLoaded;
		interstitialAd.AdOpened += OnInterstitialAdOpened;
		interstitialAd.AdClosed += OnInterstitialAdClosed;
		interstitialAd.AdFailedToLoad += OnInterstitialAdFailedToLoad;
		
		interstitialAd.LoadAd (MakeAdRequest ());
	}


	AdRequest MakeAdRequest() {
		AdRequest.Builder builder =
			new AdRequest.Builder();
		builder.AddKeyword("game");
		builder.AddKeyword("cat");
		return builder.Build();
	}

	string GetInterstitialAdUnitId() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			return iosInterstitialAdId;
		} else if (Application.platform == RuntimePlatform.Android) {
			return androidInterstitialAdId;
		} else {
			return "badid";
		}
	}

	string GetBannerAdUnitId() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			return iosBannerViewAdId;
		} else if (Application.platform == RuntimePlatform.Android) {
			return androidBannerViewAdId;
		} else {
			return "badid";
		}
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateBanner ();
	}

	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void OnBannerAdLoaded(object sender, EventArgs args) {
		Debug.Log ("OnBannerAdLoaded");
	}

	void OnInterstitialAdLoaded(object sender, EventArgs args) {
		Debug.Log ("OnInterstitialAdLoaded");
	}

	void OnInterstitialAdOpened(object sender, EventArgs args) {
		Debug.Log ("OnInterstitialAdOpened");
		// Quiet the music.
		SoundController.instance.SuppressSounds ();
	}
	
	void OnInterstitialAdFailedToLoad(object sender, EventArgs args) {
		Debug.Log ("OnInterstitialAdFailedToLoad");
		Debug.Log ("args = " + args);
	}

	void OnInterstitialAdClosed(object sender, EventArgs args) {
		Debug.Log ("OnInterstitialAdClosed");
		SoundController.instance.UnsuppressSounds ();

		// Load another one.
		PrepInterstitialAd ();
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
		UpdateBanner ();
		UpdateInterstialAd ();
	}



	void UpdateInterstialAd() {
		phaseDelayedEventScheduler.OnPhaseChanged (MaybeShowAd);
	}


	bool MaybeShowAd() {
		bool shouldShowAd = ShouldShowInterstitialAd ();
		if (!shouldShowAd) {
			return false;
		}

		PersistentStorage.instance.SetIntValue ("lastInstanceAdShown", 
		                                        GamePhaseState.instance.instancesFinishedThisSession);
		ShowInterstitialAd ();
		return true;
	}

	void ShowInterstitialAd() {
		if (interstitialAd.IsLoaded ()) {
			interstitialAd.Show ();
		}
	}

	bool ShouldShowInterstitialAd() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.GAME_OVER) {
			return false;
		}

		int lastInstanceAdShown = PersistentStorage.instance.GetIntValue ("lastInstanceAdShown",
		                                                                  0);
		if (GamePhaseState.instance.instancesFinishedThisSession < 
		    lastInstanceAdShown + instancesBetweenInterstitialAds) {
			return false;
		}

		if (!interstitialAd.IsLoaded ()) {
			return false;
		}
		
		return true;
	}

	void UpdateBanner() {
		if (!adsEnabled) {
			bannerView.Hide ();
			return;
		}

		switch(GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.LEVEL_PLAY:
		case GamePhaseState.GamePhaseType.PENDING:
			bannerView.Show ();
			break;
		default:
			bannerView.Hide ();
			break;
		}	

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
		case GamePhaseState.GamePhaseType.LEVEL_END:
			Debug.Log("Loading new banner ad");
			bannerView.LoadAd (MakeAdRequest ());
			break;
		}
	}


	public static float GetBannerHeight() {
		// Logic from 
		// https://developers.google.com/admob/android/banner#smart
		float longSide;
		float screenHeight = Screen.height;
		float screenWidth = Screen.width;
		longSide = Mathf.Max (screenHeight, screenWidth);

		if (longSide < 400) {
			return 32;
		}
		if (longSide <= 720) {
			return 50;
		}
		return 90;
	}
	
	public void DebugInterstitialAds() {
		ShowInterstitialAd ();
	}
}
