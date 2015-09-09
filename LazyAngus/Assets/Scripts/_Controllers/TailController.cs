using UnityEngine;
using System.Collections;

public class TailController : MonoBehaviour {
	public Renderer tailRenderer;

	public Material [] tailMaterials;
	public float cycleTime = 1.0f;
	public int numFrames;
	public Material [] currentMaterial;

	// Use this for initialization
	void Start () {
		currentMaterial = new Material[1];
		numFrames = tailMaterials.Length * 2 - 1;
	}
	
	// Update is called once per frame
	void Update () {
		float timeNow = Time.time;
		float timeIntoCycle = timeNow % cycleTime;
		int frameIndex = (int)(Mathf.Floor(timeIntoCycle * numFrames/cycleTime));
		if (frameIndex >= tailMaterials.Length) {
			frameIndex = (2 * tailMaterials.Length - 1) - frameIndex;
		}
		currentMaterial[0] = tailMaterials [frameIndex];
		tailRenderer.materials = currentMaterial;
	}
}
