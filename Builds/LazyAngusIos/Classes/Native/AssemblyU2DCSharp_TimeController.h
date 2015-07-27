#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t557;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t556;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t557  : public MonoBehaviour_t67
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t556 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t557_StaticFields{
	// TimeController TimeController::instance
	TimeController_t557 * ___instance_2;
};
