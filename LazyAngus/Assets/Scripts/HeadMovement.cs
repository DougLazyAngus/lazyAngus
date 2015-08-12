using UnityEngine;
using System.Collections;

public class HeadMovement : MonoBehaviour {
	
	public float moveToSpeedDeg = 360f;
	public float moveHomeSpeedDeg = 90f;
	public float maxTurnDeg = 25f;
	public float holdTime = 0.2f;

	float targetDeg;
	float currentDeg;

	enum MovementPhase {
		STABLE = 0,
		MOVING_TO,
		HOLDING,
		MOVING_FROM,

		NUM_PHASES,
	};

	MovementPhase phase;
	float phaseStartTime;

	// Use this for initialization
	void Start () {
		phase = MovementPhase.STABLE;	
		currentDeg = 0;
	}
	
	// Update is called once per frame
	void Update () {
		switch (phase) {
		case MovementPhase.MOVING_TO:
			if (MoveTowards (targetDeg, moveToSpeedDeg)) {
				phase = MovementPhase.HOLDING;
				phaseStartTime = Time.time;
			} 
			break;
		case MovementPhase.HOLDING:
			if (Time.time > phaseStartTime + holdTime) {
				phase = MovementPhase.MOVING_FROM;
			}
			break;
		case MovementPhase.MOVING_FROM: 
			if (MoveTowards (0, moveHomeSpeedDeg)) {
				phase = MovementPhase.STABLE;
			}
			break;
		}
	}




	bool MoveTowards(float targetDeg, float speedDeg) {
		if (targetDeg == currentDeg) {
			return true;
		}

		bool doneMoving = false;
		if (targetDeg < currentDeg) {
			currentDeg -= Time.deltaTime * speedDeg;
			if (currentDeg < targetDeg) {
				currentDeg = targetDeg;
				doneMoving = true;
			}
		} else {
			currentDeg += Time.deltaTime * speedDeg;
			if (currentDeg > targetDeg) {
				currentDeg = targetDeg;
				doneMoving = true;
			}
		}

		transform.localRotation = Quaternion.Euler (0f, 0f, currentDeg);

		return doneMoving;
	}

	public void LookTowards(Vector3 location) {
		float radAngle = Mathf.Atan2 (location.y, location.x);
		float degAngle = radAngle * Mathf.Rad2Deg;

		float maxPawAngle = ConeOfViewController.instance.actualAngleRange/2;
		degAngle = Mathf.Clamp (degAngle, -maxPawAngle, maxPawAngle);
		float desiredHeadAngle = degAngle * maxTurnDeg / maxPawAngle;

		targetDeg = desiredHeadAngle;
		phase = MovementPhase.MOVING_TO;
	}



}
