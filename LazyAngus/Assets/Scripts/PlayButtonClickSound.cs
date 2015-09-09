using UnityEngine;
using System.Collections;

public class PlayButtonClickSound : MonoBehaviour {
	DistortForEffect distortForEffect;

	void Awake() {
		distortForEffect = GetComponent<DistortForEffect> ();
		if (distortForEffect != null) {
			distortForEffect.totalPeriods = 1;
			distortForEffect.squishAndStretch = true;
		}
	}

	public void Play() {
		SFXPlayer.instance.Play (SFXPlayer.SFXType.BUTTON_CLICK);

		if (distortForEffect != null) {
			distortForEffect.Distort();
		}
	}
}
