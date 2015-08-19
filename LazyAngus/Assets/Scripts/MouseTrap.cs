using UnityEngine;
using System.Collections;

public class MouseTrap : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnTrapSprung() {
		// Just die.
		Object.Destroy (gameObject);
	}
}
