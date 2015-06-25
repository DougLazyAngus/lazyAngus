using UnityEngine;
using System.Collections;

public class BoostDesc {
	public Sprite buttonSprite;
	public Sprite introScreenSprite;

	public float effectiveTime;
	public string boostName;
	public int levelLock;
	
	public BoostDesc(string boostName, 
	                 string buttonImageName, 
	                 string introScreenImageName, 
	                 float effectiveTime,
	                 int levelLock) {
		string path;

		path = "Textures/Boosts/" + buttonImageName;
		this.buttonSprite = Resources.Load<UnityEngine.Sprite>(path);

		path = "Textures/BoostIntros/" + introScreenImageName;
		this.introScreenSprite = Resources.Load<UnityEngine.Sprite>(path);

		this.effectiveTime = effectiveTime;
		this.boostName = boostName;
		this.levelLock = levelLock;
	}

}
