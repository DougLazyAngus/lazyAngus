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

	bool isBouncing;
	BounceLerp bounceLerp;

	void Awake ()
	{
		transitioner = new InOutTransitioner (TweakableParams.realAngusSelectionMoveTime);
		bounceLerp = new BounceLerp ();
		bounceLerp.secondsPerPeriod = selectionMoveTime;
		bounceLerp.additionalScale = 0.3f;

		isBouncing = false;
	}

	// Use this for initialization
	void Start () {
		UpdateSelectionState (true);
	}
		
	// Update is called once per frame
	void Update () {
		if (!transitioner.IsTransitioning() && !isBouncing) {
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
		bool isSelected = (CatSkin.instance.currentSkinType == catFaceType);

		if (jumpToNewState) {
			transitioner.Reset (isSelected);
			isBouncing = false;
		} else {
			transitioner.Transition (isSelected);
			isBouncing = true;
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

		float timeDelta = Time.time - transitioner.startTime;

		if (isBouncing) {
			bool isFinished;
			float extraScale = bounceLerp.GetCoefficientForTime (timeDelta, out isFinished);
			isBouncing = !isFinished;
			scale = scale * extraScale;
		}

		this.transform.localScale = new Vector2(scale, scale);
	}
}
