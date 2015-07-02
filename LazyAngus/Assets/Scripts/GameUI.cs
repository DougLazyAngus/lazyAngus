using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameUI : MonoBehaviour {
	RectTransform rt;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetUIActive(bool uiActive) {
		gameObject.SetActive (uiActive);
	}
}
