using UnityEngine;
using System.Collections;

public class AchievementController : MonoBehaviour {

	bool registeredForEvents;

	void Awake() {
	}
	
	void Start() {
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
		GameLevelState.instance.GameLevelChanged += 
			new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameLevelState.instance.GameLevelChanged -= 
				new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
		}
	}

	void OnGameLevelChanged() {
		switch (GameLevelState.instance.gameLevel) {
		case 6:
			SocialHelper.instance.RecordAchievement ("Wave5");
			break;
		case 11:
			SocialHelper.instance.RecordAchievement ("Wave10");
			break;
		}
	}
}
