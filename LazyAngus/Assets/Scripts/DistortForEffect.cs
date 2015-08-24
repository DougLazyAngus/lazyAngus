using UnityEngine;
using System.Collections;

public class DistortForEffect : MonoBehaviour {
	public delegate void DistortFinishedHandler(GameObject go);
	DistortFinishedHandler handler;

	public bool distorting { get; private set;}
	float startDistortTime;

	public float distortPeriod = 0.3f;
	public float distortScale = 1f;
	public Transform thingToScale;
	public bool squishAndStretch = false;

	private Vector3 originalScale;

	void Awake() {
		distorting = false;
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
		startDistortTime = Time.time + delay;
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
		if (!distorting || Time.time < startDistortTime) {  
			return;
		}

		float timeNow = Time.time;
		float timeDelta = timeNow - startDistortTime;

		float scale;
		if (timeDelta > distortPeriod) {
			scale = 1.0f;
			distorting = false;
			if (handler != null) {
				handler(gameObject);
			}
		} else {
			float phase = Mathf.Sin (timeDelta * 2f * Mathf.PI / distortPeriod);
			float amplitude = Mathf.Cos (timeDelta * 0.5f * Mathf.PI / distortPeriod);
			scale = 1.0f + phase * amplitude * distortScale;
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
