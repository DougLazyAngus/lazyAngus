using UnityEngine;
using System.Collections;

public class MouseDesc {
	public Sprite mouseSprite;
	public Sprite introScreenSprite;

	public float speed;
	public float scale;

	public MouseDesc(string imageName, 
	                 string introScreenImageName, 
	                 float speed,
	                 float scale) {
		string path;

		path = "Textures/Mice/" + imageName;
		this.mouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/MiceIntros/" + introScreenImageName;
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
