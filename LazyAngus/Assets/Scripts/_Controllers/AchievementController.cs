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
		DeadMouseRelay.instance.MultiKill +=
			new DeadMouseRelay.MultiKillEventHandler (OnMultiKill);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameLevelState.instance.GameLevelChanged -= 
				new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
			DeadMouseRelay.instance.MultiKill -=
				new DeadMouseRelay.MultiKillEventHandler (OnMultiKill);
		}
	}

	void OnMultiKill(int numKilled, Vector3 pawPosition) {
		switch (numKilled) {
		case 2:
			GameCenterHelper.instance.RecordAchievement (
				GameCenterHelper.AchievementID.DOUBLE_KILL);
			break;
		case 3:
			GameCenterHelper.instance.RecordAchievement (
				GameCenterHelper.AchievementID.TRIPLE_KILL);
			break;
		case 4:
			GameCenterHelper.instance.RecordAchievement (
				GameCenterHelper.AchievementID.QUAD_KILL);
			break;
		case 5:
			GameCenterHelper.instance.RecordAchievement (
				GameCenterHelper.AchievementID.ULTRA_KILL);
			break;
		}
	}


	void OnGameLevelChanged() {
		LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
		if (ld.previousLevelClearedAchievementID != GameCenterHelper.AchievementID.NUM_VALUES) {
			GameCenterHelper.instance.RecordAchievement (
				ld.previousLevelClearedAchievementID);
		}
	}
}
