﻿#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Collider2D
struct Collider2D_t570;
// GameController
struct GameController_t505;
// BoostConfig
struct BoostConfig_t457;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// PawController
struct  PawController_t490  : public MonoBehaviour_t13
{
	// UnityEngine.Vector3 PawController::swipeLocationCat
	Vector3_t494  ___swipeLocationCat_2;
	// PawController/SwipePhase PawController::swipePhase
	int32_t ___swipePhase_3;
	// System.Single PawController::pauseStarted
	float ___pauseStarted_4;
	// UnityEngine.GameObject PawController::normalPawSpriteGameObject
	GameObject_t352 * ___normalPawSpriteGameObject_5;
	// UnityEngine.GameObject PawController::dangerPawSpriteGameObject
	GameObject_t352 * ___dangerPawSpriteGameObject_6;
	// UnityEngine.GameObject PawController::bigPawSpriteGameObject
	GameObject_t352 * ___bigPawSpriteGameObject_7;
	// UnityEngine.GameObject PawController::bigDangerPawSpriteGameObject
	GameObject_t352 * ___bigDangerPawSpriteGameObject_8;
	// UnityEngine.Collider2D PawController::normalCollider
	Collider2D_t570 * ___normalCollider_9;
	// UnityEngine.Collider2D PawController::bigCollider
	Collider2D_t570 * ___bigCollider_10;
	// System.Single PawController::swipeSpeed
	float ___swipeSpeed_11;
	// System.Int32 PawController::killsThisSwipe
	int32_t ___killsThisSwipe_12;
	// GameController PawController::gameController
	GameController_t505 * ___gameController_13;
	// System.Boolean PawController::registerdForEvents
	bool ___registerdForEvents_14;
	// BoostConfig PawController::boostConfig
	BoostConfig_t457 * ___boostConfig_15;
	// UnityEngine.Transform PawController::pawHomeCatTransform
	Transform_t406 * ___pawHomeCatTransform_16;
	// UnityEngine.Transform PawController::shoulderJointCatTransform
	Transform_t406 * ___shoulderJointCatTransform_17;
	// System.Single PawController::pawHomeCatTransformMagnitude
	float ___pawHomeCatTransformMagnitude_18;
};
