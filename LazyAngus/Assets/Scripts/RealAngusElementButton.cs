using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusElementButton : MonoBehaviour
{

	public Image photoImage;
	public Image frameImage;
	public Image shadowImage;
	public Image lockImage;
	public float pauseBeforePulsing = 0.5f;
	public RealAngusItemDesc raid { get; private set; }

	float startTransitionTime;
	bool transitioning = true;
	DistortForEffect distortForEffect;

	public delegate void ButtonHandler (RealAngusElementButton button);

	ButtonHandler OnButtonClicked;
	ButtonHandler OnTransitionComplete;

	public bool selected { get; private set; }
	
	Vector2 homePosition;
	float homeRotation;

	Vector2 selectedPosition;
	float selectedRotation;
	float selectedScale;
	
	void Awake ()
	{
		distortForEffect = GetComponent<DistortForEffect> ();
	}
	
	// Use this for initialization
	void Start ()
	{	
	}
	
	// Update is called once per frame
	void Update ()
	{	
		if (transitioning) {
			UpdateSelectionState();
		}
	}

	void UpdateSelectionState() {
		float timeFraction = (Time.time - startTransitionTime) / 
			TweakableParams.realAngusSelectionMoveTime;

		Utilities.LerpTransformInOut (selected, 
		                              timeFraction,
		                              homePosition, homeRotation, 1, 
		                              selectedPosition, selectedRotation, selectedScale, 
		                              transform);

		if (timeFraction >= 1) {
			transitioning = false;
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
			lockImage.gameObject.SetActive (false);
		} else {
			lockImage.gameObject.SetActive (true);
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
		if (selected != this.selected) {
			this.selected = selected;
			if (skipTransition) {
				startTransitionTime = 0;
				UpdateSelectionState();
			} else {
				startTransitionTime = Time.time;
				transitioning = true;
			}
		}
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
