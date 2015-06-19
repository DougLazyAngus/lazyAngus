using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseHole : MonoBehaviour {
	public Vector3 progressBarOffset;

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

	public GameObject trackingStatusBarPrototype;

	// Use this for initialization
	void Start () {
		savedMouseCount = 0;
		distortForEffect = gameObject.GetComponent<DistortForEffect> ();
		throbForEffect = gameObject.GetComponent<ThrobForEffect> ();

		MakeSlider ();
		UpdateSlider ();
	}

	void MakeSlider() {
		GameObject sliderGameObject = Instantiate (trackingStatusBarPrototype, 
		                                           new Vector3 (0, 0, 0),
		                                           Quaternion.identity) as GameObject;
		WorldObjectFollower woFollower = sliderGameObject.GetComponent<WorldObjectFollower> ();
		woFollower.SetObjectToFollow (gameObject, progressBarOffset);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();		
		tweakableSlider = sliderGameObject.GetComponent<TweakableSlider> ();

	}
	
	void DoSavedMouseFX() {
		distortForEffect.Distort ();
	}

	void DoClearedHoleFX() {
		distortForEffect.Distort ();
	}
	
	public void DoDoomedBoxFX() {
		distortForEffect.Cancel ();
		throbForEffect.SetThrobbing (true);
	}

	bool CountSavedMouse(MouseMove mouse) {
		// We can never have more than max.
		if (savedMouseCount < TweakableParams.instance.GetMaxMicePerHole()) {
			savedMouseCount++;
			return true;
		} else {
			return false;
		}
	}

	void UpdateSlider() {		
		float fractionFinished = (float)savedMouseCount /
			(float)TweakableParams.instance.GetMaxMicePerHole();
		sliderInstance.value = fractionFinished;
		tweakableSlider.fill.color =
			Utilities.TrafficLightColorLerp ((float)savedMouseCount /
			                                 (float)(TweakableParams.instance.GetMaxMicePerHole() - 1));
	}

	public void ClearMice() {
		if (savedMouseCount == 0) {
			return;
		}
		savedMouseCount = 0;
		UpdateSlider ();
		DoClearedHoleFX ();
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
		return savedMouseCount >= TweakableParams.instance.GetMaxMicePerHole();
	}

	public static MouseHoleLocation GetRandomHoleLocation () {
		return (MouseHoleLocation)Random.Range (0, (int)MouseHoleLocation.NUM_TYPES);
	}
}
