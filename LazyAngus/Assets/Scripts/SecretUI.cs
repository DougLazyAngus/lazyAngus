using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using System.Collections;

public class SecretUI : MonoBehaviour {
	public static SecretUI instance;

	public GameObject inputs;
	public InputField levelInputField;
	public InputField debugFlagsInputField;

	public void ToggleVisibility() {
		bool newState = !inputs.activeInHierarchy;
		inputs.SetActive(newState);
		if (!newState) {
			ApplyInputs();
		}
	}

	void Awake() {
		instance = this;
	}

	void ApplyInputs() {
		int suggestedLevel = Utilities.ParseIntWithDefault (levelInputField.text, 0);
		if (suggestedLevel > 0) {
			GameLevelState.instance.SetGameLevel (suggestedLevel);
		}

		int debugFlags = Utilities.ParseIntWithDefault (debugFlagsInputField.text, 0);
		if (debugFlags > 0) {
			DebugConfig.instance.debugFlags = debugFlags;
		}
	}
}