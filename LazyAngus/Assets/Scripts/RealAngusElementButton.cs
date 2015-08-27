using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusElementButton : MonoBehaviour {

	public Image photoImage;
	public Image frameImage;
	public Image lockImage;

	public float frameWidth = 5;
	public float smallSideSize = 130;

	public float pauseBeforePulsing = 0.5f;

	RealAngusItemDesc raid;
	DistortForEffect distortForEffect;

	void Awake() {
		distortForEffect = GetComponent<DistortForEffect> ();
	}

	// Use this for initialization
	void Start () {	
	}
	
	// Update is called once per frame
	void Update () {	
	}

	public void Configure(RealAngusItemDesc raid) {
		this.raid = raid;

		photoImage.sprite = raid.pictureSprite;

		Rect r = raid.pictureSprite.rect;
		float aspectRatio = r.width / r.height;

		float height;
		float width;

		if (aspectRatio > 1) {
			height = smallSideSize;
			width = aspectRatio * smallSideSize;
		} else {
			width = smallSideSize;
			height = smallSideSize/aspectRatio;
		}

		frameImage.rectTransform.sizeDelta = new Vector2 (width + 2 * frameWidth,
		                                                  height + 2 * frameWidth);		
		photoImage.rectTransform.sizeDelta = new Vector2 (width,
		                                                  height);		

		UpdateState ();
	}

	void UpdateState() {
		if (raid.unlocked) {
			lockImage.gameObject.SetActive (false);
		} else {
			lockImage.gameObject.SetActive (true);
		}
	}


	public void ViewImage() {
		// For now, just mark it viewed.
		raid.SetViewed (true);
		UpdateState ();
	}
	
	public void OnFirstDisplayed() {
		if (raid.unlocked && !raid.viewed) {
			distortForEffect.DistortWithDelay(pauseBeforePulsing);
		}
		UpdateState ();
	}
}
