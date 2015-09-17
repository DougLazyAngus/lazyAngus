using UnityEngine;
using System.Collections;

public class TailController : MonoBehaviour {
	public SpriteRenderer tailRenderer;

	public Sprite [] sprites;
	public float cycleTime = 1.0f;
	int numFrames;

	// Use this for initialization
	void Start () {
		numFrames = sprites.Length * 2 - 1;
	}
	
	// Update is called once per frame
	void Update () {
		float timeNow = Time.time;
		float timeIntoCycle = timeNow % cycleTime;
		int frameIndex = (int)(Mathf.Floor(timeIntoCycle * numFrames/cycleTime));
		if (frameIndex >= sprites.Length) {
			frameIndex = (2 * sprites.Length - 1) - frameIndex;
		}
		tailRenderer.sprite = sprites[frameIndex];
	}
}
