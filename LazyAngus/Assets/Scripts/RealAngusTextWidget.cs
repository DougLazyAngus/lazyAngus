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
		onscreen = false;
		transitioning = false;	
	}

	// Use this for initialization
	void Start () {
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
		rectTransform = GetComponent<RectTransform> ();
		this.onscreenPosition = onscreenPosition;
		this.offscreenPosition = offscreenPosition;
		rectTransform.sizeDelta = new Vector2 (width, height);
	}
	
	public void TransitionIn(RealAngusItemDesc raid) {
		if (onscreen) {
			return;
		}


		onscreen = true;
		SetStartTransitionTime ();
		transitioning = true;
		mainText.text = raid.text;
	}

	public void TransitionOut() {
		if (!onscreen) {
			return;
		}
		onscreen = false;
		SetStartTransitionTime ();
		transitioning = true;
	}

	void SetStartTransitionTime() {
		// If already transitioning, we just want to go back through as much 
		// time as was just used.
		if (transitioning) {
			float timeAlreadySpent = Time.time - startTransitionTime;
			float timeRemaining = TweakableParams.realAngusSelectionMoveTime - timeAlreadySpent;
			startTransitionTime = Time.time - timeRemaining;
		} else {
			startTransitionTime = Time.time;
		}
	}
}
