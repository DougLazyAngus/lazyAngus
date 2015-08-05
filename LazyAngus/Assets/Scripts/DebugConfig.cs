using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool useDebugValues { get; private set; }
	
	public bool debugFBShare = false;
	public bool debugTwitterShare = false;

	public static DebugConfig instance { get; private set; }

	public int debugFlags = 0;
	
	void Awake() {
		useDebugValues = false;
		instance = this;
		debugFlags = 0;
	}

	void Start() {
	}

	public bool DebugFlagSet(int debugFlag) {
		if (debugFlag < 0 || debugFlag >= 32) {
			return false;
		}

		return (((1 << debugFlag) & debugFlags) != 0);
	}
}
