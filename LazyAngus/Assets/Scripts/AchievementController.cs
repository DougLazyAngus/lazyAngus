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
		GamePhaseState.instance.GameInstanceChanged += 
			new GamePhaseState.GameInstanceChangedEventHandler(OnGameInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameLevelState.instance.GameLevelChanged -= 
				new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
			GamePhaseState.instance.GameInstanceChanged -= 
				new GamePhaseState.GameInstanceChangedEventHandler(OnGameInstanceChanged);
		}
	}

	void OnGameInstanceChanged() {
		if (DebugConfig.instance.clearAchievements) {
			SocialHelper.instance.ClearAchievements();
		}
	}

	void OnGameLevelChanged() {
		LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
		if (ld.previousLevelClearedAchievementID != null) {
			SocialHelper.instance.RecordAchievement (ld.previousLevelClearedAchievementID);
		}
	}
}
