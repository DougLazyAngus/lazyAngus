using UnityEngine;
using System.Collections;

public class UIFollower : MonoBehaviour {
	public Transform parentTransform;
	private RectTransform myRectTransform;
	public Vector2 offset;

	void Start() {
		myRectTransform = gameObject.GetComponent <RectTransform> ();
	}
	  
	// Update is called once per frame
	void Update () { 
		if (myRectTransform) {
			Vector2 screenPoint = RectTransformUtility.WorldToScreenPoint (Camera.main, 
			                                                               parentTransform.position);
			myRectTransform.position = screenPoint + offset;
		}
	}
}
