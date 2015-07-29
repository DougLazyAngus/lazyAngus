using UnityEngine;
using System.Collections;

public class FlyingAnimation : MonoBehaviour {
	public float flyingTime = 0.5;

	Canvas worldCanvas;
	Camera worldCamera;
	float canvasWidth;
	float canvasHeight;

	RectTransform myRectTransform;

	Vector3[] points;

	float startTime;
	bool running = false;

	// Use this for initialization
	void Start () {
		myRectTransform = GetComponent<RectTransform> ();
		running = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (!running) {
			return;
		}

		float timeNow = Time.time;
		float timeElapsed = timeNow - startTime;
		if (timeElapsed >= flyingTime) {
			Object.Destroy (this);
			return;
		}

		float scaledTime = timeElapsed / flyingTime;
		float[] coefficients = Utilities.GetBlendingCoefficients (scaledTime, points.Length);
		
	}

	public void Configure(Vector3 worldStartPosition, 
	               GameObject canvasTarget) {
		GameObject canvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		gameObject.transform.SetParent (canvasGameObject.transform, false);
		
		// We assume we are using a canvas with "Screen Space - Camera" render mode.
		// Get that camera.
		worldCanvas = canvasGameObject.GetComponent<Canvas> ();
		worldCamera = worldCanvas.worldCamera;

		Rect pixelRect = worldCanvas.pixelRect;
		canvasWidth = pixelRect.width / worldCanvas.scaleFactor;
		canvasHeight = pixelRect.height / worldCanvas.scaleFactor;

		// World to view pos: 0, 0 to 1, 1.
		Vector3 viewPos = worldCamera.WorldToViewportPoint(worldStartPosition);
		
		// We want to convert that to canvas units, where the rect is 
		// (-canvasWidth/2, -canvasHeight/2) to 
		// (canvasWidth/2, canvasHeight/2);
		float canvasUnitsX = (viewPos.x - 0.5f) * canvasWidth;
		float canvasUnitsY = (viewPos.y - 0.5f) * canvasHeight;
		myRectTransform.localPosition = new Vector3(canvasUnitsX, canvasUnitsY, 0f) + offset;
	}

	public void Run() {
		startTime = Time.time;
		running = true;
	}
}
