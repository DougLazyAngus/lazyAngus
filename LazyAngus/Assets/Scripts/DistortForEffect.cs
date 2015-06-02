using UnityEngine;
using System.Collections;

public class DistortForEffect : MonoBehaviour {
	bool distorting;
	float startDistortTime;

	public float distortPeriod = 0.3f;
	public float distortScale = 1f;
	public Transform thingToScale;

	private Vector3 originalScale;

	// Use this for initialization
	void Start () {
		distorting = false;
		originalScale = thingToScale.localScale;
	}

	public void Distort() {
		if (distorting) {
			return;
		}
		startDistortTime = Time.time;
		distorting = true;
	}

	public void Cancel() {
		distorting = false;
		thingToScale.localScale = originalScale;
	}

	// Update is called once per frame
	void Update () {
		if (!distorting) {  
			return;
		}

		float timeNow = Time.time;
		float timeDelta = timeNow - startDistortTime;

		float scale;
		if (timeDelta > distortPeriod) {
			scale = 1.0f;
			distorting = false;
		} else {
			float phase = Mathf.Sin (timeDelta * 2f * Mathf.PI / distortPeriod);
			float amplitude = Mathf.Cos (timeDelta * 0.5f * Mathf.PI / distortPeriod);
			scale = 1.0f + phase * amplitude * distortScale;
		}

		thingToScale.localScale = new Vector3 (scale * originalScale.x,
		                                       scale * originalScale.y,
		                                       scale * originalScale.z);
	}
}
