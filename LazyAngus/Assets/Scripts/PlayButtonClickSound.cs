using UnityEngine;
using System.Collections;

public class PlayButtonClickSound : MonoBehaviour {
	public void Play() {
		SFXPlayer.instance.Play (SFXPlayer.SFXType.BUTTON_CLICK);
	}
}
