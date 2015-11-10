using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class GameCenterButtons : MonoBehaviour {
	public Button leaderBoardButton;
	public Button achievementButton;
	public Button rateMeButton;
	public Button catFaceButton;

	void Awake() {
	}

	void Start() {
		UpdateButtonAvailability ();
	}

	void UpdateButtonAvailability() {
		GameObject [] buttons;
		 
		if (GameCenterHelper.instance.IsEnabled () || 
		    DebugConfig.instance.IsDebugFlagSet(DebugConfig.DEBUG_UI_FOR_APPLE)) {
			buttons = new GameObject[4];
			buttons[0] = leaderBoardButton.gameObject;
			buttons[1] = achievementButton.gameObject;
			buttons[2] = rateMeButton.gameObject;
			buttons[3] = catFaceButton.gameObject;
			leaderBoardButton.gameObject.SetActive (true);
			achievementButton.gameObject.SetActive (true);
			rateMeButton.gameObject.SetActive (true);
			catFaceButton.gameObject.SetActive (true);
		} else {
			buttons = new GameObject[2];
			buttons[0] = rateMeButton.gameObject;
			buttons[1] = catFaceButton.gameObject;

			leaderBoardButton.gameObject.SetActive (false);
			achievementButton.gameObject.SetActive (false);
			rateMeButton.gameObject.SetActive (true);
			catFaceButton.gameObject.SetActive (true);
		}

		Utilities.SpaceHorizontally (Screen.width, buttons, 0);
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
}
