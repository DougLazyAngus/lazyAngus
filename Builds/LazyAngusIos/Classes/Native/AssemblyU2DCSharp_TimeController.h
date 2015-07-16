#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t518;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t517;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t518  : public MonoBehaviour_t67
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t517 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t518_StaticFields{
	// TimeController TimeController::instance
	TimeController_t518 * ___instance_2;
};
