using UnityEngine;
using System.Collections;

public class DeadMouse : MonoBehaviour {
	public SpriteRenderer spriteRenderer;	
	public Sprite[] baseSprites;

	public float staticLifespan = 0.5f;
	public float fadingLifespan = 1.0f;

	bool initialized = false;
	float startTime;
	public float deadMouseZ = -1.0f;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (!initialized) {
			return;
		}

		float timeNow = Time.time;
		float timeElapsed = timeNow - startTime;
		if (timeElapsed < staticLifespan) {
			return;
		}
		timeElapsed -= staticLifespan;

		if (timeElapsed < fadingLifespan) {
			float fraction = (fadingLifespan - timeElapsed) / fadingLifespan;
			spriteRenderer.color = new Color (1f, 1f, 1f, fraction);
			return;
		}

		Destroy (gameObject);
	}

	public void Configure(MouseMove parentMouse) {
		initialized = true;
		int typeAsIndex = (int)parentMouse.mouseType;
		spriteRenderer.sprite = baseSprites [typeAsIndex];
		Vector3 tmpP = parentMouse.gameObject.transform.position;
		tmpP.z = deadMouseZ;

		transform.position = tmpP;
		transform.rotation = parentMouse.gameObject.transform.rotation;
		transform.localScale = parentMouse.gameObject.transform.localScale;

		startTime = Time.time;
	}
}
