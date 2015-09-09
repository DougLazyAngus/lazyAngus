using UnityEngine;
using System.Collections;

public class MouseWiggleDesc {
	public Sprite introScreenSprite;
	public float minMagnitude;
	public float maxMagnitude;
	
	public int minCycles;
	public int maxCycles;

	public MouseWiggleDesc(string introScreenImageName, 
	                       float minMagnitude, 
	                       float maxMagnitude, 
	                       int minCycles, 
	                       int maxCycles) {
		string path;

		path = "Textures/MiceWiggleIntros/" + introScreenImageName;
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);
		this.minMagnitude = minMagnitude;
		this.maxMagnitude = maxMagnitude;
		this.minCycles = minCycles;
		this.maxCycles = maxCycles;
	}

}
