using UnityEngine;
using System.Collections;

public class ThrobForEffect : MonoBehaviour {
	bool throbbing;
	float startThrobTime;

	public float throbPeriod = 0.3f;
	public float throbScale = 1f;
	public Transform thingToScale;
	
	private Vector3 originalScale;
	
	// Use this for initialization
	void Start () {
		throbbing = false;
		originalScale = thingToScale.localScale;
	}
	
	public void SetThrobbing(bool throbbing) {
		if (this.throbbing == throbbing) {
			return;
		}

		if (throbbing) {
			this.throbbing = true;
			startThrobTime = Time.time;
		} else {
			this.throbbing = false;
			thingToScale.localScale = originalScale;
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (!throbbing) {  
			return;
		}
		
		float timeNow = Time.time;
		float timeDelta = timeNow - startThrobTime;
		
		float phase = Mathf.Sin (timeDelta * Mathf.PI / throbPeriod);
		if ( phase < 0.0f) {
			phase = 0.0f;
		}

		float scale = 1.0f + phase * throbScale;

		thingToScale.localScale = new Vector3 (scale * originalScale.x,
		                                       scale * originalScale.y,
		                                       scale * originalScale.z);
	}
}
