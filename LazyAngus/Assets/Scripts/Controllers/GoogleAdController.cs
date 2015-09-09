using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {
	public static GoogleAdController instance;

	public int instancesBetweenInterstitialAds = 3;

	public PhaseDelayedEventScheduler phaseDelayedEventScheduler;

	bool registeredForEvents;
	bool interstitialAdLoaded = false;
	bool adsEnabled = true;

	GoogleMobileAdBanner banner;

	public GamePhaseState [] acceptableGamePhases;

	
	void Awake() {
		instance = this;

		GoogleMobileAd.Init ();
		GoogleMobileAd.AddKeyword("game");
		banner = GoogleMobileAd.CreateAdBanner(TextAnchor.LowerCenter,
		                                       GADBannerSize.SMART_BANNER);
		banner.Hide ();
		banner.ShowOnLoad = false;

		GoogleMobileAd.OnInterstitialLoaded += OnInterstisialsLoaded;
		GoogleMobileAd.OnInterstitialOpened += OnInterstisialsOpen;
		GoogleMobileAd.OnInterstitialClosed += OnInterstisialsClosed;

		GoogleMobileAd.LoadInterstitialAd ();
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateBanner ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void OnInterstisialsLoaded() {
		interstitialAdLoaded = true;
	}

	void OnInterstisialsOpen() {
		// Quiet the music.
		SoundController.instance.SuppressSounds ();
	}

	void OnInterstisialsClosed() {
		interstitialAdLoaded = false;
		GoogleMobileAd.LoadInterstitialAd ();
		SoundController.instance.UnsuppressSounds ();
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
		GoogleMobileAd.ShowInterstitialAd ();
		return true;
	}

	bool ShouldShowInterstitialAd() {
		int lastInstanceAdShown = PersistentStorage.instance.GetIntValue ("lastInstanceAdShown", 0);
		if (GamePhaseState.instance.instancesFinishedThisSession < lastInstanceAdShown + instancesBetweenInterstitialAds) {
			return false;
		}

		if (!interstitialAdLoaded) {
			return false;
		}
		
		return true;
	}

	void UpdateBanner() {
		if (!adsEnabled) {
			banner.Hide ();
			return;
		}

		switch(GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
			banner.Hide ();
			break;
		case GamePhaseState.GamePhaseType.GAME_OVER:
			banner.Hide ();
			break;
		case GamePhaseState.GamePhaseType.LEVEL_END:
			banner.Hide ();
			break;
		default:
			banner.Show ();
			banner.Refresh ();
			break;
		}	
	}


	public static float GetBannerHeight() {
		// Logic from 
		// https://developers.google.com/admob/android/banner#smart
		float screenHeight = Screen.height;

		if (screenHeight < 400) {
			return 32;
		}
		if (screenHeight <= 720) {
			return 50;
		}
		return 90;
	}
}
