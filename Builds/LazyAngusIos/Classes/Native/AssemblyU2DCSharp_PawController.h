#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t616;
// UnityEngine.Transform
struct Transform_t406;
// TimerWidget
struct TimerWidget_t617;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// PawController
struct  PawController_t613  : public MonoBehaviour_t13
{
	// UnityEngine.Vector3 PawController::nextSwipeLocationCat
	Vector3_t534  ___nextSwipeLocationCat_2;
	// UnityEngine.Vector3 PawController::currentSwipeLocationCat
	Vector3_t534  ___currentSwipeLocationCat_3;
	// PawController/SwipePhase PawController::swipePhase
	int32_t ___swipePhase_4;
	// System.Single PawController::timeStartNextSwipe
	float ___timeStartNextSwipe_5;
	// System.Single PawController::extendedPauseStarted
	float ___extendedPauseStarted_6;
	// UnityEngine.GameObject PawController::normalPawArtGameObject
	GameObject_t352 * ___normalPawArtGameObject_7;
	// UnityEngine.GameObject PawController::dangerPawArtGameObject
	GameObject_t352 * ___dangerPawArtGameObject_8;
	// UnityEngine.GameObject PawController::bigPawArtGameObject
	GameObject_t352 * ___bigPawArtGameObject_9;
	// UnityEngine.GameObject PawController::bigDangerPawArtGameObject
	GameObject_t352 * ___bigDangerPawArtGameObject_10;
	// UnityEngine.CircleCollider2D PawController::normalCollider
	CircleCollider2D_t616 * ___normalCollider_11;
	// UnityEngine.CircleCollider2D PawController::bigCollider
	CircleCollider2D_t616 * ___bigCollider_12;
	// System.Single PawController::debugTimer
	float ___debugTimer_13;
	// System.Single PawController::swipeSpeed
	float ___swipeSpeed_14;
	// System.Single PawController::initialPauseLength
	float ___initialPauseLength_15;
	// System.Int32 PawController::killsThisSwipe
	int32_t ___killsThisSwipe_16;
	// System.Boolean PawController::registerdForEvents
	bool ___registerdForEvents_17;
	// UnityEngine.Transform PawController::pawHomeCatTransform
	Transform_t406 * ___pawHomeCatTransform_18;
	// UnityEngine.Transform PawController::shoulderJointCatTransform
	Transform_t406 * ___shoulderJointCatTransform_19;
	// System.Single PawController::pawHomeCatTransformMagnitude
	float ___pawHomeCatTransformMagnitude_20;
	// UnityEngine.GameObject PawController::timerWidgetPrototype
	GameObject_t352 * ___timerWidgetPrototype_21;
	// TimerWidget PawController::timerWidget
	TimerWidget_t617 * ___timerWidget_22;
};
