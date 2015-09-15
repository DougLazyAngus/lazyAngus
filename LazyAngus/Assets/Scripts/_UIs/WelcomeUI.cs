using UnityEngine;
using System.Collections;

public class WelcomeUI : GameUI {

	public ZoomInWithBounce logoZoomer;
	public ZoomInWithBounce buttonsZoomer;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public override void ConfirmLayoutComplete() {
		logoZoomer.ZoomIn ();
		buttonsZoomer.ZoomIn ();
	}
}
