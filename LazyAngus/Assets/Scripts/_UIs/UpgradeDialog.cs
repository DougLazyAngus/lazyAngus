using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpgradeDialog : Dialog {

	public delegate void UpgradeDialogHandler(bool result);
	UpgradeDialogHandler handler;
	
	
	void Start() {
	}
	
	public void SetHandler(UpgradeDialogHandler handler) {
		this.handler = handler;
	}
	
	public void BuyIt() {
		DialogController.instance.HideDialog (this);
		
		if (handler != null) {
			handler (true);
		}
	}

	public void NoThanks() {
		DialogController.instance.HideDialog (this);
		
		if (handler != null) {
			handler (false);
		}
	}
}
