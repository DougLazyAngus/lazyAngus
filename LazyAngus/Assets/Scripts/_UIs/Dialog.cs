using UnityEngine;
using UnityEngine.UI;

using System.Collections;

public class Dialog : MonoBehaviour {
	public void ShowInParent(Transform t) {
		transform.SetParent (t, false);
	}

	public void OnHidden() {
		transform.SetParent (null, false);
		Object.Destroy (gameObject);
	}
}
