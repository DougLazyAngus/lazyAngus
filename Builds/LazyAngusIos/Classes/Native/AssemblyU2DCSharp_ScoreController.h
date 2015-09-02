#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ScoreController
struct  ScoreController_t655  : public MonoBehaviour_t13
{
	// System.Boolean ScoreController::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.GameObject ScoreController::deadMousePrototype
	GameObject_t352 * ___deadMousePrototype_3;
	// UnityEngine.GameObject ScoreController::scoreEffectPrototype
	GameObject_t352 * ___scoreEffectPrototype_4;
	// UnityEngine.GameObject ScoreController::scoreDisplay
	GameObject_t352 * ___scoreDisplay_5;
	// System.Boolean ScoreController::scoreEffectClockwise
	bool ___scoreEffectClockwise_6;
};
