using UnityEngine;
using System.Collections;
using System;

public class TailController : MonoBehaviour {
	public SpriteRenderer tailRenderer;

	Sprite [] sprites;
	public float cycleTime = 1.0f;

	public string pathStub = "Textures/NewCatParts/Tail/cat_tail";
	public int numFrames = 24;
	public bool backAndForth = false;

	void Awake() {
		sprites = new Sprite[numFrames];
		for (int i = 0; i < numFrames; i++) {

			string fullPath = String.Format("{0}.{1:00}", pathStub , i + 1);
			sprites[i] = Resources.Load<UnityEngine.Sprite>(fullPath);
		}
	}

	// Use this for initialization
	void Start () {
		if (backAndForth) {
			numFrames = sprites.Length * 2 - 1;
		} else {
			numFrames = sprites.Length;
		}
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
