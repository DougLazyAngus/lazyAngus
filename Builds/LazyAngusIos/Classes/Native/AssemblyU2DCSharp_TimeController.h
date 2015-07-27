#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t558;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t557;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t558  : public MonoBehaviour_t66
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t557 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t558_StaticFields{
	// TimeController TimeController::instance
	TimeController_t558 * ___instance_2;
};
