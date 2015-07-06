using UnityEngine;
using System.Collections;

public class TweakableParams : MonoBehaviour {

	// Boost params.
	public float fastPawsSwipeSpeedMultiplier = 3.0f;

	public float goodEyesAngleMultiplier = 1.3333f;

	public float bigPawsMultiplier = 2.0f;

	public float fartSlothMultiplier = 0.3f;


	// Player swipe params.
	public float baseSwipeSpeed = 7.0f;	
	public float swipeInitialPause = 0.3f;
	public float swipeExtendedPause = 0.1f;
	public float swipeRadius = 5.0f;

	// Player view params.
	public float baseSwipeAngleRange = 90.0f;

	// Player Turn params
	public float turnVelocityDegrees = 180f;
	
	// Mouse track params.
	public int numTracks = 3;

	// Mouse hole params.
	public int initialMicePerHole = 2;

	// Initial money and boosts.
	public int initialMoney = 1;
	public int initialBoosts = 0;

	public int debugInitialMoney = 100;
	public int debugInitialBoosts = 5;
	public int debugInitialMicePerHole = 6;
	
	public static TweakableParams instance { get; private set; }

	public int GetInitialMoney() {
		if (DebugConfig.instance.isDebug) {
			return debugInitialMoney;
		} else {
			return initialMoney;
		}
	}
	
	public int GetInitialBoosts() {
		if (DebugConfig.instance.isDebug) {
			return debugInitialBoosts;
		} else {
			return initialBoosts;
		}
	}
	
	public int GetInitialMicePerHole() {
		if (DebugConfig.instance.isDebug) {
			return debugInitialMicePerHole;
		} else {
			return initialMicePerHole;
		}
	}

	void Awake() {
		instance = this;
	}
}
