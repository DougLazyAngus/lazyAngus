using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusSelectedButtonParent : MonoBehaviour {

	float startTransitionTime;
	bool transitioning;
	bool visible;
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
		if (!transitioning) {
			return;
		}
		
		UpdateSelectionState ();
	}

	
	void UpdateSelectionState() {
		float timeFraction = (Time.time - startTransitionTime) / 
			TweakableParams.realAngusSelectionFadeTime;
		if (timeFraction >= 1) {
			transitioning = false;
			if (!visible) {
				gameObject.SetActive (false);
			}
		} else {
			if (visible) {
				image.color = new Color (0, 0, 0, 
				                         selectedBackgroundAlpha * timeFraction);
			} else {
				image.color = new Color (0, 0, 0, 
				                         selectedBackgroundAlpha * (1 - timeFraction));
			}
		}
	}

	public void StartVisibilityTransition(bool visible) {
		this.visible = visible;
		transitioning = true;
		startTransitionTime = Time.time;

		if (visible) {
			gameObject.SetActive(true);
		}
	}
}
