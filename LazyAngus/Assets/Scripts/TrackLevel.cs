using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TrackLevel : MonoBehaviour {
	private Text levelText;
	private bool registerdForEvents;
	
	// Use this for initialization
	void Start () {
		levelText = this.gameObject.GetComponent<Text> ();

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
		levelText.text = "Wave " + GameLevelState.instance.gameLevel;
	}	
}
