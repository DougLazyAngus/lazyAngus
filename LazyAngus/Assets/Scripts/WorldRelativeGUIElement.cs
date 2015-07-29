using UnityEngine;
using System.Collections;

public class WorldRelativeGUIElement : MonoBehaviour {
	private Canvas worldCanvas;
	private Camera worldCamera;
	private float canvasWidth;
	private float canvasHeight;

	void Start() {
		GameObject canvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		gameObject.transform.SetParent (canvasGameObject.transform, false);

		// We assume we are using a canvas with "Screen Space - Camera" render mode.
		// Get that camera.
		worldCanvas = canvasGameObject.GetComponent<Canvas> ();
		worldCamera = worldCanvas.worldCamera;

		// Get canvas height and width in 'canvas units'.
		// For some reason you can' just ask the canvas it's units (height & width) you have to 
		// do maths.
		// pixels = canvas units * scale so
		// canvas units = pixels/scale.
		Rect pixelRect = worldCanvas.pixelRect;
		canvasWidth = pixelRect.width / worldCanvas.scaleFactor;
		canvasHeight = pixelRect.height / worldCanvas.scaleFactor;
	}
	  
	Vector3 WorldPositionToCanvasPosition(Vector3 worldPosition) {
		// World to view pos: 0, 0 to 1, 1.
		Vector3 viewPos = worldCamera.WorldToViewportPoint(worldPosition);
		
		// We want to convert that to canvas units, where the rect is 
		// (-canvasWidth/2, -canvasHeight/2) to 
		// (canvasWidth/2, canvasHeight/2);
		float canvasUnitsX = (viewPos.x - 0.5f) * canvasWidth;
		float canvasUnitsY = (viewPos.y - 0.5f) * canvasHeight;
		return new Vector3(canvasUnitsX, canvasUnitsY, 0f);
	}
}
