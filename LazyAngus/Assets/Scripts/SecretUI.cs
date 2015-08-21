using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using System.Collections;

public class SecretUI : MonoBehaviour {
	public static SecretUI instance;

	public GameObject inputs;
	public InputField levelInputField;
	public InputField debugFlagsInputField;

	public void ResetPreferences() {
		PersistentStorage.instance.ClearAll ();
	}

	public void ToggleVisibility() {
		inputs.SetActive(true);
	}

	void Awake() {
		instance = this;
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
		inputs.SetActive (false);
	}

	
	void ApplyDebugFlags() {
		int debugFlags = Utilities.ParseIntWithDefault (debugFlagsInputField.text, -1);
		if (debugFlags >= 0) {
			DebugConfig.instance.debugFlags = debugFlags;
		}
		inputs.SetActive (false);
	}
	
	public void DebugShowSharing() {
		FacebookSharing.instance.ShareScore (100, true);
	}
}