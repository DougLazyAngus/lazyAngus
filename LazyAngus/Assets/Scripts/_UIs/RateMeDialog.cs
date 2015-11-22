using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class RateMeDialog : Dialog {
	public enum RateMeResult {
		RATE_ME, 
		LATER, 
		NEVER,
	}

	public delegate void RateMeDialogHandler(RateMeResult result);
	RateMeDialogHandler handler;

	public Text rateMeText;
	public Text okButtonText;
	public Text laterButtonText;
	public Text noThanksButtonText;

	void Start() {
		rateMeText.text = LazyAngusStrings.inst.Str("RATE_ME");
		okButtonText.text = LazyAngusStrings.inst.Str("RATE_ME_OK");
		laterButtonText.text = LazyAngusStrings.inst.Str("RATE_ME_LATER");
		noThanksButtonText.text = LazyAngusStrings.inst.Str("RATE_ME_NO_THANKS");
	}
	
	public void SetHandler(RateMeDialogHandler handler) {
		this.handler = handler;
	}
	
	public void RateThis() {
		DialogController.instance.HideDialog (this);

		if (handler != null) {
			handler (RateMeResult.RATE_ME);
		}
	}

	public void RemindMeLater() {
		DialogController.instance.HideDialog (this);
		
		if (handler != null) {
			handler (RateMeResult.LATER);
		}
	}

	public void NoThanks() {
		DialogController.instance.HideDialog (this);
		
		if (handler != null) {
			handler (RateMeResult.NEVER);
		}
	}
}
