using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {
	public static GoogleAdController instance;

	public int instancesBetweenInterstitialAds = 3;

	public PhaseDelayedEventScheduler phaseDelayedEventScheduler;

	bool registeredForEvents;
	bool interstitialAdLoaded = false;
	bool adsEnabled = true;

	GoogleMobileAds.Api.BannerView bannerView;
	
	public string bannerViewAdId;

	public GamePhaseState [] acceptableGamePhases;

	
	void Awake() {
		instance = this;
		bannerView = new GoogleMobileAds.Api.BannerView (bannerViewAdId, 
		                                                GoogleMobileAds.Api.AdSize.SmartBanner,
		                                                GoogleMobileAds.Api.AdPosition.Bottom);

		LoadAd ();

		bannerView.Hide ();

	}

	void LoadAd() {
		GoogleMobileAds.Api.AdRequest.Builder builder =
			new GoogleMobileAds.Api.AdRequest.Builder();
		builder.AddKeyword("game");
		builder.AddKeyword("cat");
		GoogleMobileAds.Api.AdRequest request = builder.Build();
		bannerView.LoadAd (request);
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

	void OnInterstisialsLoaded() {
		interstitialAdLoaded = true;
	}

	void OnInterstisialsOpen() {
		// Quiet the music.
		SoundController.instance.SuppressSounds ();
	}

	void OnInterstisialsClosed() {
		interstitialAdLoaded = false;
	// 	GoogleMobileAd.LoadInterstitialAd ();
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
	// 	GoogleMobileAd.ShowInterstitialAd ();
		return true;
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
			LoadAd();
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
