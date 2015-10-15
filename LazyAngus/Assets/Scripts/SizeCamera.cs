using UnityEngine;
using System.Collections;

public class SizeCamera : MonoBehaviour {
	public float minWorldAspectRatio = 800f/600f;
	public float targetWorldHalfHeight = 5f;

	public float screenPixelsTopCameraSlop = 0f;

	public delegate void CameraConfiguredHandler();
	public event CameraConfiguredHandler CameraConfigured;

	public float finalActualWorldHalfHeight { get; private set; }

	float phaseStartTime;
	Camera myCamera;
	ZoomCamera myZoomCamera;

	bool registeredForEvents;

	float finalAspectRatio;

	void Awake() {
		finalAspectRatio = 0;
		myCamera = GetComponent<Camera>();
		myZoomCamera = GetComponent<ZoomCamera>();
	}

	void UpdateCameraSize() {
		if (myZoomCamera) {
			myZoomCamera.UpdateCameraSize();
		} else {
			myCamera.orthographicSize = finalActualWorldHalfHeight;
		}
	}

	public float GetAspectRatio() {
		return finalAspectRatio;
	}

	public void Configure(float screenPixelsBottomToIgnore) {
		float focusHeightInPixels = (float)Screen.height - (screenPixelsTopCameraSlop + screenPixelsBottomToIgnore);
		float actualHeightInPixels = (float)Screen.height;

		finalAspectRatio = (float)Screen.width / focusHeightInPixels;
		
		float focusWorldHalfHeight = targetWorldHalfHeight;
		float focusWorldHalfWidth = finalAspectRatio * focusWorldHalfHeight;

		if (finalAspectRatio < minWorldAspectRatio) {
			// The available rect to render into on screen is narrower than we'd like.
			// Adjust worldHalfHeight  so that resultant width is wide enough.
			focusWorldHalfWidth = minWorldAspectRatio * targetWorldHalfHeight;
			focusWorldHalfHeight = focusWorldHalfWidth / finalAspectRatio;
		}

		float pixelsToWorldScale = 2 * focusWorldHalfHeight / focusHeightInPixels;
		float actualWorldHalfHeight = (actualHeightInPixels * pixelsToWorldScale)/2;
		
		finalActualWorldHalfHeight = actualWorldHalfHeight;
		UpdateCameraSize ();

		float pixelsOffset = (screenPixelsTopCameraSlop - screenPixelsBottomToIgnore) / 2;
		float yAdjust = pixelsOffset * pixelsToWorldScale;

		Vector3 newPos = new Vector3 (0, yAdjust, 0);
		newPos = myCamera.transform.TransformVector(newPos);

		myCamera.transform.localPosition = myCamera.transform.localPosition + newPos;

		Rect rect = myCamera.rect;  
		
		// Camera always goes all the way across....
		float heightViewport = actualHeightInPixels / (float)Screen.height;
		
		rect.width = 1f;
		rect.height = heightViewport;
		rect.x = 0;
		rect.y = 0;
		
		myCamera.rect = rect;

		if (CameraConfigured != null) {
			CameraConfigured ();
		}
	}
}
