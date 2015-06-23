using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TrackLevel : MonoBehaviour {
	private Text levelText;
	private bool registerdForEvents;
	
	// Use this for initialization
	void Start () {
		levelText = this.gameObject.GetComponent<Text> ();

		GameController.instance.GameLevelChanged += 
			new GameController.GameLevelChangedEventHandler (SetGameLevelText);
		registerdForEvents = true;
		SetGameLevelText ();
	}
	
	void OnDestroy() {
		if (registerdForEvents) {
			GameController.instance.GameLevelChanged -= 
				new GameController.GameLevelChangedEventHandler (SetGameLevelText);
		}
	}

	void SetGameLevelText() {
		levelText.text = "Wave " + GameController.instance.gameLevel;
	}	
}
