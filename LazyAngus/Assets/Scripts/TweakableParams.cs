using UnityEngine;
using System.Collections;

public class TweakableParams : MonoBehaviour {

	// Boost params.
	public float freezeBoostTime = 3.0f;
	public float freezeBoostMouseSpeedMultipler = 0.1f;
	
	public float energyBoostTime = 7.0f;
	public float energyBoostSwipeSpeedMultiplier = 3.0f;
	public float energyBoostAngleMultiplier = 1.3333f;

	public float poisonBoostTime = 1f;
	
	// Player swipe params.
	public float baseSwipeSpeed = 7.0f;	
	public float swipeInitialPause = 0.3f;
	public float swipeExtendedPause = 0.1f;
	public float swipeRadius = 5.0f;

	// Player view params.
	public float baseSwipeAngleRange = 90.0f;

	// Player Turn params
	public float turnVelocityDegrees = 180f;

	public static TweakableParams instance { get; private set; }
	
	void Awake() {
		instance = this;
	}
}
