using UnityEngine;
using System.Collections;

public class KeepItSquare : MonoBehaviour {

	// Use this for initialization
	void Start () {
		RectTransform rt = GetComponent<RectTransform> ();
		if (rt) {
			Rect r = rt.rect;
			float height = r.height;
			float width = r.width;
			if (height > width) {
				rt.localScale = new Vector2(height/width, 1);
			} else {
				rt.localScale = new Vector2(1, width/height);
			}
		}
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
