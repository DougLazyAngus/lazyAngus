using UnityEngine;
using System.Collections;

public class UISoundManager : MonoBehaviour {
	public static UISoundManager instance;

	public AudioSource buttonClick;
	public bool muted;

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
