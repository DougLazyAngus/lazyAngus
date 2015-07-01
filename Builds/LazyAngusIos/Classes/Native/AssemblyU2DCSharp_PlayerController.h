#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// ConeOfViewRenderer
struct ConeOfViewRenderer_t402;
// HeadMovement
struct HeadMovement_t424;
// TweakableParams
struct TweakableParams_t401;
// PlayerController
struct PlayerController_t429;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerController
struct  PlayerController_t429  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject PlayerController::rightPawGameObject
	GameObject_t284 * ___rightPawGameObject_2;
	// UnityEngine.GameObject PlayerController::leftPawGameObject
	GameObject_t284 * ___leftPawGameObject_3;
	// ConeOfViewRenderer PlayerController::coneOfView
	ConeOfViewRenderer_t402 * ___coneOfView_4;
	// HeadMovement PlayerController::headMovement
	HeadMovement_t424 * ___headMovement_5;
	// PlayerController/BodyMovementType PlayerController::bodyMovement
	int32_t ___bodyMovement_6;
	// System.Single PlayerController::targetTurnAngleDegrees
	float ___targetTurnAngleDegrees_7;
	// System.Single PlayerController::currentTurnAngleDegrees
	float ___currentTurnAngleDegrees_8;
	// UnityEngine.Vector3 PlayerController::dragAnchorCat
	Vector3_t412  ___dragAnchorCat_9;
	// System.Single PlayerController::dragAnchorAngleCat
	float ___dragAnchorAngleCat_10;
	// TweakableParams PlayerController::tweakableParams
	TweakableParams_t401 * ___tweakableParams_11;
};
struct PlayerController_t429_StaticFields{
	// PlayerController PlayerController::<instance>k__BackingField
	PlayerController_t429 * ___U3CinstanceU3Ek__BackingField_12;
};
