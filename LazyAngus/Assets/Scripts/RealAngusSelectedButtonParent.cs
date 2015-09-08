using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusSelectedButtonParent : MonoBehaviour {

	InOutTransitioner transitioner;
	Image image;
	float selectedBackgroundAlpha = 0.4f;

	void Awake() {
		image = GetComponent<Image> ();
	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		MaybeMakeTransitioner ();
		if (!transitioner.IsTransitioning()) {
			if (transitioner.GetFractionIn () == 0) {
				gameObject.SetActive (false);
			}			
			return;
		}
		
		UpdateSelectionState ();
	}

	
	void UpdateSelectionState() {
		transitioner.UpdateTransitionFraction ();
		UpdateImage ();
	}

	void UpdateImage() {
		float fractionIn = transitioner.GetFractionIn ();
		image.color = new Color (0, 0, 0, 
		                         selectedBackgroundAlpha * fractionIn);
	}

	public void StartVisibilityTransition(bool visible) {
		MaybeMakeTransitioner ();
		transitioner.Transition (visible);

		if (visible) {
			gameObject.SetActive(true);
			UpdateImage();
		}
	}

	void MaybeMakeTransitioner() {
		if (transitioner == null) {
			transitioner = new InOutTransitioner (TweakableParams.realAngusSelectionFadeTime);
		}
	}
}
