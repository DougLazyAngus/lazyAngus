using UnityEngine;
using System.Collections;

public class CatSkin : MonoBehaviour {
	public string currentSkinName {get; private set;}
	public static CatSkin instance;

	public delegate void CatSkinChangedHandler();
	public event CatSkinChangedHandler CatSkinChanged;

	public SpriteRenderer headRenderer;
	public SpriteRenderer bodyRenderer;

	void Awake() {
		instance = this;
		currentSkinName = "original";
	}

	// Use this for initialization
	void Start () {
		currentSkinName = PersistentStorage.instance.GetStringValue ("catSkin", 
		                                                             "original");
		// FIXME(dbanks)
		currentSkinName = "persian";

		ApplyCurrentSkin ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetCurrentSkinName(string skinName) {
		currentSkinName = skinName;
		ApplyCurrentSkin ();
	}

	void ApplyCurrentSkin() {
		string path;

		PersistentStorage.instance.SetStringValue ("catSkin", 
		                                           currentSkinName);

		path = "Textures/NewCatParts/" + currentSkinName + "/cat_head_01";
		headRenderer.sprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/NewCatParts/" + currentSkinName + "/cat_body_01";
		bodyRenderer.sprite = Resources.Load<UnityEngine.Sprite>(path);
		if (CatSkinChanged != null) {
			CatSkinChanged ();
		}
	}
}
