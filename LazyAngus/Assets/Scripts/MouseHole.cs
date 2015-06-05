using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseHole : MonoBehaviour {
	public int maxSavedMice = 5;

	public enum MouseHoleLocation {
		NORTH = 0,
		EAST,
		SOUTH,
		WEST,
		NUM_TYPES,
	};
	
	public MouseHoleLocation mouseHoleLocation;

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);

	private Slider sliderInstance;	

	private int savedMouseCount;

	private DistortForEffect distortForEffect;
	private ThrobForEffect throbForEffect;
	private TweakableSlider tweakableSlider;

	// Use this for initialization
	void Start () {
		savedMouseCount = 0;
		distortForEffect = gameObject.GetComponent<DistortForEffect> ();
		throbForEffect = gameObject.GetComponent<ThrobForEffect> ();

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
		
		tweakableSlider = sliderGameObject.GetComponent<TweakableSlider> ();
	}
	
	void DoSavedMouseFX() {
		distortForEffect.Distort ();
	}

	public void DoDoomedBoxFX() {
		distortForEffect.Cancel ();
		throbForEffect.SetThrobbing (true);
	}

	bool CountSavedMouse(MouseMove mouse) {
		// We can never have more than max.
		if (savedMouseCount < maxSavedMice) {
			savedMouseCount++;
			return true;
		} else {
			return false;
		}
	}

	void UpdateSlider() {		
		float fractionFinished = (float)savedMouseCount / (float)maxSavedMice;
		sliderInstance.value = fractionFinished;
		tweakableSlider.fill.color =
			Utilities.TrafficLightColorLerp ((float)savedMouseCount / (float)(maxSavedMice - 1));
	}

	public void SaveMouse(MouseMove mouse) {
		mouse.OnSafeExit ();	
		
		if (CountSavedMouse (mouse)) {
			GameController gameController = GameController.instance;
			gameController.OnMouseExit (mouse);		
			UpdateSlider ();
			DoSavedMouseFX ();
		}
	}

	public bool IsFull() {
		return savedMouseCount >= maxSavedMice;
	}

	public static MouseHoleLocation GetRandomHoleLocation () {
		return (MouseHoleLocation)Random.Range (0, (int)MouseHoleLocation.NUM_TYPES);
	}
}
