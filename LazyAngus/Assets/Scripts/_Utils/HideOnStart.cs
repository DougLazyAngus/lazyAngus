using UnityEngine;
using System.Collections;

public class HideOnStart : MonoBehaviour {
	bool isActive;
	int count = 0;


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		count += 1;
		if (count > 10) {
			gameObject.SetActive (false);
		}
	}
}
