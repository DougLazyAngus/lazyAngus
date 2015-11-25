using UnityEngine;
using System.Collections;

public class DistortForEffect : MonoBehaviour {
	public delegate void DistortFinishedHandler(GameObject go);
	DistortFinishedHandler handler;

	public bool distorting { get; private set;}
	float startDistortTime;
	
	private Vector3 originalScale;
	public float minScale =  0.0f;
	public Transform thingToScale;

	public bool squishAndStretch = false;
	public bool onAtStart = false;

	BounceLerp bounceLerp;
	public float secondsPerPeriod = 0.3f;
	public float totalPeriods = 1f;
	public float additionalScale = 1f;
	public float periodOffsetDeg = 0f;
	public bool looping = false;


	void Awake() {
		distorting = onAtStart;
		bounceLerp = new BounceLerp ();
		bounceLerp.secondsPerPeriod = secondsPerPeriod;
		bounceLerp.totalPeriods = totalPeriods;
		bounceLerp.additionalScale = additionalScale;
		bounceLerp.periodOffsetDeg = periodOffsetDeg;
		bounceLerp.looping = looping;
	}

	// Use this for initialization
	void Start () {
		if (thingToScale == null) {
			thingToScale = gameObject.transform;
		}

		originalScale = thingToScale.localScale;
	}
	
	public void DistortWithDelay(float delay) {
		if (distorting) {
			return;
		}
		startDistortTime = Time.realtimeSinceStartup + delay;
		distorting = true;
	}

	public void SetDistortFinishedHandler(DistortFinishedHandler handler) {
		this.handler = handler;
	}

	public void Distort() {
		DistortWithDelay (0f);
	}
	
	public void Cancel() {
		distorting = false;
		thingToScale.localScale = originalScale;
	}

	// Update is called once per frame
	void Update () {
		if (!distorting || Time.realtimeSinceStartup < startDistortTime) {  
			return;
		}

		float timeNow = Time.realtimeSinceStartup;
		float timeDelta = timeNow - startDistortTime;

		bool isFinished;
		float scale = bounceLerp.GetCoefficientForTime (timeDelta, out isFinished);
		if (isFinished) {
			distorting = false;
			if (handler != null) {
				handler(gameObject);
			}
		}

		if (minScale > 0) {
			scale = Mathf.Max (minScale, scale);
		}

		float xScale;
		if (squishAndStretch) {
			xScale = 1/scale;
		} else {
			xScale = scale;
		}

		thingToScale.localScale = new Vector3 (xScale * originalScale.x,
		                                       scale * originalScale.y,
		                                       scale * originalScale.z);
	}
}
