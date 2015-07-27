using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {

	bool registeredForEvents;
	
	GoogleMobileAdBanner banner;

	void Awake() {
		GoogleMobileAd.Init ();
		GoogleMobileAd.AddKeyword("game");
		banner = GoogleMobileAd.CreateAdBanner(TextAnchor.LowerCenter,
		                                       GADBannerSize.SMART_BANNER);
		banner.Hide ();
		banner.ShowOnLoad = false;
		Debug.Log ("Banner Hide 01");
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateBanner ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
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
