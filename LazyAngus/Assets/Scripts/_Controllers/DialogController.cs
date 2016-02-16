using UnityEngine;
using System.Collections;

public class DialogController : MonoBehaviour {
	public static DialogController instance;

	Dialog activeDialog;

	void Awake() {
		instance = this;
	}
		
	public void ShowDialog(Dialog dialog) {
		activeDialog = dialog;

		activeDialog.ShowInParent (PausedOverlay.instance.transform);
		PausedOverlay.instance.PausedOverlayTouched += OnPausedOverlayTouched;

		TimeController.instance.SetTimeState (TimeController.TimeState.PAUSE_FOR_DIALOG);
	}

	public void HideAnyDialog() {
		if (activeDialog) {
			HideDialog (activeDialog);
		}
	}

	public void HideDialog(Dialog dialog) {
		if (dialog != activeDialog) {
			return;
		}
		activeDialog.OnHidden ();
		activeDialog = null;
		PausedOverlay.instance.PausedOverlayTouched -= OnPausedOverlayTouched;

		TimeController.instance.SetTimeState (TimeController.TimeState.PLAYING);
	}

	void OnPausedOverlayTouched() {
		HideDialog (activeDialog);
	}

	public bool IsDialogShowing() {
		return (activeDialog != null);
	}
}
