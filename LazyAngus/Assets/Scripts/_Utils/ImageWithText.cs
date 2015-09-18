using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class ImageWithText : MonoBehaviour {
	public Text text;

	RectTransform myRectTransform;
	RectTransform textRectTransform;

	void Awake() {
		myRectTransform = GetComponent<RectTransform> ();
		textRectTransform = text.GetComponent<RectTransform> ();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	
	public void SetText(string newText) {
		text.text = newText;
		float width = LayoutUtility.GetPreferredWidth (textRectTransform);

		textRectTransform.sizeDelta = new Vector2(width, textRectTransform.rect.height);

		myRectTransform.sizeDelta = new Vector2 (width + textRectTransform.anchoredPosition[0], 
		                                        textRectTransform.rect.height);
	}
}
