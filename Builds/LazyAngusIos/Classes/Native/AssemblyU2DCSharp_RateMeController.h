#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// PhaseDelayedEventScheduler
struct PhaseDelayedEventScheduler_t560;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RateMeController
struct  RateMeController_t638  : public MonoBehaviour_t13
{
	// System.Int32 RateMeController::launchFrequency
	int32_t ___launchFrequency_2;
	// System.Single RateMeController::minTimeFrequencySec
	float ___minTimeFrequencySec_3;
	// UnityEngine.GameObject RateMeController::rateMeDialogPrototype
	GameObject_t352 * ___rateMeDialogPrototype_4;
	// System.Single RateMeController::waitToShow
	float ___waitToShow_5;
	// System.Boolean RateMeController::registeredForEvents
	bool ___registeredForEvents_6;
	// System.Single RateMeController::yOffset
	float ___yOffset_7;
	// PhaseDelayedEventScheduler RateMeController::phaseDelayedEventScheduler
	PhaseDelayedEventScheduler_t560 * ___phaseDelayedEventScheduler_8;
};
