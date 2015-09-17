using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameUI : MonoBehaviour {
	public virtual void SetUIActive(bool uiActive) {
		gameObject.SetActive (uiActive);
	}

	public virtual void ConfirmLayoutComplete() {
	}
}
