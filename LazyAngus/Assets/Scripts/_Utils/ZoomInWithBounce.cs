using UnityEngine;
using System.Collections;

public class ZoomInWithBounce : MonoBehaviour {
	public Transform scaler;
	public float delay;
	bool zooming;

	float timeToStartZooming;

	
	BounceLerp bounceLerp;
	public float secondsPerPeriod = 0.3f;
	public float totalPeriods = 1f;
	public float additionalScale = 1f;
	public float periodOffsetDeg = 0f;
	public bool looping = false;

	void Awake() {
		bounceLerp = new BounceLerp ();
		bounceLerp.secondsPerPeriod = secondsPerPeriod;
		bounceLerp.totalPeriods = totalPeriods;
		bounceLerp.additionalScale = additionalScale;
		bounceLerp.periodOffsetDeg = periodOffsetDeg;
		bounceLerp.looping = looping;	}
	
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
		scale = bounceLerp.GetCoefficientForTime(timeDelta, out isFinished);
		if (isFinished) {
			zooming = false;
		}

		scaler.localScale = new Vector2 (scale, scale);
	}
}
