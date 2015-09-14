using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using System.Collections;

public class SecretUI : MonoBehaviour {
	public static SecretUI instance;

	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void LaunchShareWidget(int score, bool isHighScore);

	public GameObject inputs;
	public InputField levelInputField;
	public InputField debugFlagsInputField;

	public void ResetPreferences() {
		PersistentStorage.instance.ClearAll ();
	}

	public void ResetAchievements() {
		SocialHelper.instance.ClearAchievements();
	}

	void Awake() {
		instance = this;
	}

	void UpdateInputs() {
		int debugFlags = DebugConfig.instance.GetDebugFlags ();
		debugFlagsInputField.text = "" + debugFlags;
	}

	void Start() {
		levelInputField.onEndEdit.AddListener(delegate{ApplyLevelInput();});
		debugFlagsInputField.onEndEdit.AddListener(delegate{ApplyDebugFlags();});

	}

	void ApplyLevelInput() {
		int suggestedLevel = Utilities.ParseIntWithDefault (levelInputField.text, 0);
		if (suggestedLevel > 0) {
			GameLevelState.instance.SetGameLevel (suggestedLevel);
		}
	}

	public void ToggleVisibility() {
		if (inputs.activeSelf) {
			inputs.SetActive (false);
		} else {
			inputs.SetActive (true);
			UpdateInputs();
		}
	}
	
	void ApplyDebugFlags() {
		int debugFlags = Utilities.ParseIntWithDefault (debugFlagsInputField.text, -1);
		if (debugFlags >= 0) {
			DebugConfig.instance.SetDebugFlags(debugFlags);
		}
	}
	
	public void DebugShowSharing() {
		LaunchShareWidget (100, true);
	}
}