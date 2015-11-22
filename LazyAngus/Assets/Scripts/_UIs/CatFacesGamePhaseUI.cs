﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class CatFacesGamePhaseUI : GamePhaseUI {
	public GameObject catButtonGameObjectPrototype;
	bool registeredForEvents;
	GameObject [] buttonGameObjects;
	bool started;
	public RectTransform buttonParent;

	void Awake() {
		started = false;
	}

	// Use this for initialization
	void Start() {
		started = true;
		RegisterForEvents ();
		CreateButtons();
		RefreshButtonStates (true);		           
	} 

	void OnEnable() {
		if (started) {
			RefreshButtonStates (true);		           
		}
	}

	void OnDestroy() {
		UnregisterForEvents ();	
	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		CatSkin.instance.CatSkinChanged += 
			new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			CatSkin.instance.CatSkinChanged -= 
				new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);
		}
	}
	
	void OnCatSkinChanged() {
		RefreshButtonStates (false);
	}

	// Update is called once per frme
	void Update () {
		
	}

	Vector2 GetNthPosition(int n) {
		float h = buttonParent.rect.height;

		int numButtons = (int)CatSkin.CatFaceType.NUM_TYPES;
		float colHeight = h / numButtons;

		// Offset from middle of screen, first element at top.
		float yPos = 0.5f * h - (0.5f + n) * colHeight;
		float xPos = 0;
		return new Vector2 (xPos, yPos);
	}

	void CreateButtons() {
		int numButtons = (int)CatSkin.CatFaceType.NUM_TYPES;
		buttonGameObjects = new GameObject[numButtons];
		for (int i =  0; i < numButtons; i++) {
			// Create.
			GameObject go = Instantiate (catButtonGameObjectPrototype) as GameObject;
			buttonGameObjects [i] = go;

			// Configure
			Image image = go.GetComponent<Image> ();
			image.sprite = CatSkin.instance.GetButtonSpriteForSkin ((CatSkin.CatFaceType)i);
			CatFaceButton cfb = go.GetComponent<CatFaceButton>();
			cfb.SetCatFaceType((CatSkin.CatFaceType)i);

			// Parent
			Transform t = go.transform;
			t.SetParent (buttonParent, false);

			// Position
			t.localPosition = GetNthPosition (i);

		}
	}

	void RefreshButtonStates(bool jumpToTransition) {
		for (int i = 0; i < buttonGameObjects.Length; i++) {
			GameObject buttonGameObject = buttonGameObjects [i];
			CatFaceButton cfb = buttonGameObject.GetComponent<CatFaceButton> ();
			cfb.UpdateSelectionState (jumpToTransition);
		}
	}
}