using UnityEngine;
using System.Collections;

public class BounceLerp : MonoBehaviour {
	public float secondsPerPeriod = 0.3f;
	public float totalPeriods = 1f;
	public float additionalScale = 1f;
	public float periodOffsetDeg = 0f;
	public bool looping = false;
	

	// Update is called once per frame
	protected float GetCoefficientForTime (float timeDelta, out bool isFinished) {
		if (!looping && timeDelta > (secondsPerPeriod * totalPeriods)) {
			isFinished = true;
			return 1;
		} 

		isFinished = false;

		float scale;
		float rads = periodOffsetDeg * Mathf.PI / 180f;
		rads += timeDelta / secondsPerPeriod * 2 * Mathf.PI;

		float scaleDelta = Mathf.Sin (rads) * additionalScale;

		if (!looping) {
			float timeFraction = timeDelta / (secondsPerPeriod * totalPeriods);
			rads = timeFraction * 0.5f * Mathf.PI;
			float decay = Mathf.Cos (rads);
			scaleDelta = scaleDelta * decay;
		}
		scale = 1.0f + scaleDelta;

		return scale;
	}
}
