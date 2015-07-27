#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t312;
// ConeOfViewRenderer
struct ConeOfViewRenderer_t441;
// HeadMovement
struct HeadMovement_t475;
// TipConfig
struct TipConfig_t433;
// PlayerController
struct PlayerController_t530;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerController
struct  PlayerController_t530  : public MonoBehaviour_t66
{
	// UnityEngine.GameObject PlayerController::rightPawGameObject
	GameObject_t312 * ___rightPawGameObject_3;
	// UnityEngine.GameObject PlayerController::leftPawGameObject
	GameObject_t312 * ___leftPawGameObject_4;
	// ConeOfViewRenderer PlayerController::coneOfView
	ConeOfViewRenderer_t441 * ___coneOfView_5;
	// HeadMovement PlayerController::headMovement
	HeadMovement_t475 * ___headMovement_6;
	// UnityEngine.GameObject PlayerController::fartPuffPrototype
	GameObject_t312 * ___fartPuffPrototype_7;
	// UnityEngine.GameObject PlayerController::butthole
	GameObject_t312 * ___butthole_8;
	// PlayerController/BodyMovementType PlayerController::bodyMovement
	int32_t ___bodyMovement_9;
	// System.Single PlayerController::targetTurnAngleDegrees
	float ___targetTurnAngleDegrees_10;
	// System.Single PlayerController::currentTurnAngleDegrees
	float ___currentTurnAngleDegrees_11;
	// UnityEngine.Vector3 PlayerController::dragAnchorCat
	Vector3_t451  ___dragAnchorCat_12;
	// System.Single PlayerController::dragAnchorAngleCat
	float ___dragAnchorAngleCat_13;
	// System.Boolean PlayerController::registeredForEvents
	bool ___registeredForEvents_14;
	// TipConfig PlayerController::turningTip
	TipConfig_t433 * ___turningTip_15;
	// System.Single PlayerController::turningTipPause
	float ___turningTipPause_16;
	// System.Single PlayerController::lastFartTime
	float ___lastFartTime_17;
	// System.Single PlayerController::fartPause
	float ___fartPause_18;
};
struct PlayerController_t530_StaticFields{
	// PlayerController PlayerController::<instance>k__BackingField
	PlayerController_t530 * ___U3CinstanceU3Ek__BackingField_19;
};
