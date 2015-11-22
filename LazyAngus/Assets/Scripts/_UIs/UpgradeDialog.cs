using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpgradeDialog : Dialog {

	public delegate void UpgradeDialogHandler(bool result);
	UpgradeDialogHandler handler;
	
	public Text upgradeText;
	public Text yesButtonText;
	public Text noButtonText;

	void Start() {
		upgradeText.text = LazyAngusStrings.UPGRADE;
		yesButtonText.text = LazyAngusStrings.UPGRADE_YES;
		noButtonText.text = LazyAngusStrings.UPGRADE_NO;
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
