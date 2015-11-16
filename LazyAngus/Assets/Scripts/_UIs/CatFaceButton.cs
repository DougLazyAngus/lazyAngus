using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CatFaceButton : MonoBehaviour {
	CatSkin.CatFaceType catFaceType;
	InOutTransitioner transitioner;

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
		UpdateSelectionState (true);
		started = true;
	}

	
	void OnEnable() {

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
		if (!StoreController.instance.IsUpgradePurchased ()) {
			StoreController.instance.BuyUpgrade ();
		} else {
			CatSkin.instance.SetCurrentSkin (catFaceType);
		}
	}

	public void UpdateSelectionState(bool jumpToNewState) {
		int foo  = (int)CatSkin.instance.currentSkinType;
		int bar = (int)catFaceType;

		bool isSelected = (CatSkin.instance.currentSkinType == catFaceType);

		if (jumpToNewState) {
			transitioner.Reset (isSelected);
		} else {
			transitioner.Transition (isSelected);
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
