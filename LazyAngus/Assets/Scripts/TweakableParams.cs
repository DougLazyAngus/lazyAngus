using UnityEngine;
using System.Collections;

public class TweakableParams : MonoBehaviour {

	// Boost params.
	public const float fastPawsSwipeSpeedMultiplier = 3.0f;

	public const float goodEyesAngleMultiplier = 1.3333f;

	public const float bigPawsMultiplier = 2.0f;

	public const float fartSlothMultiplier = 0.3f;


	// Player swipe params.
	public const float baseSwipeSpeed = 7.0f;	
	public const float swipeInitialPause = 0.1f;
	public const float swipeExtendedPause = 0.1f;
	public const float swipeRadius = 5.0f;

	// Player view params.
	public const float baseSwipeAngleRange = 90.0f;

	// Player Turn params
	public const float turnVelocityDegrees = 180f;
	
	// Mouse track params.
	public const int numTracks = 3;

	// Mouse hole params.
	public const int initialMicePerHole = 2;

	// Initial money and boosts.
	public const int initialMoney = 1;
	public const int initialBoosts = 0;

	public const int debugInitialMoney = 100;
	public const int debugInitialBoosts = 5;
	public const int debugInitialMicePerHole = 6;

	public const float fastPawsBoostTime = 7.0f;
	public const float goodEyesBoostTime = 7.0f;
	public const float bigPawsBoostTime = 7.0f;
	public const float fartBoostTime = 7.0f;
	public const float poisonPawsBoostTime = 3.0f;

	public static int GetInitialMoney() {
		if (DebugConfig.instance.isDebug) {
			return debugInitialMoney;
		} else {
			return initialMoney;
		}
	}
	
	public static int GetInitialBoosts ()
	{
		if (DebugConfig.instance.isDebug) {
			return debugInitialBoosts;
		} else {
			return initialBoosts;
		}
	}
	
	public static int GetInitialMicePerHole ()
	{
		if (DebugConfig.instance.isDebug) {
			return debugInitialMicePerHole;
		} else {
			return initialMicePerHole;
		}
	}
}
