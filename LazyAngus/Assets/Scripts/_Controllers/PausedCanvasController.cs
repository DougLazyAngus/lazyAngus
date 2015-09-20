using UnityEngine;
using System.Collections;

public class PausedCanvasController : MonoBehaviour {
	public Canvas pausedCanvas;

	void Awake() {
		if (pausedCanvas != null && 
			!pausedCanvas.isActiveAndEnabled) {
			pausedCanvas.gameObject.SetActive (true);
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
