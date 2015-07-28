#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t603;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t602;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t603  : public MonoBehaviour_t13
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t602 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t603_StaticFields{
	// TimeController TimeController::instance
	TimeController_t603 * ___instance_2;
};
