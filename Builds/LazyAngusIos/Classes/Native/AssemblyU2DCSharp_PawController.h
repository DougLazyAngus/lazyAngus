#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t619;
// UnityEngine.Transform
struct Transform_t406;
// TimerWidget
struct TimerWidget_t620;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// PawController
struct  PawController_t532  : public MonoBehaviour_t13
{
	// UnityEngine.Vector3 PawController::swipeLocationCat
	Vector3_t536  ___swipeLocationCat_2;
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
	// UnityEngine.CircleCollider2D PawController::normalCollider
	CircleCollider2D_t619 * ___normalCollider_9;
	// UnityEngine.CircleCollider2D PawController::bigCollider
	CircleCollider2D_t619 * ___bigCollider_10;
	// System.Single PawController::debugTimer
	float ___debugTimer_11;
	// System.Single PawController::swipeSpeed
	float ___swipeSpeed_12;
	// System.Single PawController::initialPauseLength
	float ___initialPauseLength_13;
	// System.Int32 PawController::killsThisSwipe
	int32_t ___killsThisSwipe_14;
	// System.Boolean PawController::registerdForEvents
	bool ___registerdForEvents_15;
	// UnityEngine.Transform PawController::pawHomeCatTransform
	Transform_t406 * ___pawHomeCatTransform_16;
	// UnityEngine.Transform PawController::shoulderJointCatTransform
	Transform_t406 * ___shoulderJointCatTransform_17;
	// System.Single PawController::pawHomeCatTransformMagnitude
	float ___pawHomeCatTransformMagnitude_18;
	// UnityEngine.GameObject PawController::timerWidgetPrototype
	GameObject_t352 * ___timerWidgetPrototype_19;
	// TimerWidget PawController::timerWidget
	TimerWidget_t620 * ___timerWidget_20;
};
