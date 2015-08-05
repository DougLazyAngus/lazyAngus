using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class WelcomeUI : GameUI {
	public Image background;

	
	public override void SetUIActive(bool uiActive) {
		Debug.Log ("10.001 " + Time.realtimeSinceStartup);

		if (uiActive == false) {
			background.color = Color.yellow;
		}

		gameObject.SetActive (uiActive);
		Debug.Log ("10.002 " + Time.realtimeSinceStartup);
	}
	
	void OnEnable() {
		Debug.Log ("11.001 " + Time.realtimeSinceStartup);
	}
	
	void OnDisable() {
		Debug.Log ("12.001 " + Time.realtimeSinceStartup);
	}
}
