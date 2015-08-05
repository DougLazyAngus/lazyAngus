using UnityEngine;
using System.Collections;

public class FlyingAnimation : WorldRelativeGUIElement {
	RectTransform myRectTransform;

	Vector3[] points;

	float startTime;
	bool running = false;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (!running) {
			return;
		}

		float timeNow = Time.time;
		float timeElapsed = timeNow - startTime;
		if (timeElapsed >= TweakableParams.flyingAnimationTime) {
			Object.Destroy (gameObject);
			return;
		}

		float scaledTime = timeElapsed / TweakableParams.flyingAnimationTime;
		float[] coefficients = Utilities.GetBlendingCoefficients (scaledTime, points.Length);

		Vector3 result = new Vector3 (0, 0, 0);
		for (int i = 0; i < points.Length; i++) {
			result += coefficients[i] * points[i];
		}

		myRectTransform.anchoredPosition3D = result;

		float scale = Mathf.Sin (Mathf.PI * scaledTime);
		scale = TweakableParams.flyingAnimationMinScale + 
			(1 - TweakableParams.flyingAnimationMinScale) * scale;

		myRectTransform.localScale = new Vector3 (scale, scale, 0);
	}

	public void Configure(Vector3 worldStartPosition, 
	                      GameObject canvasTarget) {
		GameObject uxCanvasGameObject = GameObject.FindWithTag ("ScalingUXCanvas");
		SetParentCanvasGameObject (uxCanvasGameObject);

		CreatePoints (worldStartPosition, canvasTarget);

		myRectTransform = GetComponent<RectTransform> ();
		running = false;
	}

	public void Run() {
		startTime = Time.time;
		running = true;
	}

	void CreatePoints(Vector3 worldStartPosition, 
	                  GameObject canvasTarget) {
		points = new Vector3[3];
		
		points [0] = WorldPositionToParentCanvasPosition (worldStartPosition);

		GameObject uxCanvasGameObject = GameObject.FindWithTag ("ScalingUXCanvas");
		Canvas uxCanvas = uxCanvasGameObject.GetComponent<Canvas> ();
		Camera uxCamera = uxCanvas.worldCamera;

		Vector3 otherCanvasPosition =  ConvertToParentCanvasPosition (uxCamera, 
		                                                              canvasTarget.transform.position);

		points [2] = otherCanvasPosition;

		// Some random point between them.
		float coefficient1 = Random.Range (0.1f, 0.4f);
		float coefficient2 = Random.Range (0.1f, 0.4f);
		points [1] = new Vector3 ((1f - coefficient1) * points [0].x + coefficient1 * points [2].x,
		                          (1f - coefficient2) * points [0].y + coefficient2 * points [2].y,
		                          0);
	}
}
