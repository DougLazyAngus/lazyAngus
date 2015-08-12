using UnityEngine;
using System.Collections;

public class MouseTypeDesc {
	public Sprite deadMouseSprite;
	public Sprite introScreenSprite;
	public Material mouseMaterial;

	public float speed;
	public float scale;

	public MouseTypeDesc(string oldImageName, 
	                 string newImageName, 
	                 float speed,
	                 float scale) {
		string path;
		
		path = "Textures/NewMice/" + newImageName + ".dead";
		this.deadMouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/NewMice/Materials/" + newImageName;
		this.mouseMaterial = Resources.Load<UnityEngine.Material>(path);

		path = "Textures/NewMiceIntros/" + newImageName + ".intro";
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
