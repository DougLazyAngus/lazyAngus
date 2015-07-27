using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	public SizeCamera worldCamera;
	public SizeCamera uxCamera;

	public float worldCameraTopMargin = 180f;

	// Use this for initialization
	void Start () {

		uxCamera.screenPixelsBottomToIgnore = 0f;
		uxCamera.screenPixelsTopToIgnore = 0f;
		uxCamera.Configure ();

		worldCamera.screenPixelsTopToIgnore = worldCameraTopMargin;
		worldCamera.screenPixelsBottomToIgnore = GoogleAdController.GetBannerHeight ();
		worldCamera.Configure ();
	}
}
