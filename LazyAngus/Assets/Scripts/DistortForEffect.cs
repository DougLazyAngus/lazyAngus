using UnityEngine;
using System.Collections;

public class DistortForEffect : MonoBehaviour {
	bool distorting;
	float startDistortTime;

	public float distortTime;
	public float distortScale;
	public Transform thingToScale;

	// Use this for initialization
	void Start () {
		distorting = false;	
	}

	public void Distort() {
		startDistortTime = Time.time;
		distorting = true;
	}

	// Update is called once per frame
	void Update () {
		if (!distorting) {
			return;
		}

		float timeNow = Time.time;
		float timeDelta = timeNow - startDistortTime;

		float scale;
		if (timeDelta > distortTime) {
			scale = 1.0f;
			distorting = false;
		} else {
			float phase = Mathf.Sin (timeDelta * 2f * Mathf.PI / distortTime);
			float amplitude = Mathf.Cos (timeDelta * 0.5f * Mathf.PI / distortTime);
			scale = 1.0f + phase * amplitude * distortScale;
		}

		thingToScale.localScale = new Vector3 (scale, scale, scale);
	}
}
