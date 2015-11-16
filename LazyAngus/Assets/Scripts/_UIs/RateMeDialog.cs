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


	void Start() {
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
