using UnityEngine;
using System.Collections;

public class RealAngusItemDesc {
	public Sprite pictureSprite;
	public string text;

	public RealAngusItemDesc (string pictureName, 
	                         string text) {
		string path;

	path = "Textures/RealAngus/" + pictureName;
	this.pictureSprite = Resources.Load<UnityEngine.Sprite>(path);
		this.text = text;
	}

}
