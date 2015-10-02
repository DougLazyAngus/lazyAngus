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
			GameCenterHelper.instance.RecordAchievement ("DoubleKill");
			break;
		case 3:
			GameCenterHelper.instance.RecordAchievement ("TripleKill");
			break;
		case 4:
			GameCenterHelper.instance.RecordAchievement ("QuadKill");
			break;
		case 5:
			GameCenterHelper.instance.RecordAchievement ("UltraKill");
			break;
		}
	}


	void OnGameLevelChanged() {
		LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
		if (ld.previousLevelClearedAchievementID != null) {
			GameCenterHelper.instance.RecordAchievement (ld.previousLevelClearedAchievementID);
		}
	}
}
