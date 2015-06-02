using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public GameObject rightPawGameObject;
	public GameObject leftPawGameObject;
	public GameObject coneOfViewGameObject;

	private bool dragging = false;

	// When I start dragging on cat butt, dragAnchor = cat coords of touched
	// point on butt.  Flatten y value to 0.
	private Vector3 dragAnchorCat;
	// When I start dragging on cat butt, dragAngleAngle = angle from 
	// cat fwd (0, 0, 1) to dragAnchorOnCat.
	private float dragAnchorAngleCat;

	ConeOfViewRenderer coneOfView;

	// Use this for initialization
	void Start () {
		coneOfView = coneOfViewGameObject.GetComponent<ConeOfViewRenderer> ();
	}

	// Update is called once per frame
	void Update () {
		if (dragging) {
			UpdateDrag ();
		}
	}

	void UpdateDrag() {
		Vector3 clickPositionScreen;
		bool isClicked = Utilities.GetClickPosition (out clickPositionScreen);
		if (!isClicked) {
			dragging = false;
			return;
		}

		Vector3 clickPositionWorld = Camera.main.ScreenToWorldPoint (clickPositionScreen);
		Vector3 clickPositionCat = transform.InverseTransformPoint (clickPositionWorld);


		float clickAngleCat = Utilities.GetYAngle (clickPositionCat);

		transform.Rotate (new Vector3(0.0f, clickAngleCat - dragAnchorAngleCat, 0.0f));
	}

	public void HandleTurnClickStart(RaycastHit hitPoint) {
		dragging = true;

		dragAnchorCat = transform.InverseTransformPoint(hitPoint.point);
		dragAnchorCat.y = 0.0f;
		dragAnchorAngleCat = Utilities.GetYAngle (dragAnchorCat);

		rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
		leftPawGameObject.GetComponent<PawController> ().CancelSwipe();
	}  

	public void	HandleSlapClickStart(RaycastHit hitPoint) {

		Vector3 swipeLocationCat = transform.InverseTransformPoint (hitPoint.point);

		float angle = Utilities.GetYAngle (swipeLocationCat);

		GameObject paw = null;
		if (swipeLocationCat.magnitude <= coneOfView.viewRadius) {
			if (angle >= 0 && 
				angle <= coneOfView.swipeAngleRange / 2) {
				paw = rightPawGameObject;
			} else if (angle < 0 && 
				angle >= -coneOfView.swipeAngleRange / 2) {
				paw = leftPawGameObject;
			}
		}

		if (paw) {
			paw.GetComponent<PawController>().Swipe (swipeLocationCat);
		}
	}

	void OnApplicationFocus(bool focusStatus) {
		if (!focusStatus) {
			dragging = false;
		}
	}
		
}
		