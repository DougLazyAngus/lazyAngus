#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t510;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t509;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController
struct  TimeController_t510  : public MonoBehaviour_t67
{
	// TimeController/PauseChangedEventHandler TimeController::PauseChanged
	PauseChangedEventHandler_t509 * ___PauseChanged_3;
	// System.Boolean TimeController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_4;
};
struct TimeController_t510_StaticFields{
	// TimeController TimeController::instance
	TimeController_t510 * ___instance_2;
};
