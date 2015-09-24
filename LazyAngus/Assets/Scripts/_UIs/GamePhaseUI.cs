using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GamePhaseUI : MonoBehaviour {
	public virtual void SetUIActive(bool uiActive) {
		gameObject.SetActive (uiActive);
	}

	public virtual void ConfirmLayoutComplete() {
	}
}
