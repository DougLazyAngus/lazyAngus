using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RealAngusElementButton : MonoBehaviour {

	public Image photoImage;
	public Image frameImage;
	public Image lockImage;

	public float frameWidth = 5;


	// Use this for initialization
	void Start () {	
	}
	
	// Update is called once per frame
	void Update () {	
	}

	void Configure(RealAngusItemDesc raid) {
		photoImage.sprite = raid.pictureSprite;

	}
}
