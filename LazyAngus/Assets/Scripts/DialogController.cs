using UnityEngine;
using System.Collections;

public class DialogController : MonoBehaviour {
	public static DialogController instance;

	GameObject activeDialog;

	void Awake() {
		instance = this;
	}

	public void ShowDialog(GameObject dialog) {
		ClearActiveDialog ();

		activeDialog = dialog;

		PausedOverlay.instance.SetChildElement(dialog);

		TimeController.instance.PauseTime ();
	}

	public void HideDialog(GameObject dialog) {
		if (dialog != activeDialog) {
			return;
		}

		ClearActiveDialog ();
		TimeController.instance.UnPauseTime ();
	}

	public void ClearActiveDialog() {
		if (!activeDialog) {
			return;
		}

		PausedOverlay.instance.SetChildElement(null);
		activeDialog = null;
	}

	public bool IsDialogShowing() {
		return (activeDialog != null);
	}
}
