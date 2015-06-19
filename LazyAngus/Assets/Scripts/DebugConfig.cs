using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool isDebug;
	
	public bool debugFBShare = false;
	public bool debugTwitterShare = false;

	public static DebugConfig instance { get; private set; }



	void Awake() {
		instance = this;
	}

	void Start() {
	}


}
