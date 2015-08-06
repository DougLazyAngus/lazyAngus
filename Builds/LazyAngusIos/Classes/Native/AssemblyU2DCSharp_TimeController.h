#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t610;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t609;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t610  : public MonoBehaviour_t13
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t609 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t610_StaticFields{
	// TimeController TimeController::instance
	TimeController_t610 * ___instance_2;
};
