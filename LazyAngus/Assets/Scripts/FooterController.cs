using UnityEngine;
using System.Collections;

public class FooterController : MonoBehaviour {
	public RectTransform [] contents;

	// Use this for initialization
	void Start () {
		float desiredHeight = GoogleAdController.GetBannerHeight ();
		RectTransform rt = GetComponent<RectTransform> ();
		float actualHeight = rt.rect.height;

		float scale = desiredHeight / actualHeight;

		for (int i = 0; i < contents.Length; i++) {
			contents[i].localScale = new Vector2(scale, scale);
		}

		rt.sizeDelta = new Vector2 (0, desiredHeight);
	}
}
