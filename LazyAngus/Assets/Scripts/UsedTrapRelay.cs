using UnityEngine;
using System.Collections;

public class UsedTrapRelay : MonoBehaviour {
	public static UsedTrapRelay instance;
	
	public delegate void UsedTrapEventHandler();
	public event UsedTrapEventHandler UsedTrap;
	
	void Awake() {
		instance = this;
	}
	
	// Use this for initialization
	void Start () {	
	}
	
	// Update is called once per frame
	void Update () {	
	}
	
	public void HandleUsedTrap() {
		if (UsedTrap != null) {
			UsedTrap ();
		}
	}
}
