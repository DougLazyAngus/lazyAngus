using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameUI : MonoBehaviour {
	public void SetUIActive(bool uiActive) {
		gameObject.SetActive (uiActive);
	}
}
