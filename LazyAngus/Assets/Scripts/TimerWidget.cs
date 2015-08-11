using UnityEngine;
using System.Collections;

public class TimerWidget : WorldRelativeGUIElement {
	GameObject worldCanvasGameObject;
	RectTransform rectTransform;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Configure(float lifespan, 
	               Vector3 worldLocation) {
		worldCanvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		SetParentCanvasGameObject (worldCanvasGameObject);

		rectTransform = GetComponent<RectTransform>();

		Vector3 canvasPosition = WorldPositionToParentCanvasPosition(worldLocation);
		
		rectTransform.localPosition = canvasPosition;
	}
}
