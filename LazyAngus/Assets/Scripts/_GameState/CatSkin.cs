using UnityEngine;
using System.Collections;

public class CatSkin : MonoBehaviour {
	public string currentSkinName = "original";
	public static CatSkin instance;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
