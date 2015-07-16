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
		TimeController.instance.PauseTime ();
	}

	public void HideDialog(GameObject dialog) {
		if (dialog != activeDialog) {
			return;
		}
		activeDialog = null;
		TimeController.instance.UnPauseTime ();
	}
	
	public bool IsDialogShowing() {
		return (activeDialog != null);
	}
}
