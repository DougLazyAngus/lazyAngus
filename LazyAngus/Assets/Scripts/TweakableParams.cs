using UnityEngine;
using System.Collections;

public class TweakableParams : MonoBehaviour {

	// Boost params.
	public const float fastPawsPauseMultiplier = 0.333f;
	public const float fastPawsSwipeSpeedMultiplier = 1.0f;

	public const float goodEyesAngleMultiplier = 1.6666f;

	public const float normalPawRadius = 0.4f;
	public const float bigPawsMultiplier = 2.0f;

	public const float fartSlothMultiplier = 0.3f;

	public const int miceKilledPerPoison = 1;

	// Player swipe params.
	public const float baseSwipeSpeed = 14.0f;	
	public const float swipeInitialPause = 0.5f;
	public const float swipeExtendedPause = 0.1f;
	public const float swipeRadius = 4.6f;

	public const bool swipeCancelsCurrentSwipe = false;

	// Player view params.
	public const float baseSwipeAngleRange = 90.0f;

	// Player Turn params
	public const float turnVelocityDegrees = 180f;
	
	// Mouse track params.
	public const int numTracks = 3;

	// Mouse hole params.
	public const int initialTrapsPerHole = 1;

	// Initial money and boosts.
	public const int initialMoney = 1;
	public const int initialBoosts = 0;

	public const int debugInitialMoney = 100;
	public const int debugInitialBoosts = 5;
	public const int debugInitialTrapsPerHole = 6;

	public const float fastPawsBoostTime = 15.0f;
	public const float goodEyesBoostTime = 15.0f;
	public const float bigPawsBoostTime = 15.0f;
	public const float fartBoostTime = 7.0f;
	public const float poisonPawsBoostTime = 7.0f;

	public const float flyingAnimationTime = 1.0f;

	// Camera effects
	public const float cameraZoomInPause = 0.2f;
	public const float cameraZoomInTime = 0.5f;
	public const float totalCameraZoomInTime = (cameraZoomInPause + cameraZoomInTime);

	public const float cameraZoomOutPause = 0.5f;
	public const float cameraZoomOutTime = 1.4f;
	public const float totalCameraZoomOutTime = (cameraZoomOutPause + cameraZoomOutTime);

	// Timing issues
	public const float playOverPendingPause = totalCameraZoomOutTime + 0.3f;
	public const float playStartMousePause = totalCameraZoomInTime + 0.3f;

	public static int GetInitialMoney() {
		if (DebugConfig.instance.useDebugValues) {
			return debugInitialMoney;
		} else {
			return initialMoney;
		}
	}
	
	public static int GetInitialBoosts ()
	{
		if (DebugConfig.instance.useDebugValues) {
			return debugInitialBoosts;
		} else {
			return initialBoosts;
		}
	}
	
	public static int GetInitialTrapsPerHole ()
	{
		if (DebugConfig.instance.useDebugValues) {
			return debugInitialTrapsPerHole;
		} else {
			return initialTrapsPerHole;
		}
	}
}
