using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LevelEndConfig : MonoBehaviour {
	public Text readyText;

	public void ConfigureForLevel(int gameLevel) {
		readyText.text = "Prepare for Wave " + gameLevel + "!!!";
	}

}
