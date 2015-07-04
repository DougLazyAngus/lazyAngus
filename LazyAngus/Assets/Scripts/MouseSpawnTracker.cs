using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MouseSpawnTracker : MonoBehaviour {
	bool registeredForEvents;
	public Slider slider;
	private int miceThisLevel;

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateLevelConfig ();
		UpdateSlider ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		MouseSpawnFromData.instance.MouseSpawn += 
			new MouseSpawnFromData.MouseSpawnEventHandler (OnMouseSpawned);
		GameController.instance.GameLevelChanged +=
			new GameController.GameLevelChangedEventHandler (OnLevelChanged);
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			MouseSpawnFromData.instance.MouseSpawn -=
				new MouseSpawnFromData.MouseSpawnEventHandler (OnMouseSpawned);
			GameController.instance.GameLevelChanged -=
				new GameController.GameLevelChangedEventHandler (OnLevelChanged);
		}
	}

	void OnLevelChanged() {
		UpdateLevelConfig ();
		UpdateSlider ();
	}

	void OnMouseSpawned() {
		UpdateSlider ();
	}

	void UpdateLevelConfig() {
		int gameLevel = GameController.instance.gameLevel;
		if (gameLevel > 0) {
			LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
			miceThisLevel = ld.explicitMouseDesc.Count;
		} else { 
			miceThisLevel = 1;
		}
	}

	void UpdateSlider() {
		float fractionFinished = (float)MouseSpawnFromData.instance.miceSpawned / (float)miceThisLevel;
		slider.value = fractionFinished;
	}
}
