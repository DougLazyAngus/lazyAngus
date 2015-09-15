using UnityEngine;
using UnityEngine.UI;


using System.Collections;

public class CameraController : MonoBehaviour {

	public SizeCamera worldCamera;
	public SizeCamera uxCamera;
	public CanvasScaler constantUXCanvas;

	public float actualHUDPixelHeight = 180f;
	public float minHUDAspectRatio = 2.5f;

	// Use this for initialization
	void Start () {
		uxCamera.screenPixelsTopCameraSlop = 0f;
		uxCamera.Configure (0);

		float footerHeight = GoogleAdController.GetBannerHeight ();

		float screenHeightPixels = Screen.height;
		float screenWidthPixels = Screen.width;

		// If we had a square world screen, how much would that leave for HUD?
		float leftover = screenHeightPixels - footerHeight - screenWidthPixels;

		// Given screen width, what's the tallest HUD could be?
		float maxHUDPixelHeight = screenWidthPixels / minHUDAspectRatio;

		// Try to use all of leftover space.  But it should be least actualHUDPixelHeight and
		// not more than maxHUDPixelHeight;
		float hudHeight = leftover;
		if (hudHeight < actualHUDPixelHeight) {
			hudHeight = actualHUDPixelHeight;
		}
		if (hudHeight > maxHUDPixelHeight) {
			hudHeight = maxHUDPixelHeight;
		}

		worldCamera.screenPixelsTopCameraSlop = hudHeight;

		constantUXCanvas.scaleFactor = hudHeight / actualHUDPixelHeight;

		worldCamera.Configure (footerHeight);
	}
}
