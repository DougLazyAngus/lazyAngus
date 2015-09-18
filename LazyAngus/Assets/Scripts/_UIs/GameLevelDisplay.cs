using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameLevelDisplay : MonoBehaviour {
	public ImageWithText levelTextWidthImage;
	private bool registerdForEvents;

	// Use this for initialization
	void Start () {
		GameLevelState.instance.GameLevelChanged += 
			new GameLevelState.GameLevelChangedEventHandler (SetGameLevelText);
		registerdForEvents = true;
		SetGameLevelText ();
	}
	
	void OnDestroy() {
		if (registerdForEvents) {
			GameLevelState.instance.GameLevelChanged -= 
				new GameLevelState.GameLevelChangedEventHandler (SetGameLevelText);
		}
	}

	void SetGameLevelText() {
		levelTextWidthImage.SetText ("" + GameLevelState.instance.gameLevel);
	}	
}
