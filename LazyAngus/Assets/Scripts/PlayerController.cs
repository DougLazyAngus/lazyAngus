﻿using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	enum BodyMovementType {
		BODY_MOVEMENT_STILL = 0,
		BODY_MOVEMENT_TURNING,
		BODY_MOVEMENT_DRAGGING,
	};

	public const float startCatAngle = 45f;

	public GameObject rightPawGameObject;
	public GameObject leftPawGameObject;
	public ConeOfViewRenderer coneOfView;
	public HeadMovement headMovement;

	public GameObject fartPuffPrototype;
	public GameObject butthole;

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

	bool registeredForEvents;
	
	public TipConfig turningTip;
	public float turningTipPause;

	float lastFartTime;

	public float fartPause;

	void Awake() {
		instance = this;

		turningTip = new TipConfig("turning", 
		                           "Drag my body to turn me faster!");
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		Reset ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GameInstanceChanged +=
			new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
		BoostConfig.instance.BoostActive +=
			new BoostConfig.BoostActiveEventHandler (OnBoostActive);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GameInstanceChanged -=
				new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
			BoostConfig.instance.BoostActive -=
				new BoostConfig.BoostActiveEventHandler (OnBoostActive);
		}
	}

	void OnInstanceChanged() {
		Reset ();
	}

	void OnBoostActive(BoostConfig.BoostType newType, 
	                   BoostConfig.BoostType oldType) {
		if (newType == BoostConfig.BoostType.BOOST_TYPE_FART) {
			MakeFartPuff();
		}
	}

	void Reset() {
		bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
		currentTurnAngleDegrees = startCatAngle;
		targetTurnAngleDegrees = currentTurnAngleDegrees;
		transform.rotation = Quaternion.Euler (0, 0, currentTurnAngleDegrees);
	}

	// Update is called once per frame
	void Update () {
		MaybeMakeFartPuff ();

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
			currentTurnAngleDegrees += TweakableParams.turnVelocityDegrees * Time.deltaTime;
			if (currentTurnAngleDegrees > targetTurnAngleDegrees) {
				currentTurnAngleDegrees = targetTurnAngleDegrees;
				bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			}
		} else {
			currentTurnAngleDegrees -= TweakableParams.turnVelocityDegrees * Time.deltaTime;
			if (currentTurnAngleDegrees < targetTurnAngleDegrees) {
				currentTurnAngleDegrees = targetTurnAngleDegrees;
				bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			}
		}
		transform.rotation = Quaternion.Euler (0, 0, currentTurnAngleDegrees);

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

		float clickAngleCat = Utilities.GetZAngle (clickPositionCat);

		transform.Rotate (new Vector3(0.0f, 0.0f, clickAngleCat - dragAnchorAngleCat));
	}

	public void HandleDragClickStart(Vector2 worldPoint2d) {
		bodyMovement = BodyMovementType.BODY_MOVEMENT_DRAGGING;

		dragAnchorCat = transform.InverseTransformPoint(worldPoint2d);
		dragAnchorCat.z = 0.0f;
		dragAnchorAngleCat = Utilities.GetZAngle (dragAnchorCat);

		rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
		leftPawGameObject.GetComponent<PawController> ().CancelSwipe();
	}  

	public void	HandleSlapClickStart(Vector2 worldPoint2d) {

		Vector3 swipeLocationCat = transform.InverseTransformPoint (worldPoint2d);

		// If outside of reach radius, ignore altogether.
		if (swipeLocationCat.magnitude > TweakableParams.swipeRadius) {
			return;
		}

		// Is this a slap for right paw, left paw, or neither?
		float angle = Utilities.GetZAngle (swipeLocationCat);
		GameObject paw = null;
		if (angle >= 0 && 
			angle <= coneOfView.actualAngleRange / 2) {
			paw = leftPawGameObject;
		} else if (angle < 0 && 
		           angle >= -coneOfView.actualAngleRange / 2) {
			paw = rightPawGameObject;
		}

		if (paw) {
			// If for a paw, do the slap.
			paw.GetComponent<PawController> ().Swipe (swipeLocationCat);
		} else {
			// Otherwise start turning to face this location.
			currentTurnAngleDegrees = transform.rotation.eulerAngles.z;
			targetTurnAngleDegrees = angle + currentTurnAngleDegrees;
			bodyMovement = BodyMovementType.BODY_MOVEMENT_TURNING;

			rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
			leftPawGameObject.GetComponent<PawController> ().CancelSwipe();


			TipController.instance.EnqueueTip(turningTip, 
			                                  turningTipPause);
		}

		headMovement.LookTowards (swipeLocationCat);


	}

	void OnApplicationFocus(bool focusStatus) {
		if (!focusStatus) {
			if (!DebugConfig.instance.isDebug) {
				bodyMovement = BodyMovementType.BODY_MOVEMENT_STILL;
			}
		}
	}  
		
	void MaybeMakeFartPuff() {
		if (BoostConfig.instance.activeBoost == BoostConfig.BoostType.BOOST_TYPE_FART && 
			Time.time > lastFartTime + fartPause) {
			MakeFartPuff ();
		}
	}

	void MakeFartPuff() {
		GameObject fartPuffObject = Instantiate (fartPuffPrototype, 
		                                   butthole.transform.position,
		                                   Quaternion.identity) as GameObject;
		FartPuff fartPuff = fartPuffObject.GetComponent<FartPuff> ();
		fartPuff.SetDirection (transform.rotation * Vector3.left);
		lastFartTime = Time.time;
	}
}
		