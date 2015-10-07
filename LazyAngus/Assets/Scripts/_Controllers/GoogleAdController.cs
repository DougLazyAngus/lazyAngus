using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {
	public static GoogleAdController instance;

	public int instancesBetweenInterstitialAds = 3;

	public PhaseDelayedEventScheduler phaseDelayedEventScheduler;

	bool registeredForEvents;
	bool adsEnabled = true;

	GoogleMobileAds.Api.BannerView bannerView;
	GoogleMobileAds.Api.InterstitialAd interstitialAd;

	public string iosBannerViewAdId;
	public string androidBannerViewAdId;
	public string iosInterstitialAdId;
	public string androidInterstitialAdId;

	public GamePhaseState [] acceptableGamePhases;

	bool interstitialAdLoaded;
	
	void Awake() {
		instance = this;
		bannerView = new GoogleMobileAds.Api.BannerView (GetBannerAdUnitId(), 
		                                                GoogleMobileAds.Api.AdSize.SmartBanner,
		                                                GoogleMobileAds.Api.AdPosition.Bottom);
		bannerView.LoadAd (MakeAdRequest());
		bannerView.Hide ();

		interstitialAd = new GoogleMobileAds.Api.InterstitialAd (s ());
		interstitialAd.AdLoaded += OnInterstitialAdLoaded;
		interstitialAd.AdOpened += OnInterstitialAdOpened;
		interstitialAd.AdClosed += OnInterstitialAdClosed;

		interstitialAd.LoadAd (MakeAdRequest ());
	}


	GoogleMobileAds.Api.AdRequest MakeAdRequest() {
		GoogleMobileAds.Api.AdRequest.Builder builder =
			new GoogleMobileAds.Api.AdRequest.Builder();
		builder.AddKeyword("game");
		builder.AddKeyword("cat");
		return builder.Build();
	}

	string GetIniterstitialAdUnitId() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			return iosBannerViewAdId;
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

	void OnBannerAdLoaded() {
		SFXPlayer.instance.Play (SFXPlayer.SFXType.EARN_MONEY);
	}

	void OnBannerAdFailedLoading() {
		SFXPlayer.instance.Play (SFXPlayer.SFXType.CAMERA);
	}

	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void OnInterstitialAdLoaded() {
		interstitialAdLoaded = true;
	}

	void OnInterstitialAdOpened() {
		// Quiet the music.
		SoundController.instance.SuppressSounds ();
	}

	void OnInterstitialAdClosed() {
		interstitialAdLoaded = false;
		SoundController.instance.UnsuppressSounds ();

		// Load another one.
		interstitialAd.LoadAd (MakeAdRequest ());
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
		interstitialAd.Show ();
	}

	bool ShouldShowInterstitialAd() {
		int lastInstanceAdShown = PersistentStorage.instance.GetIntValue ("lastInstanceAdShown",
		                                                                  0);
		if (GamePhaseState.instance.instancesFinishedThisSession < 
		    lastInstanceAdShown + instancesBetweenInterstitialAds) {
			return false;
		}

		if (!interstitialAdLoaded) {
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
}
