using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class DialogWindow : MonoBehaviour {
	public Text dialogText;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void RemoveSelf() {
		// FIXME(dbanks)
		// Can get more complicated.
		Object.Destroy (this);
	}

	public void Configure(string message, 
	                      Vector2 position) {
		dialogText.text = message;
		RectTransform rt = GetComponent<RectTransform> ();
		rt.anchoredPosition = position;
	}
}
