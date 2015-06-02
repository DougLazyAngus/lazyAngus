﻿using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using System.Collections;

public class SecretUI : MonoBehaviour {
	public InputField inputField;
	public CanvasGroup canvasGroup;
	bool uiIsVisible;

	// Use this for initialization
	void Start () {	
		canvasGroup = gameObject.GetComponent<CanvasGroup> ();
		uiIsVisible = false;
		UpdateVisibility ();
	}

	void UpdateVisibility() {
		if (uiIsVisible) {
			canvasGroup.alpha = 1f;
		} else {
			canvasGroup.alpha = 0f;
		}
	}
	
	// Update is called once per frame
	void Update () {	
		if (!inputField.isFocused && uiIsVisible) {
			uiIsVisible = false;
			UpdateVisibility ();
		} else if (inputField.isFocused && !uiIsVisible) {
			uiIsVisible = true;
			UpdateVisibility ();
		}
	}

	public int GetSuggestedLevel() {
		string text = inputField.text;
		int value;
		if (int.TryParse (text, out value) && value > 0) {
			return value;			
		} else {
			return -1;
		}
	}

	public void ClearSuggestedLevel() {
		inputField.text = "";
	}
}