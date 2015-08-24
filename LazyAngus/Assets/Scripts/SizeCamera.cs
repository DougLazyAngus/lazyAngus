using UnityEngine;
using System.Collections;

public class SizeCamera : MonoBehaviour {
	public float minWorldAspectRatio = 800f/600f;
	public float targetWorldHalfHeight = 5f;

	public float screenPixelsTopToIgnore = 0f;
	public float screenPixelsBottomToIgnore = 0f;

	public delegate void CameraConfiguredHandler();
	public event CameraConfiguredHandler CameraConfigured;

	public float finalWorldHalfHeight;	
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
			myCamera.orthographicSize = finalWorldHalfHeight;
		}
	}

	public float GetAspectRatio() {
		return finalAspectRatio;
	}

	public void Configure() {
		float heightInPixels = (float)Screen.height - (screenPixelsTopToIgnore + screenPixelsBottomToIgnore);
		finalAspectRatio = (float)Screen.width / heightInPixels;
		
		float worldHalfHeight = targetWorldHalfHeight;
		float worldHalfWidth = finalAspectRatio * worldHalfHeight;
		
		if (finalAspectRatio < minWorldAspectRatio) {
			// The available rect to render into on screen is narrower than we'd like.
			// Adjust worldHalfHeight  so that resultant width is wide enough.
			worldHalfWidth = minWorldAspectRatio * targetWorldHalfHeight;
			worldHalfHeight = worldHalfWidth / finalAspectRatio;
		}
		
		finalWorldHalfHeight = worldHalfHeight;
		UpdateCameraSize ();

		Rect rect = myCamera.rect;  
		
		// Camera always goes all the way across....
		float bottomViewport = screenPixelsBottomToIgnore / (float)Screen.height;
		float heightViewport = heightInPixels / (float)Screen.height;
		
		rect.width = 1f;
		rect.height = heightViewport;
		rect.x = 0;
		rect.y = bottomViewport;
		
		myCamera.rect = rect;

		if (CameraConfigured != null) {
			CameraConfigured ();
		}
	}
}
