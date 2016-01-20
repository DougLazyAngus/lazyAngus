using UnityEngine;
using System.Collections;

public class AndroidScreenHider : MonoBehaviour {
	float startTime = -1;

	void Awake() {
		if (Application.platform != RuntimePlatform.Android) {
			gameObject.SetActive(false);
		}
	}

	// Use this for initialization
	void Start () {
		startTime = Time.time;
	}

	// Update is called once per frame
	void Update () {
		if (Time.time - startTime > 0.1) {
			gameObject.SetActive (false);
		}
	}
}
