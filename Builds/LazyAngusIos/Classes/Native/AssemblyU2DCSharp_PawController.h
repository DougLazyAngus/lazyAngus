#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.Collider2D
struct Collider2D_t483;
// GameController
struct GameController_t422;
// BoostConfig
struct BoostConfig_t373;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t405;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// PawController
struct  PawController_t409  : public MonoBehaviour_t67
{
	// UnityEngine.Vector3 PawController::swipeLocationCat
	Vector3_t413  ___swipeLocationCat_2;
	// PawController/SwipePhase PawController::swipePhase
	int32_t ___swipePhase_3;
	// System.Single PawController::pauseStarted
	float ___pauseStarted_4;
	// UnityEngine.GameObject PawController::normalPawSpriteGameObject
	GameObject_t284 * ___normalPawSpriteGameObject_5;
	// UnityEngine.GameObject PawController::dangerPawSpriteGameObject
	GameObject_t284 * ___dangerPawSpriteGameObject_6;
	// UnityEngine.GameObject PawController::bigPawSpriteGameObject
	GameObject_t284 * ___bigPawSpriteGameObject_7;
	// UnityEngine.GameObject PawController::bigDangerPawSpriteGameObject
	GameObject_t284 * ___bigDangerPawSpriteGameObject_8;
	// UnityEngine.Collider2D PawController::normalCollider
	Collider2D_t483 * ___normalCollider_9;
	// UnityEngine.Collider2D PawController::bigCollider
	Collider2D_t483 * ___bigCollider_10;
	// System.Single PawController::swipeSpeed
	float ___swipeSpeed_11;
	// System.Int32 PawController::killsThisSwipe
	int32_t ___killsThisSwipe_12;
	// GameController PawController::gameController
	GameController_t422 * ___gameController_13;
	// System.Boolean PawController::registerdForEvents
	bool ___registerdForEvents_14;
	// BoostConfig PawController::boostConfig
	BoostConfig_t373 * ___boostConfig_15;
	// UnityEngine.Transform PawController::pawHomeCatTransform
	Transform_t323 * ___pawHomeCatTransform_16;
	// UnityEngine.Transform PawController::shoulderJointCatTransform
	Transform_t323 * ___shoulderJointCatTransform_17;
	// System.Single PawController::pawHomeCatTransformMagnitude
	float ___pawHomeCatTransformMagnitude_18;
	// UnityEngine.AudioSource[] PawController::audioSources
	AudioSourceU5BU5D_t405* ___audioSources_19;
};
