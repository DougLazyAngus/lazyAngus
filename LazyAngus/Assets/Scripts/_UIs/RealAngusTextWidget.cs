using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusTextWidget : MonoBehaviour {
	public Text mainText;
	Vector3 onscreenPosition;
	Vector3 offscreenPosition;
	float offscreenRotation = 20;
	float onscreenRotation = 0;
	
	RectTransform rectTransform;

	InOutTransitioner transitioner;

	void Awake() {
		rectTransform = GetComponent<RectTransform> ();
		MaybeMakeTransitioner ();
	}

	// Use this for initialization
	void Start () {
		MaybeMakeTransitioner ();
	}
	
	// Update is called once per frame
	void Update () {
		MaybeMakeTransitioner ();

		if (!transitioner.IsTransitioning ()) {
			return;
		}

		transitioner.UpdateTransitionFraction ();
		float timeFraction = transitioner.GetFractionIn ();

		Utilities.LerpTransform (timeFraction,
		                         offscreenPosition, offscreenRotation, 1, 
		                         onscreenPosition, onscreenRotation, 1, 
		                         transform);
	}

	public void ConfigureLayout(float width, float height, 
	                            Vector2 onscreenPosition, 
	                         	Vector2 offscreenPosition) {
		MaybeMakeTransitioner ();
		rectTransform = GetComponent<RectTransform> ();
		this.onscreenPosition = onscreenPosition;
		this.offscreenPosition = offscreenPosition;
		rectTransform.sizeDelta = new Vector2 (width, height);
	}
	
	public void TransitionIn(RealAngusItemDesc raid) {
		MaybeMakeTransitioner ();
		transitioner.Transition (true);
		mainText.text = raid.text;
	}

	public void TransitionOut() {
		MaybeMakeTransitioner ();
		transitioner.Transition (false);
	}

	void MaybeMakeTransitioner() {
		if (transitioner == null) {
			transitioner = new InOutTransitioner (TweakableParams.realAngusCardMoveTime);
		}
	}
}
