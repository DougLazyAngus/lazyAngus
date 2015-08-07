using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {
	public static GoogleAdController instance;

	public int instancesBetweenInterstitialAds = 3;
	public float waitBeforeAd = 2f;

	IEnumerator pendingInterstitialAd;

	bool registeredForEvents;
	bool interstitialAdLoaded = false;
	bool adsEnabled = true;

	GoogleMobileAdBanner banner;
	
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
		if (DebugConfig.instance.DebugFlagSet (5)) {
			return;
		}
		UpdateBanner ();
		UpdateInterstialAd ();
	}

	void UpdateInterstialAd() {
		if (pendingInterstitialAd != null) {
			StopCoroutine (pendingInterstitialAd);
			pendingInterstitialAd = null;
		}

		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			pendingInterstitialAd = CreatePendingInterstitialAd();
			StartCoroutine(pendingInterstitialAd);
		}
	}

	IEnumerator CreatePendingInterstitialAd() {
		yield return new WaitForSeconds(waitBeforeAd);
		pendingInterstitialAd = null;
		TryToShowInterstitialAd ();
	}


	void TryToShowInterstitialAd() {
		bool shouldShowAd = ShouldShowInterstitialAd ();
		if (!shouldShowAd) {
			return;
		}

		GoogleMobileAd.ShowInterstitialAd ();
	}

	bool ShouldShowInterstitialAd() {
		if (GamePhaseState.instance.instancesFinishedThisSession % instancesBetweenInterstitialAds != 0) {
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
