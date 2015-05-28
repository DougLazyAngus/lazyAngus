using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseHole : MonoBehaviour {
	public int maxSavedMice = 5;

	private Slider sliderInstance;	

	private int savedMouseCount;
	private DistortForEffect distortForEffect;

	// Use this for initialization
	void Start () {
		savedMouseCount = 0;
		distortForEffect = gameObject.GetComponent<DistortForEffect> ();
		MakeSlider ();
		UpdateSlider ();
	}

	void MakeSlider() {
		GameObject sliderGameObject = Utilities.FindChildWithTag(gameObject, 
		                                                         "TrackingProgressBar");
		
		UIFollower uiFollower = sliderGameObject.GetComponent<UIFollower> ();
		uiFollower.parentTransform = gameObject.transform;

		GameObject canvas = Utilities.GetCanvasGameObject ();
		sliderGameObject.transform.SetParent (canvas.transform);
		
		sliderInstance = sliderGameObject.GetComponent<Slider> ();
		
		TweakableSlider ts = sliderGameObject.GetComponent<TweakableSlider> ();
		ts.fill.color = new Color(1.0f, 0.0f, 0.0f);
	}
	
	void DoSavedMouseFX() {
		distortForEffect.Distort ();
	}

	void CountSavedMouse(MouseMove mouse) {
		savedMouseCount++;
		UpdateSlider ();
	}

	void UpdateSlider() {		
		float fractionFinished = (float)savedMouseCount / (float)maxSavedMice;
		sliderInstance.value = fractionFinished;
	}

	public void SaveMouse(MouseMove mouse) {
		mouse.OnSafeExit ();	
		
		CountSavedMouse (mouse);
		DoSavedMouseFX ();
		
		GameController gameController = Utilities.GetGameController ();
		gameController.OnMouseExit (mouse);
		
		UpdateSlider ();
	}

	public bool IsFull() {
		return savedMouseCount >= maxSavedMice;
	}
}
