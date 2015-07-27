using UnityEngine;
using System.Collections;

public class GoogleAdController : MonoBehaviour {

	bool registeredForEvents;
	
	GoogleMobileAdBanner banner;

	public AudioSource gameMusic;
	public AudioSource menuMusic;
	
	void Awake() {
		GoogleMobileAd.Init ();
		GoogleMobileAd.AddKeyword("game");
		banner = GoogleMobileAd.CreateAdBanner(TextAnchor.LowerCenter,
		                                       GADBannerSize.BANNER);
		banner.Hide ();
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
}
