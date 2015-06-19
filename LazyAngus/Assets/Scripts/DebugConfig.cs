using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool isDebug;

	public int initialMoney = 100;
	public int initialBoosts = 5;

	public bool debugFBShare = false;
	public bool debugTwitterShare = false;

	public static DebugConfig instance { get; private set; }



	void Awake() {
		instance = this;
	}

	void Start() {
	}


}
