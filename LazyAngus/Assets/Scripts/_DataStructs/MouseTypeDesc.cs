using UnityEngine;
using System.Collections;

public class MouseTypeDesc {
	public Sprite deadMouseSprite;
	public Sprite exitingMouseSprite;
	public Sprite introScreenSprite;
//	public Material mouseMaterial;
	public Sprite mouseSprite;

	public float speed;
	public float scale;

	public MouseTypeDesc(string oldImageName, 
	                 string newImageName, 
	                 float speed,
	                 float scale) {
		string path;
		
		path = "Textures/NewMice/" + newImageName + ".dead";
		this.deadMouseSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/NewMice/" + newImageName + ".exiting";
		this.exitingMouseSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/NewMice/" + newImageName;
		this.mouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/NewMiceIntros/" + newImageName + ".intro";
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
