using UnityEngine;
using System.Collections;

public class CrossSceneState : MonoBehaviour {
	public bool didWelcome;

	public static CrossSceneState instance { get; private set; }

	void Awake() {
		instance = this;
		DontDestroyOnLoad (this.gameObject);
		didWelcome = false;
	}

}
