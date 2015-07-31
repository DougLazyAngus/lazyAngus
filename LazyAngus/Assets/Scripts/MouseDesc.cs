using UnityEngine;
using System.Collections;

public class MouseDesc {
	public Sprite deprecated_mouseSprite;
	public Sprite deadMouseSprite;
	public Sprite introScreenSprite;
	public Material mouseMaterial;

	public float speed;
	public float scale;

	public MouseDesc(string oldImageName, 
	                 string newImageName, 
	                 float speed,
	                 float scale) {
		string path;
		
		path = "Textures/Mice/" + oldImageName;
		this.deprecated_mouseSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/Mice/" + oldImageName + ".dead";
		this.deadMouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/NewMice/Materials/" + newImageName;
		this.mouseMaterial = Resources.Load<UnityEngine.Material>(path);

		path = "Textures/NewMiceIntros/" + newImageName + ".intro";
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
