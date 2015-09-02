#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// HeadMovement
struct HeadMovement_t573;
// TipConfig
struct TipConfig_t513;
// PlayerController
struct PlayerController_t628;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
// PlayerController
struct  PlayerController_t628  : public MonoBehaviour_t13
{
	// System.Single PlayerController::startCatAngle
	float ___startCatAngle_2;
	// UnityEngine.GameObject PlayerController::rightPawGameObject
	GameObject_t352 * ___rightPawGameObject_3;
	// UnityEngine.GameObject PlayerController::leftPawGameObject
	GameObject_t352 * ___leftPawGameObject_4;
	// HeadMovement PlayerController::headMovement
	HeadMovement_t573 * ___headMovement_5;
	// UnityEngine.GameObject PlayerController::fartPuffPrototype
	GameObject_t352 * ___fartPuffPrototype_6;
	// UnityEngine.GameObject PlayerController::butthole
	GameObject_t352 * ___butthole_7;
	// System.Single PlayerController::targetTurnAngleDegrees
	float ___targetTurnAngleDegrees_8;
	// System.Single PlayerController::currentTurnAngleDegrees
	float ___currentTurnAngleDegrees_9;
	// UnityEngine.Vector3 PlayerController::dragAnchorCat
	Vector3_t538  ___dragAnchorCat_10;
	// System.Single PlayerController::dragAnchorAngleCat
	float ___dragAnchorAngleCat_11;
	// System.Boolean PlayerController::registeredForEvents
	bool ___registeredForEvents_12;
	// TipConfig PlayerController::turningTip
	TipConfig_t513 * ___turningTip_13;
	// System.Single PlayerController::turningTipPause
	float ___turningTipPause_14;
	// System.Single PlayerController::lastFartTime
	float ___lastFartTime_15;
	// System.Single PlayerController::fartPause
	float ___fartPause_16;
	// PlayerController/BodyMovementType PlayerController::<bodyMovement>k__BackingField
	int32_t ___U3CbodyMovementU3Ek__BackingField_17;
};
struct PlayerController_t628_StaticFields{
	// PlayerController PlayerController::<instance>k__BackingField
	PlayerController_t628 * ___U3CinstanceU3Ek__BackingField_18;
};
