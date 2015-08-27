#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t657;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t656;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t657  : public MonoBehaviour_t13
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t656 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t657_StaticFields{
	// TimeController TimeController::instance
	TimeController_t657 * ___instance_2;
};
