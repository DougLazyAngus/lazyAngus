using UnityEngine;
using System.Collections;

public class SizeCamera : MonoBehaviour {
	public float minWorldAspectRatio = 800f/600f;
	public float targetWorldHalfHeight = 5f;

	public float screenPixelsTopToIgnore = 0f;
	public float screenPixelsBottomToIgnore = 0f;

	// Use this for initialization
	void Start () {
		float heightInPixels = (float)Screen.height - (screenPixelsTopToIgnore + screenPixelsBottomToIgnore);
		float finalAspectRatio = (float)Screen.width / heightInPixels;

		float worldHalfHeight = targetWorldHalfHeight;
		float worldHalfWidth = finalAspectRatio * worldHalfHeight;

		if (finalAspectRatio < minWorldAspectRatio) {
			// The available rect to render into on screen is narrower than we'd like.
			// Adjust worldHalfHeight  so that resultant width is wide enough.
			worldHalfWidth = minWorldAspectRatio * targetWorldHalfHeight;
			worldHalfHeight = worldHalfWidth / finalAspectRatio;
		}

		// obtain camera component so we can modify its viewport
		Camera camera = GetComponent<Camera>();

		camera.orthographicSize = worldHalfHeight;

		Rect rect = camera.rect;  

		// Camera always goes all the way across....
		float bottomViewport = screenPixelsBottomToIgnore / (float)Screen.height;
		float heightViewport = heightInPixels / (float)Screen.height;

		rect.width = 1.0f;
		rect.height = heightViewport;
		rect.x = 0;
		rect.y = bottomViewport;
		
		camera.rect = rect;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
