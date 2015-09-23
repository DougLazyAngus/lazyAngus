using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TipDialog : Dialog {
	public Text dialogText;
	RectTransform myRectTransform;

	RectTransform textRectTransform;

	float calculatedFudge;

	void Awake() {
		myRectTransform = GetComponent<RectTransform> ();
		textRectTransform = dialogText.GetComponent<RectTransform> ();
		float textHeight = textRectTransform.rect.height;
		float myHeight = myRectTransform.rect.height;
		calculatedFudge = myHeight - textHeight;

	}

	public void CloseDialog() {
		DialogController.instance.HideDialog (this);
	}

	public void ConfigureDialog(string message) {
		dialogText.text = message;
	
		float textHeight = LayoutUtility.GetPreferredHeight(textRectTransform);
		myRectTransform.sizeDelta = new Vector2 (myRectTransform.rect.width, 
		                                         textHeight + calculatedFudge);
	}
}
