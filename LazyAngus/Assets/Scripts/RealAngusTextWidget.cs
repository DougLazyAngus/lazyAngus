using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusTextWidget : MonoBehaviour {
	public Text mainText;
	Vector3 onscreenPosition;
	Vector3 offscreenPosition;
	float offscreenRotation = 20;
	float onscreenRotation = 0;

	public float startTransitionTime;
	bool transitioning;
	bool onscreen;

	RectTransform rectTransform;

	void Awake() {
		rectTransform = GetComponent<RectTransform> ();
	}

	// Use this for initialization
	void Start () {
		onscreen = false;
		transitioning = false;
	
	}
	
	// Update is called once per frame
	void Update () {
		if (!transitioning) {
			return;
		}

		float timeFraction = (Time.time - startTransitionTime) / 
			TweakableParams.realAngusSelectionMoveTime;

		Utilities.LerpTransformInOut (onscreen, 
		                              timeFraction,
		                              offscreenPosition, offscreenRotation, 1, 
		                              onscreenPosition, onscreenRotation, 1, 
		                              transform);
		if (timeFraction >= 1) {
			transitioning = false;
		}
	}

	public void ConfigureLayout(float width, float height, 
	                            Vector2 onscreenPosition, 
	                         	Vector2 offscreenPosition) {
		this.onscreenPosition = onscreenPosition;
		this.offscreenPosition = offscreenPosition;
		rectTransform.sizeDelta = new Vector2 (width, height);
	}
	
	public void TransitionIn(RealAngusItemDesc raid) {
		onscreen = true;
		transitioning = true;
		startTransitionTime = Time.time;
		mainText.text = raid.text;
	}

	public void TransitionOut() {
		onscreen = false;
		transitioning = true;
		startTransitionTime = Time.time;
	}
}
