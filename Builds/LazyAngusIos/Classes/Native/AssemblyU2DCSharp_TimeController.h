#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t602;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t601;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t602  : public MonoBehaviour_t13
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t601 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t602_StaticFields{
	// TimeController TimeController::instance
	TimeController_t602 * ___instance_2;
};
