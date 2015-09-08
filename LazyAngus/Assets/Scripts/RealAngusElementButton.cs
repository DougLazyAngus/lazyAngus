using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusElementButton : MonoBehaviour
{

	public Image photoImage;
	public Image frameImage;
	public Image shadowImage;
	public GameObject lockWidgetGameObject;
	public float pauseBeforePulsing = 0.5f;
	public RealAngusItemDesc raid { get; private set; }

	DistortForEffect distortForEffect;

	public delegate void ButtonHandler (RealAngusElementButton button);

	ButtonHandler OnButtonClicked;
	ButtonHandler OnTransitionComplete;

	Vector2 homePosition;
	float homeRotation;

	Vector2 selectedPosition;
	float selectedRotation;
	float selectedScale;
	InOutTransitioner transitioner;
	
	void Awake ()
	{
		distortForEffect = GetComponent<DistortForEffect> ();
		transitioner = new InOutTransitioner (TweakableParams.realAngusSelectionMoveTime);
	}
	
	// Use this for initialization
	void Start ()
	{	
	}
	
	// Update is called once per frame
	void Update ()
	{	
		if (!transitioner.IsTransitioning()) {
			return;
		}

		UpdateSelectionState();
	}

	void UpdateSelectionState() {
		transitioner.UpdateTransitionFraction ();
		float fractionIn = transitioner.GetFractionIn ();
		Utilities.LerpTransform (fractionIn, 
		                         homePosition, homeRotation, 1, 
		                         selectedPosition, selectedRotation, selectedScale, 
		                         transform);

		if (!transitioner.IsTransitioning ()) {
			if (OnTransitionComplete != null) {
				OnTransitionComplete (this);
			}
		}
	}

	public void SetClickHandler (ButtonHandler handler)
	{
		OnButtonClicked = handler;
	}
	
	public void SetTransitionCompleteHandler (ButtonHandler handler)
	{
		OnTransitionComplete = handler;
	}

	public void Configure (RealAngusItemDesc raid)
	{
		this.raid = raid;

		photoImage.sprite = raid.pictureSprite;

		float frameWidth = TweakableParams.realAngusElementButtonWidth;
		float imageWidth = frameWidth - 2 * TweakableParams.realAngusElementButtonFrameWidth;
		float imageHeight = imageWidth / TweakableParams.realAngusImageAspectRatio;
		float frameHeight = imageHeight + 2 * TweakableParams.realAngusElementButtonFrameWidth;

		frameImage.rectTransform.sizeDelta = new Vector2 (frameWidth, frameHeight);
		shadowImage.rectTransform.sizeDelta = new Vector2 (frameWidth, frameHeight);
		photoImage.rectTransform.sizeDelta = new Vector2 (imageWidth,imageHeight);		

		UpdateState ();
	}
	 
	void UpdateState ()
	{
		if (raid.unlocked) {
			lockWidgetGameObject.SetActive (false);
		} else {
			lockWidgetGameObject.SetActive (true);
		}
	}

	public void ViewImage ()
	{
		// For now, just mark it viewed.
		raid.SetViewed (true);
		UpdateState ();

		if (OnButtonClicked != null) {
			OnButtonClicked (this);
		}
	}
	
	public void OnFirstDisplayed ()
	{
		if (raid.unlocked && !raid.viewed) {
			distortForEffect.DistortWithDelay (pauseBeforePulsing);
		}
		UpdateState ();
	}

	public void SetSelected (bool selected, 
	                         bool skipTransition=false)
	{
		if (skipTransition) {
			transitioner.Reset (selected);
			UpdateSelectionState();
		} else {
			transitioner.Transition(selected);
		}
	}

	public bool IsSelected() {
		return transitioner.movingIn;
	}

	public void SetSelectedTransform(Vector2 position, 
	                                 float rotation, 
	                                 float scale) {
		selectedPosition = position;
		selectedRotation = rotation;
		selectedScale = scale;
	}

	public void SetHomeTransform (Vector2 position, 
	                             float rotation)
	{
		this.homePosition = position;
		this.homeRotation = rotation;

		gameObject.transform.localPosition = position;
		gameObject.transform.localRotation = Quaternion.Euler (0, 0, rotation);
	}

}
