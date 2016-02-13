using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class GameCenterButtons : MonoBehaviour {
	public Button leaderBoardButton;
	public Button achievementButton;
	public Button rateMeButton;

	public Button catFaceButton;
	public Button noAdsButton;

	bool registeredForEvents;

	public float firstRowOffset = 0;
	public float secondRowOffset = -140;

	void Awake() {
	}

	void Start() {
		UpdateButtonAvailability ();
		RegisterForEvents ();
	}
	void OnDestroy() {
		UnregisterForEvents ();		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		StoreController.instance.StoreChanged += new StoreController.StoreChangedHandler (OnStoreChanged);
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			StoreController.instance.StoreChanged -= new StoreController.StoreChangedHandler (OnStoreChanged);
		}
	}

	void UpdateButtonAvailability() {
		GameObject [] firstRowButtons;
		GameObject [] secondRowButtons;

		if (GameCenterHelper.instance.IsEnabled () || 
		    DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_UI_FOR_APPLE)) {
			leaderBoardButton.gameObject.SetActive (true);
			achievementButton.gameObject.SetActive (true);

			firstRowButtons = new GameObject[3];
			firstRowButtons[0] = leaderBoardButton.gameObject;
			firstRowButtons[1] = achievementButton.gameObject;
			firstRowButtons[2] = rateMeButton.gameObject;
		} else {
			firstRowButtons = new GameObject[1];
			firstRowButtons[0] = rateMeButton.gameObject;

			leaderBoardButton.gameObject.SetActive (false);
			achievementButton.gameObject.SetActive (false);
		}
		rateMeButton.gameObject.SetActive (true);

		if (StoreController.instance.IsUpgradePurchased ()) {
			noAdsButton.gameObject.SetActive (false);

			secondRowButtons = new GameObject[1];
			secondRowButtons[0] = catFaceButton.gameObject;
		} else {
			noAdsButton.gameObject.SetActive (true);
			
			secondRowButtons = new GameObject[2];
			secondRowButtons[0] = catFaceButton.gameObject;
			secondRowButtons[1] = noAdsButton.gameObject;
		}
		catFaceButton.gameObject.SetActive (true);

		Utilities.SpaceHorizontally (Screen.width, firstRowButtons, firstRowOffset);
		Utilities.SpaceHorizontally (Screen.width, secondRowButtons, secondRowOffset);

		// Not working on Android right now.
		noAdsButton.gameObject.SetActive(false);
		catFaceButton.gameObject.SetActive (false);
	}

	public void ShowLeaderboard() {
		GameCenterHelper.instance.ShowLeaderBoard();
	}

	public void ShowRateMe() {
		RatingsHelper.instance.ShowRatingsPage();
	}

	public void ShowAchievements() {		
		GameCenterHelper.instance.ShowAchievements();	
	}

	public void ShowCatFaces() {
		GamePhaseState.instance.TransitionToPhase (GamePhaseState.GamePhaseType.CAT_FACES);
	}

	public void NoAds() {
		Debug.Log ("DOUG BANKS 001");
		StoreController.instance.BuyUpgrade ();
		Debug.Log ("DOUG BANKS 002");
	}

	void OnStoreChanged() {
		UpdateButtonAvailability ();
	}
}
