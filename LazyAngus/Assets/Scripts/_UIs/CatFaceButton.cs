using UnityEngine;
using System.Collections;

public class CatFaceButton : MonoBehaviour {
	CatSkin.CatFaceType catFaceType;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetCatFaceType(CatSkin.CatFaceType t) {
		catFaceType = t;
	}

	public void OnButtonClicked() {
		CatSkin.instance.SetCurrentSkin (catFaceType);
	}
}
