using UnityEngine;
using System.Collections;

public class DeadMouse : MonoBehaviour {
	public float zIndex;
	public float extraScale = 0.32f;

	// Use this for initialization
	void Start () {
		if (!SoundController.instance.sfxMuted) {
			SFXPlayer.instance.PlayRandom(SFXPlayer.instance.deadMouseIds,
			                              0.2f);
		}
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void Configure(MouseMove parentMouse) {
		MouseTypeDesc md = MouseConfig.instance.GetMouseTypeDesc (parentMouse.mouseType);

		SpriteRenderer sr = GetComponent<SpriteRenderer> ();
		sr.sprite = md.deadMouseSprite;
		Vector3 tmpP = parentMouse.gameObject.transform.position;
		// + = farther from camera.
		// This should be under mice.
		tmpP.z = zIndex;

		transform.position = tmpP;
		transform.rotation = parentMouse.gameObject.transform.rotation;
		transform.localScale = parentMouse.gameObject.transform.localScale * extraScale;
	}
}
