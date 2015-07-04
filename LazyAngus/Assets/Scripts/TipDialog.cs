using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TipDialog : MonoBehaviour {
	public Text dialogText;

	public void CloseDialog() {
		DialogController.instance.HideDialog (gameObject);
	}

	public void ConfigureDialog(string message, 
	                            Vector2 position) {
		dialogText.text = message;
		RectTransform rt = GetComponent<RectTransform> ();
		rt.anchoredPosition = position;
	}
}
