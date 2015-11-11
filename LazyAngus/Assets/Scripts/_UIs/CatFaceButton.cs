using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CatFaceButton : MonoBehaviour {
	CatSkin.CatFaceType catFaceType;
	InOutTransitioner transitioner;
	bool registeredForEvents;
	public float selectionMoveTime = 0.3f;
	public float selectedScale = 1.3f;
	public Color selectedColor = new Color (1.0f, 1.0f, 1.0f);
	public Color unselectedColor = new Color (0.8f, 0.8f, 0.8f);

	bool started = false;

	void Awake ()
	{
		transitioner = new InOutTransitioner (TweakableParams.realAngusSelectionMoveTime);
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateSelectionState ();
		started = true;
	}

	
	void OnDestroy() {
		UnregisterForEvents ();
	}

	void OnEnable() {

	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		CatSkin.instance.CatSkinChanged += 			
			new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);

	}

	void UnregisterForEvents ()
	{
		if (registeredForEvents) {
			CatSkin.instance.CatSkinChanged -= 			
				new CatSkin.CatSkinChangedHandler (OnCatSkinChanged);
		}		
	}

	// Update is called once per frame
	void Update () {
		if (!transitioner.IsTransitioning()) {
			return;
		}
		transitioner.UpdateTransitionFraction ();
		ScaleWithTransitioner ();
	}

	public void SetCatFaceType(CatSkin.CatFaceType t) {
		catFaceType = t;
	}

	public void OnButtonClicked() {
		CatSkin.instance.SetCurrentSkin (catFaceType);
	}

	void OnCatSkinChanged() {
		UpdateSelectionState ();
	}

	void UpdateSelectionState() {
		bool isSelected = (CatSkin.instance.currentSkinType == catFaceType);

		if (started) {
			transitioner.Transition (isSelected);
		} else {
			transitioner.Reset (isSelected);
		}

		ScaleWithTransitioner ();

		Image image = GetComponent<Image> ();
		if (isSelected) {
			image.color = selectedColor;
		} else {
			image.color = unselectedColor;
		}
	}

	void ScaleWithTransitioner() {
		float scale = Mathf.Lerp (1, selectedScale, 
		                          transitioner.GetFractionIn ());
		this.transform.localScale = new Vector2(scale, scale);
	}
}
