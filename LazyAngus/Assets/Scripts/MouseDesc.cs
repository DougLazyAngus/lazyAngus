using UnityEngine;
using System.Collections;

public class MouseDesc {
	public Sprite deprecated_mouseSprite;
	public Sprite introScreenSprite;
	public Material mouseMaterial;

	public float speed;
	public float scale;

	public MouseDesc(string imageName, 
	                 string introScreenImageName, 
	                 float speed,
	                 float scale) {
		string path;

		path = "Textures/Mice/" + imageName;
		this.deprecated_mouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/Mice/Materials/" + imageName;
		this.mouseMaterial = Resources.Load<UnityEngine.Material>(path);

		path = "Textures/MiceIntros/" + introScreenImageName;
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
