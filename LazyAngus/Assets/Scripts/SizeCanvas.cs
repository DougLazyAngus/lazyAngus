using UnityEngine;
using System.Collections;

public class SizeCanvas : MonoBehaviour {

	// Use this for initialization
	void Start () {
		// Get that camera.
		Canvas canvas = gameObject.GetComponent<Canvas> ();
		Camera camera = canvas.worldCamera;

		// Get canvas height and width in 'canvas units'.
		// For some reason you can' just ask the canvas it's units (height & width) you have to 
		// do maths.
		// pixels = canvas units * scale so
		// canvas units = pixels/scale.
		Rect pixelRect = canvas.pixelRect;
		float scaleFactor = canvas.scaleFactor;

		int foo = 5;
		foo = foo + 3;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
