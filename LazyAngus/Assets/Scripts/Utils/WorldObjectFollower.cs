using UnityEngine;
using System.Collections;

public class WorldObjectFollower : WorldRelativeGUIElement {
	GameObject objectToFollow;
	RectTransform myRectTransform;
	bool followeeMoves;
	bool positionDirty;

	public Vector3 offset = new Vector3(0, 0, 0);
	public float rotation = 0;
	
	void Start() {
		// Parented by 'world' canvas.
		GameObject worldCanvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		SetParentCanvasGameObject (worldCanvasGameObject);

		myRectTransform = gameObject.GetComponent <RectTransform> ();
	}
	  
	// Update is called once per frame
	void Update () { 
		if (myRectTransform) {
			if (followeeMoves || positionDirty) {
				positionDirty = false;
				ResetPosition ();
			}
		}
	}

	public void SetObjectToFollow(GameObject go, 
	                              Vector3 offset,
	                              bool followeeMoves = true) {
		objectToFollow = go;
		this.offset = offset;
		this.followeeMoves = followeeMoves;
		positionDirty = true;
	}

	public void ResetPosition() {
		Vector3 canvasPosition = WorldPositionToParentCanvasPosition(
			objectToFollow.transform.position);

		myRectTransform.localPosition = canvasPosition + offset;
	}
}
