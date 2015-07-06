using UnityEngine;
using System.Collections;

public class DeadMouse : MonoBehaviour {
	public Sprite[] baseSprites;

	public float deadMouseZ = -1.0f;

	public AudioSource[] audioSources;

	// Use this for initialization
	void Start () {
		int index = Random.Range (0, audioSources.Length);
		if (!SoundController.instance.sfxMuted) {
			audioSources [index].PlayDelayed (0.2f);
		}
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void Configure(MouseMove parentMouse) {
		int typeAsIndex = (int)parentMouse.mouseType;

		SpriteRenderer sr = GetComponent<SpriteRenderer> ();
		sr.sprite = baseSprites [typeAsIndex];
		Vector3 tmpP = parentMouse.gameObject.transform.position;
		tmpP.z = deadMouseZ;

		transform.position = tmpP;
		transform.rotation = parentMouse.gameObject.transform.rotation;
		transform.localScale = parentMouse.gameObject.transform.localScale;
	}
}
