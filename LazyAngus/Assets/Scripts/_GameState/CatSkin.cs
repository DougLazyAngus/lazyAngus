using UnityEngine;
using System.Collections;

public class CatSkin : MonoBehaviour {
	public enum CatFaceType {
		ORIGINAL,
		ORANGE_TABBY,
		PERSIAN,
		HIMALAYAN,
		GREY_TABBY,
		TORTOISE,

		NUM_TYPES
	}
	
	public CatFaceType currentSkinType { get; private set; }
	public static CatSkin instance;

	public delegate void CatSkinChangedHandler();
	public event CatSkinChangedHandler CatSkinChanged;

	public SpriteRenderer headRenderer;
	public SpriteRenderer bodyRenderer;

	void Awake() {
		instance = this;
		currentSkinType = CatFaceType.ORIGINAL;
	}

	// Use this for initialization
	void Start () {
		currentSkinType = (CatFaceType)PersistentStorage.instance.GetIntValue (
			"catSkinType", 
			(int)CatFaceType.ORIGINAL);
		// FIXME(dbanks)
		// Accidentally stored some bad values.
		if (currentSkinType == CatFaceType.NUM_TYPES) {
			currentSkinType = CatFaceType.ORIGINAL;
		}
			
		ApplyCurrentSkin ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetCurrentSkin(CatFaceType fType) {
		currentSkinType = fType;
		ApplyCurrentSkin ();
	}

	string GetSkinName(CatFaceType fType) {
		switch (fType) {
		case CatFaceType.ORIGINAL:
			return "original";
		case CatFaceType.ORANGE_TABBY:
			return "orange_tabby";
		case CatFaceType.PERSIAN:
			return "persian";
		case CatFaceType.HIMALAYAN:
			return "himalayan";
		case CatFaceType.TORTOISE:
			return "tortoise";
		case CatFaceType.GREY_TABBY:
			return "grey_tabby";
		default:
			return "original";
		}
	}

	public string GetCurrentSkinName() {
		return GetSkinName (currentSkinType);
	}

	public Sprite GetButtonSpriteForSkin(CatFaceType t) {
		string skinName = GetSkinName (t);
		string path = "Textures/NewCatParts/" + skinName + "/cat_head_01";
		return Resources.Load<UnityEngine.Sprite> (path);
	}

	void ApplyCurrentSkin() {
		string path;

		PersistentStorage.instance.SetIntValue ("catSkinType", 
		                                        (int) currentSkinType);

		string skinName = GetCurrentSkinName ();
		path = "Textures/NewCatParts/" + skinName + "/cat_head_01";
		headRenderer.sprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/NewCatParts/" + skinName + "/cat_body_01";
		bodyRenderer.sprite = Resources.Load<UnityEngine.Sprite>(path);
		if (CatSkinChanged != null) {
			CatSkinChanged ();
		}
	}
}
