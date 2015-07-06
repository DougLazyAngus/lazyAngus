﻿#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// ConeOfViewRenderer
struct ConeOfViewRenderer_t402;
// HeadMovement
struct HeadMovement_t431;
// TweakableParams
struct TweakableParams_t401;
// TipConfig
struct TipConfig_t438;
// PlayerController
struct PlayerController_t472;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerController
struct  PlayerController_t472  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject PlayerController::rightPawGameObject
	GameObject_t284 * ___rightPawGameObject_3;
	// UnityEngine.GameObject PlayerController::leftPawGameObject
	GameObject_t284 * ___leftPawGameObject_4;
	// ConeOfViewRenderer PlayerController::coneOfView
	ConeOfViewRenderer_t402 * ___coneOfView_5;
	// HeadMovement PlayerController::headMovement
	HeadMovement_t431 * ___headMovement_6;
	// UnityEngine.GameObject PlayerController::fartPuffPrototype
	GameObject_t284 * ___fartPuffPrototype_7;
	// UnityEngine.GameObject PlayerController::butthole
	GameObject_t284 * ___butthole_8;
	// PlayerController/BodyMovementType PlayerController::bodyMovement
	int32_t ___bodyMovement_9;
	// System.Single PlayerController::targetTurnAngleDegrees
	float ___targetTurnAngleDegrees_10;
	// System.Single PlayerController::currentTurnAngleDegrees
	float ___currentTurnAngleDegrees_11;
	// UnityEngine.Vector3 PlayerController::dragAnchorCat
	Vector3_t414  ___dragAnchorCat_12;
	// System.Single PlayerController::dragAnchorAngleCat
	float ___dragAnchorAngleCat_13;
	// TweakableParams PlayerController::tweakableParams
	TweakableParams_t401 * ___tweakableParams_14;
	// System.Boolean PlayerController::registeredForEvents
	bool ___registeredForEvents_15;
	// TipConfig PlayerController::turningTip
	TipConfig_t438 * ___turningTip_16;
	// System.Single PlayerController::turningTipPause
	float ___turningTipPause_17;
	// System.Single PlayerController::lastFartTime
	float ___lastFartTime_18;
	// System.Single PlayerController::fartPause
	float ___fartPause_19;
};
struct PlayerController_t472_StaticFields{
	// PlayerController PlayerController::<instance>k__BackingField
	PlayerController_t472 * ___U3CinstanceU3Ek__BackingField_20;
};
