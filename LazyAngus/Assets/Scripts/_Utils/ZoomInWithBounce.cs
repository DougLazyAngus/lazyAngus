using UnityEngine;
using System.Collections;

public class ZoomInWithBounce : BounceLerp {
	public Transform scaler;
	public float delay;
	bool zooming;

	float timeToStartZooming;

	void Awake() {
	}
	
	void Update() {
		if (zooming) {
			UpdateZoom ();
		}
	}

	public void ZoomIn() {
		timeToStartZooming = delay + Time.time;
		zooming = true;
		UpdateZoom ();
	}
	
	void UpdateZoom() {
		float timeDelta = (Time.time - timeToStartZooming);
		float scale;

		if (timeDelta < 0) {
			timeDelta = 0;
		}

		bool isFinished;
		scale = GetCoefficientForTime(timeDelta, out isFinished);
		if (isFinished) {
			zooming = false;
		}

		scaler.localScale = new Vector2 (scale, scale);
	}
}
