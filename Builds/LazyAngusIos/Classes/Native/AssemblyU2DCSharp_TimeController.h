#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t488;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t487;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t488  : public MonoBehaviour_t67
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t487 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t488_StaticFields{
	// TimeController TimeController::instance
	TimeController_t488 * ___instance_2;
};
