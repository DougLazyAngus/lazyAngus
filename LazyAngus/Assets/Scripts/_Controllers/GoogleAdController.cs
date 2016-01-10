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
		Debug.Log ("DBANKS: GoogleAdController 01");
		instance = this;
		Debug.Log ("DBANKS: GoogleAdController 02");
		bannerView = new BannerView (GetBannerAdUnitId(), 
		                                                AdSize.SmartBanner,
		                                                AdPosition.Bottom);
		Debug.Log ("DBANKS: GoogleAdController 03");
		bannerView.LoadAd (MakeAdRequest());
		Debug.Log ("DBANKS: GoogleAdController 04");
		bannerView.AdLoaded += OnBannerAdLoaded;
		Debug.Log ("DBANKS: GoogleAdController 05");
		bannerView.Hide ();

		Debug.Log ("DBANKS: GoogleAdController 06");
		PrepInterstitialAd ();
		Debug.Log ("DBANKS: GoogleAdController 07");
	}


	void PrepInterstitialAd() {
		Debug.Log ("DBANKS: GoogleAdController 08");
		if (Debug.isDebugBuild) {
			Debug.Log ("Setting up interstitialAd");
		}

		Debug.Log ("DBANKS: GoogleAdController 09");
		interstitialAd = new InterstitialAd (GetInterstitialAdUnitId());
		Debug.Log ("DBANKS: GoogleAdController 10");
		interstitialAd.AdLoaded += OnInterstitialAdLoaded;
		interstitialAd.AdOpened += OnInterstitialAdOpened;
		interstitialAd.AdClosed += OnInterstitialAdClosed;
		Debug.Log ("DBANKS: GoogleAdController 11");
		interstitialAd.AdFailedToLoad += OnInterstitialAdFailedToLoad;
		
		Debug.Log ("DBANKS: GoogleAdController 12");
		interstitialAd.LoadAd (MakeAdRequest ());
		Debug.Log ("DBANKS: GoogleAdController 13");
	}


	AdRequest MakeAdRequest() {
		AdRequest.Builder builder =
			new AdRequest.Builder();
		builder.AddKeyword("game");
		builder.AddKeyword("cat");
		builder.TagForChildDirectedTreatment (true);
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
		UpdateAdsAvailability ();
	}

	void UpdateAdsAvailability() {
		if (StoreController.instance.IsUpgradePurchased ()) {
			adsEnabled = false;
		}
	}

	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void OnBannerAdLoaded(object sender, EventArgs args) {
		if (Debug.isDebugBuild) {
			Debug.Log ("OnBannerAdLoaded");
		}
	}

	void OnInterstitialAdLoaded(object sender, EventArgs args) {
		if (Debug.isDebugBuild) {
			Debug.Log ("OnInterstitialAdLoaded");
		}
	}

	void OnInterstitialAdOpened(object sender, EventArgs args) {
		if (Debug.isDebugBuild) {
			Debug.Log ("OnInterstitialAdOpened");
		}
		// Quiet the music.
		SoundController.instance.SuppressSounds ();
	}
	
	void OnInterstitialAdFailedToLoad(object sender, EventArgs args) {
		if (Debug.isDebugBuild) {
			Debug.Log ("OnInterstitialAdFailedToLoad");
			Debug.Log ("args = " + args);
		}
	}

	void OnInterstitialAdClosed(object sender, EventArgs args) {
		if (Debug.isDebugBuild) {
			Debug.Log ("OnInterstitialAdClosed");
		}
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
		StoreController.instance.StoreChanged +=
			new StoreController.StoreChangedHandler (OnStoreChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			StoreController.instance.StoreChanged +=
				new StoreController.StoreChangedHandler (OnStoreChanged);
		}
	}

	void OnGamePhaseChanged() {
		UpdateBanner ();
		UpdateInterstialAd ();
	}

	void OnStoreChanged() {
		UpdateAdsAvailability ();
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
		if (!adsEnabled) {
			return;
		}

		if (interstitialAd.IsLoaded ()) {
			interstitialAd.Show ();
		}
	}

	bool ShouldShowInterstitialAd() {
		if (!adsEnabled) {
			return false;
		}

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
			if (!DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_HIDE_ADS)) {
				bannerView.Show ();
			}
			break;
		default:
			bannerView.Hide ();
			break;
		}	

		switch (GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
		case GamePhaseState.GamePhaseType.LEVEL_END:
			if (Debug.isDebugBuild) {
				Debug.Log("Loading new banner ad");
			}
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
