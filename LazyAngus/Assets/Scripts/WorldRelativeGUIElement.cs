using UnityEngine;
using System.Collections;

// GUI Object that somehow cares about position of an object in the world.
// Keep in mind world-object is in world camera/canvas, and GUI object may be 
// some other camera/canvas.
public class WorldRelativeGUIElement : MonoBehaviour {
	Camera worldCamera;

	Canvas parentCanvas;
	Camera parentCamera;

	float parentCanvasWidth;
	float parentCanvasHeight;


	protected void SetParentCanvasGameObject(GameObject parentCanvasGameObject) {
		gameObject.transform.SetParent (parentCanvasGameObject.transform, false);

		parentCanvas = parentCanvasGameObject.GetComponent<Canvas> ();
		parentCamera = parentCanvas.worldCamera;

		Rect pixelRect = parentCanvas.pixelRect;
		parentCanvasWidth = pixelRect.width / parentCanvas.scaleFactor;
		parentCanvasHeight = pixelRect.height / parentCanvas.scaleFactor;
	}

	void GetWorldCamera() {
		// Get the world camera.
		GameObject worldCanvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		// We assume we are using a canvas with "Screen Space - Camera" render mode.
		// Get that camera.
		Canvas worldCanvas = worldCanvasGameObject.GetComponent<Canvas> ();
		worldCamera = worldCanvas.worldCamera;
	}
	  
	protected Vector3 WorldPositionToParentCanvasPosition(Vector3 worldPosition) {
		if (worldCamera == null) {
			GetWorldCamera();
		}

		return ConvertToParentCanvasPosition (worldCamera, worldPosition);
	}

	protected Vector3 ConvertToParentCanvasPosition(Camera otherCamera,
	                                           Vector3 otherCameraPosition) {
		// Other Camera -> Screen.
		Vector3 screenPos = otherCamera.WorldToScreenPoint(otherCameraPosition);
		  
		// Screen -> Parent Canvas Viewport
		Vector3 viewportPos = parentCamera.ScreenToViewportPoint (screenPos);

		// We want to convert that to canvas units, where the rect is 
		// (-canvasWidth/2, -canvasHeight/2) to 
		// (canvasWidth/2, canvasHeight/2);
		float canvasUnitsX = (viewportPos.x - 0.5f) * parentCanvasWidth;
		float canvasUnitsY = (viewportPos.y - 0.5f) * parentCanvasHeight;
		return new Vector3(canvasUnitsX, canvasUnitsY, 0f);
	}
}
 