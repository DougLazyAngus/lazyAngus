using UnityEngine;
using System.Collections;

public class MouseTypeDesc {
	public Sprite deadMouseSprite;
	public Sprite introScreenSprite;
	public Sprite [] mouseSprites;

	public float speed;
	public float scale;

	public MouseTypeDesc(string imageNameRoot, 
	                     string [] imageNames, 
	                     float speed,
	                     float scale) {
		string path;
		
		path = "Textures/NewMice/" + imageNameRoot + ".dead";
		this.deadMouseSprite = Resources.Load<UnityEngine.Sprite>(path);

		mouseSprites = new Sprite[imageNames.Length];
		for (int i = 0; i < mouseSprites.Length; i++) {
			path = "Textures/NewMice/" + imageNames[i];
			this.mouseSprites[i] = Resources.Load<UnityEngine.Sprite>(path);
		}

		path = "Textures/NewMice/" + imageNameRoot;
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.speed = speed;
		this.scale = scale;
	}

}
