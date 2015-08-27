using UnityEngine;
using System.Collections;

public class RealAngusItemDesc {
	public Sprite pictureSprite { get; private set; }
	public string text { get; private set; }
	public string tag { get; private set; }

	public bool unlocked { get; private set; }
	public bool viewed  { get; private set; }


	string ViewedTag() {
		return "raid.viewed." + tag;
	}
	
	string UnlockedTag() {
		return "raid.unlocked." + tag;
	}
	
	public RealAngusItemDesc (string pictureName, 
	                          string text,
	                          string tag) {
		string path;

		path = "Textures/RealAngus/" + pictureName;
		this.pictureSprite = Resources.Load<UnityEngine.Sprite>(path);
		this.text = text;
		this.tag = tag;

		unlocked = PersistentStorage.instance.GetBoolValue (UnlockedTag(), false);
		viewed = PersistentStorage.instance.GetBoolValue (ViewedTag(), false);
	}

	public void Unlock() {
		unlocked = true;
		PersistentStorage.instance.SetBoolValue (UnlockedTag(), true);
	}
	
	public void MarkViewed() {
		viewed = true;
		unlocked = PersistentStorage.instance.GetBoolValue (ViewedTag(), false);
	}
}
