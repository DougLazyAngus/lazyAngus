using UnityEngine;
using System.Collections;

public class DialogController : MonoBehaviour {
	public static DialogController instance;

	GameObject activeDialog;

	void Awake() {
		instance = this;
	}

	public void ShowDialog(GameObject dialog) {
		activeDialog = dialog;

		PausedOverlay.instance.SetChildElement(dialog);
		TimeController.instance.SetTimeState (TimeController.TimeState.PAUSE_FOR_DIALOG);
	}

	public void HideDialog(GameObject dialog) {
		if (dialog != activeDialog) {
			return;
		}
		activeDialog = null;
		TimeController.instance.SetTimeState (TimeController.TimeState.PLAYING);
	}
	
	public bool IsDialogShowing() {
		return (activeDialog != null);
	}
}
