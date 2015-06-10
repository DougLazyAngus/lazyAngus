using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	enum BodyMovementType {
		BODY_MOVEMENT_STILL = 0,
		BODY_MOVEMENT_TURNING,
		BODY_MOVEMENT_DRAGGING,
	};

	public GameObject rightPawGameObject;
	public GameObject leftPawGameObject;
	public GameObject coneOfViewGameObject;
	
	private BodyMovementType bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;

	private float targetTurnAngleDegrees;
	private float currentTurnAngleDegrees;

	// When I start dragging on cat butt, dragAnchor = cat coords of touched
	// point on butt.  Flatten y value to 0.
	private Vector3 dragAnchorCat;
	// When I start dragging on cat butt, dragAngleAngle = angle from 
	// cat fwd (0, 0, 1) to dragAnchorOnCat.
	private float dragAnchorAngleCat;

	public static PlayerController instance { get; private set; }

	ConeOfViewRenderer coneOfView;
	TweakableParams tweakableParams;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
		tweakableParams = TweakableParams.instance;
		coneOfView = coneOfViewGameObject.GetComponent<ConeOfViewRenderer> ();
	}

	// Update is called once per frame
	void Update () {
		switch (bodyMovement) {
		case BodyMovementType.BODY_MOVEMENT_DRAGGING:
			UpdateDrag ();
			break;
		case BodyMovementType.BODY_MOVEMENT_TURNING:
			UpdateTurn ();
			break;
		}
	}

	void UpdateTurn() {
		if (currentTurnAngleDegrees < targetTurnAngleDegrees) {
			currentTurnAngleDegrees += TweakableParams.instance.turnVelocityDegrees * Time.deltaTime;
			if (currentTurnAngleDegrees > targetTurnAngleDegrees) {
				currentTurnAngleDegrees = targetTurnAngleDegrees;
				bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			}
		} else {
			currentTurnAngleDegrees -= TweakableParams.instance.turnVelocityDegrees * Time.deltaTime;
			if (currentTurnAngleDegrees < targetTurnAngleDegrees) {
				currentTurnAngleDegrees = targetTurnAngleDegrees;
				bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			}
		}
		transform.rotation = Quaternion.Euler (0, currentTurnAngleDegrees, 0);

	}

	void UpdateDrag() {
		Vector3 clickPositionScreen;
		bool isClicked = InputHandler.instance.GetWorldClickPosition (out clickPositionScreen);

		if (!isClicked) {
			bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			return;
		}

		Vector3 clickPositionWorld = Camera.main.ScreenToWorldPoint (clickPositionScreen);
		Vector3 clickPositionCat = transform.InverseTransformPoint (clickPositionWorld);

		float clickAngleCat = Utilities.GetYAngle (clickPositionCat);

		transform.Rotate (new Vector3(0.0f, clickAngleCat - dragAnchorAngleCat, 0.0f));
	}

	public void HandleTurnClickStart(RaycastHit hitPoint) {
		bodyMovement = BodyMovementType.BODY_MOVEMENT_DRAGGING;

		dragAnchorCat = transform.InverseTransformPoint(hitPoint.point);
		dragAnchorCat.y = 0.0f;
		dragAnchorAngleCat = Utilities.GetYAngle (dragAnchorCat);

		rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
		leftPawGameObject.GetComponent<PawController> ().CancelSwipe();
	}  

	public void	HandleSlapClickStart(RaycastHit hitPoint) {

		Vector3 swipeLocationCat = transform.InverseTransformPoint (hitPoint.point);

		// If outside of reach radius, ignore altogether.
		if (swipeLocationCat.magnitude > tweakableParams.swipeRadius) {
			return;
		}

		// Is this a slap for right paw, left paw, or neither?
		float angle = Utilities.GetYAngle (swipeLocationCat);
		GameObject paw = null;
		if (angle >= 0 && 
			angle <= coneOfView.actualAngleRange / 2) {
			paw = rightPawGameObject;
		} else if (angle < 0 && 
		           angle >= -coneOfView.actualAngleRange / 2) {
			paw = leftPawGameObject;
		}

		if (paw) {
			// If for a paw, do the slap.
			paw.GetComponent<PawController> ().Swipe (swipeLocationCat);
		} else {
			// Otherwise start turning to face this location.
			currentTurnAngleDegrees = transform.rotation.eulerAngles.y;
			targetTurnAngleDegrees = angle + currentTurnAngleDegrees;
			bodyMovement = BodyMovementType.BODY_MOVEMENT_TURNING;

			rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
			leftPawGameObject.GetComponent<PawController> ().CancelSwipe();
		}
	}

	void OnApplicationFocus(bool focusStatus) {
		if (!focusStatus) {
			bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
		}
	}
		
}
		