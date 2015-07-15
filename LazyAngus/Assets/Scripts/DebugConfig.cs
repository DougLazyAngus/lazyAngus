using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool useDebugValues { get; private set; }
	
	public bool debugFBShare = false;
	public bool debugTwitterShare = false;

	public static DebugConfig instance { get; private set; }



	void Awake() {
		useDebugValues = true;
		instance = this;
	}

	void Start() {
	}
}
