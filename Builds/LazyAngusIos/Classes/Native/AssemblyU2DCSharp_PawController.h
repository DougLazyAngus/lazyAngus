#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Collider2D
struct Collider2D_t578;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// PawController
struct  PawController_t493  : public MonoBehaviour_t13
{
	// UnityEngine.Vector3 PawController::swipeLocationCat
	Vector3_t497  ___swipeLocationCat_2;
	// PawController/SwipePhase PawController::swipePhase
	int32_t ___swipePhase_3;
	// System.Single PawController::pauseStarted
	float ___pauseStarted_4;
	// UnityEngine.GameObject PawController::normalPawArtGameObject
	GameObject_t352 * ___normalPawArtGameObject_5;
	// UnityEngine.GameObject PawController::dangerPawArtGameObject
	GameObject_t352 * ___dangerPawArtGameObject_6;
	// UnityEngine.GameObject PawController::bigPawArtGameObject
	GameObject_t352 * ___bigPawArtGameObject_7;
	// UnityEngine.GameObject PawController::bigDangerPawArtGameObject
	GameObject_t352 * ___bigDangerPawArtGameObject_8;
	// UnityEngine.Collider2D PawController::normalCollider
	Collider2D_t578 * ___normalCollider_9;
	// UnityEngine.Collider2D PawController::bigCollider
	Collider2D_t578 * ___bigCollider_10;
	// System.Single PawController::swipeSpeed
	float ___swipeSpeed_11;
	// System.Int32 PawController::killsThisSwipe
	int32_t ___killsThisSwipe_12;
	// System.Boolean PawController::registerdForEvents
	bool ___registerdForEvents_13;
	// UnityEngine.Transform PawController::pawHomeCatTransform
	Transform_t406 * ___pawHomeCatTransform_14;
	// UnityEngine.Transform PawController::shoulderJointCatTransform
	Transform_t406 * ___shoulderJointCatTransform_15;
	// System.Single PawController::pawHomeCatTransformMagnitude
	float ___pawHomeCatTransformMagnitude_16;
};
