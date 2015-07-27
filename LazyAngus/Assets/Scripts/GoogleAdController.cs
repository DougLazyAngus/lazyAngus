using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {

	bool registeredForEvents;
	bool interstitialAdLoaded = false;

	public int wavesBetweenInterstitial = 5;

	GoogleMobileAdBanner banner;

	void Awake() {
		GoogleMobileAd.Init ();
		GoogleMobileAd.AddKeyword("game");
		banner = GoogleMobileAd.CreateAdBanner(TextAnchor.LowerCenter,
		                                       GADBannerSize.SMART_BANNER);
		banner.Hide ();
		banner.ShowOnLoad = false;
		Debug.Log ("Banner Hide 01");

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
		// Suspend normal operations.
		TimeController.instance.PauseTime ();
	}

	void OnInterstisialsClosed() {
		interstitialAdLoaded = false;
		GoogleMobileAd.LoadInterstitialAd ();
		// Resume.
		TimeController.instance.UnPauseTime ();
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
		MaybePresentInterstitial ();
	}

	bool MaybePresentInterstitial() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_END) {
			return false;
		}

		if ((GameLevelState.instance.gameLevel % wavesBetweenInterstitial) != 0) {
			return false;
		}

		if (!interstitialAdLoaded) {
			return false;
		}

		GoogleMobileAd.ShowInterstitialAd ();
		return true;
	}

	void UpdateBanner() {
		switch(GamePhaseState.instance.gamePhase) {
		case GamePhaseState.GamePhaseType.WELCOME:
			banner.Hide ();
			break;
		case GamePhaseState.GamePhaseType.GAME_OVER:
			banner.Hide ();
			break;
		default:
			banner.Show();
			banner.Refresh();
			break;
		}	
	}

	public static float GetBannerHeight() {
		// Logic from 
		// https://developers.google.com/admob/android/banner#smart
		float screenHeight = Screen.height;
		Debug.Log ("screenHeight = " + Screen.height);
		Debug.Log ("dpi = " + Screen.dpi);

		if (screenHeight < 400) {
			return 32;
		}
		if (screenHeight <= 720) {
			return 50;
		}
		return 90;
	}
}
