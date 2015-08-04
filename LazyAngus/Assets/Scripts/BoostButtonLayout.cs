using UnityEngine;
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
	
	void Awake() {
		boostButtons = null;
	}
	
	public void ConfirmLayoutComplete() {
		if (boostButtons == null) {
			Debug.Log("01.001  " + Time.realtimeSinceStartup);
			AddBoostButtons ();
			Debug.Log("01.002  " + Time.realtimeSinceStartup);
			LayoutBoostButtons ();
			Debug.Log("01.003  " + Time.realtimeSinceStartup);
			RefreshBoostButtons ();
			Debug.Log("01.004  " + Time.realtimeSinceStartup);
		}
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
