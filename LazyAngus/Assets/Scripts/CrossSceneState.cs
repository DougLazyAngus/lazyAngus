using UnityEngine;
using System.Collections;

public class CrossSceneState : MonoBehaviour {
	public bool didWelcome;

	void Awake() {
		DontDestroyOnLoad (this.gameObject);
		didWelcome = false;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
