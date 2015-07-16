using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class GameCenterButtons : MonoBehaviour {
	public Button leaderBoardButton;
	public Button achievementButton;
	public Button rateMeButton;

	
	void Start() {
		if (!SocialHelper.instance.IsEnabled ()) {
			gameObject.SetActive (false);
			return;
		} else {
			gameObject.SetActive (true);
		}

		leaderBoardButton.onClick.AddListener(() => { 
			SocialHelper.instance.ShowLeaderBoard();
		});

		achievementButton.onClick.AddListener(() => { 
			SocialHelper.instance.ShowAchievements();
		});

		rateMeButton.onClick.AddListener(() => { 
			RatingsHelper.instance.ShowRatingsPage();
		});

	}
}
