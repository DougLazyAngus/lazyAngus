using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusElementButton : MonoBehaviour
{

	public Image photoImage;
	public Image frameImage;
	public Image shadowImage;
	public Image lockImage;
	public float frameWidth = 5;
	public float pauseBeforePulsing = 0.5f;
	float startTransitionTime;
	bool transitioning = true;
	RealAngusItemDesc raid;
	DistortForEffect distortForEffect;
	
	public delegate void ButtonHandler (RealAngusElementButton button);

	ButtonHandler OnButtonClicked;
	ButtonHandler OnTransitionComplete;

	public bool selected { get; private set; }

	Button button;
	Vector2 homePosition;
	float homeRotation;
	public Vector2 selectedPosition = new Vector2 (0, 0);

	float width;
	float selectedScale;

	void Awake ()
	{
		distortForEffect = GetComponent<DistortForEffect> ();
		button = GetComponent<Button> ();
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

	public void SetSizingDetails(float width, float selectedScale) {
		this.width = width;
		this.selectedScale = selectedScale;
	}

	void UpdateSelectionState() {
		float timeFraction = (Time.time - startTransitionTime) / 
			TweakableParams.realAngusSelectionMoveTime;
		
		Vector2 localPos;
		float angle;
		float scale;

		if (timeFraction >= 1) {
			transitioning = false;
			if (selected) {
				localPos = selectedPosition;
				angle = 0;
				scale = selectedScale;
			} else {
				localPos = homePosition;
				angle = homeRotation;
				scale = 1;
			}
			
			if (OnTransitionComplete != null) {
				OnTransitionComplete(this);
			}
		} else {
			if (selected) {
				localPos = 
					Vector2.Lerp (homePosition, 
					              selectedPosition, 
					              timeFraction);
				angle = Mathf.Lerp (homeRotation, 
				                    0, 
				                    timeFraction);
				scale = Mathf.Lerp (1, 
				                    selectedScale, 
				                    timeFraction);

			} else {
				localPos = 
					Vector2.Lerp (selectedPosition,
					              homePosition, 
					              timeFraction);
				angle = Mathf.Lerp (0, 
				                    homeRotation, 
				                    timeFraction);
				scale = Mathf.Lerp (selectedScale, 
				                    1, 
				                    timeFraction);
			}
		}
		
		transform.localPosition = localPos;
		transform.localRotation = Quaternion.Euler(0, 0, angle);
		transform.localScale = new Vector2 (scale, scale);
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

		Rect r = raid.pictureSprite.rect;
		float aspectRatio = r.width / r.height;

		float height;
		height = width / aspectRatio;

		frameImage.rectTransform.sizeDelta = new Vector2 (width + 2 * frameWidth,
		                                                  height + 2 * frameWidth);	
		shadowImage.rectTransform.sizeDelta = new Vector2 (width + 2 * frameWidth,
		                                                  height + 2 * frameWidth);	
		photoImage.rectTransform.sizeDelta = new Vector2 (width,
		                                                  height);		

		UpdateState ();
	}

	void UpdateState ()
	{
		if (raid.unlocked) {
			lockImage.gameObject.SetActive (false);
			button.enabled = true;
		} else {
			lockImage.gameObject.SetActive (true);
			button.enabled = false;
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

	public void SetHomeTransform (Vector2 position, 
	                             float rotation)
	{
		this.homePosition = position;
		this.homeRotation = rotation;

		gameObject.transform.localPosition = position;
		gameObject.transform.localRotation = Quaternion.Euler (0, 0, rotation);
	}

}
