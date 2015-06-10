using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool isDebug;
	public static DebugConfig instance { get; private set; }

	void Awake() {
		instance = this;
	}
}
