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
	  
	protected float WorldSizeToParentCanvasSize(float worldSize) {
		// Kinda ghetto, I don't care...
		Vector3 wp1 = new Vector3(0, 0, 0);
		Vector3 wp2 = new Vector3(0, worldSize, 0);
		Vector3 cp1 = WorldPositionToParentCanvasPosition(wp1);
		Vector3 cp2 = WorldPositionToParentCanvasPosition(wp2);

		return Vector3.Distance (cp1, cp2);
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
		return ConvertViewportPosToParentCanvasPosition(viewportPos);
	}


	protected Vector3 ConvertViewportPosToParentCanvasPosition(Vector3 viewportPos) {
		// We want to convert that to canvas units, where the rect is 
		// (-canvasWidth/2, -canvasHeight/2) to 
		// (canvasWidth/2, canvasHeight/2);
		float canvasUnitsX = (viewportPos.x - 0.5f) * parentCanvasWidth;
		float canvasUnitsY = (viewportPos.y - 0.5f) * parentCanvasHeight;
		return new Vector3(canvasUnitsX, canvasUnitsY, 0f);
	}
}
 