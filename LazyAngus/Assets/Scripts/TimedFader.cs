using UnityEngine;
using System.Collections;

public class TimedFader : MonoBehaviour {
	public float staticLifespan = 0.5f;
	public float fadingLifespan = 1.0f;
	SpriteRenderer spriteRenderer;

	float startTime;

	void Awake() {
		startTime = Time.time;
		spriteRenderer = GetComponent<SpriteRenderer> ();
	}

	// Update is called once per frame
	void Update () {
		float timeNow = Time.time;
		if (timeNow - startTime < staticLifespan) {
			return;
		}
		float fadingTime = timeNow - startTime - staticLifespan;
		float fraction = fadingTime / fadingLifespan;
		spriteRenderer.color = new Color (1f, 1f, 1f, 1 - fraction);

		if (fraction > 1f) {
			Object.Destroy (gameObject);
		}
	}
}
