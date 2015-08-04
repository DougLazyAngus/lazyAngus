﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class BoostButtonLayout : MonoBehaviour {
	public float boostButtonYOffset;
	public GameObject boostButtonPrototype;

	private List<BoostButton> boostButtons;
	private GameObject[] boostButtonGameObjects;
  
	private bool treatsTextDirty;
	private bool levelTextDirty;

	bool started = false;
	IEnumerator pendingCreation;

	void Awake() {
		started = false;
		boostButtons = null;
		pendingCreation = null;
	}

	void Start () {
		started = true;
		MaybeCreateButtons ();
	}

	void OnEnable() {
		MaybeCreateButtons ();
	}

	void OnDisable() {
		if (pendingCreation != null) {
			pendingCreation = null;
		}
	}


	void MaybeCreateButtons() {
		if (started && enabled && boostButtons == null && pendingCreation == null) {
			pendingCreation = WaitThenSetup();
			StartCoroutine(pendingCreation);
		}
	}

	IEnumerator WaitThenSetup() {
		Debug.Log ("Hi there");
		yield return new WaitForSeconds(0.001f);
		AddBoostButtons ();
		LayoutBoostButtons ();
		RefreshBoostButtons ();
	}

	void AddBoostButtons() {
		boostButtons = new List<BoostButton> ();
		boostButtonGameObjects = new GameObject[(int)BoostConfig.BoostType.NUM_TYPES];
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			AddBoostButtonForType ((BoostConfig.BoostType)i);
		}
	}

	void AddBoostButtonForType(BoostConfig.BoostType bType) {
		GameObject boostButtonObject = Instantiate(boostButtonPrototype, 
		                                               new Vector3(0, 0, 0),
		                                               Quaternion.identity) as GameObject;
		BoostButton bb = boostButtonObject.GetComponent <BoostButton> ();
		boostButtonObject.transform.SetParent (gameObject.transform, false);

		bb.ConfigureForType (bType);
		boostButtons.Add (bb);

		boostButtonGameObjects [(int)bType] = bb.gameObject;
	}
	
	void LayoutBoostButtons() {
		RectTransform rt = gameObject.GetComponent<RectTransform> ();
		float containingWidth = rt.rect.width;
		Utilities.SpaceHorizontally (containingWidth, 
		                             boostButtonGameObjects, 
		                             boostButtonYOffset);
	}

	void RefreshBoostButtons() {
		foreach (BoostButton bb in boostButtons) {
			bb.RefreshButton ();
		}
	}

	public BoostButton GetButtonForBoost(BoostConfig.BoostType boostType) {
		if (boostType == BoostConfig.BoostType.NUM_TYPES) {
			return null;
		}
		int index = (int)boostType;
		return boostButtons [index];
	}
}
