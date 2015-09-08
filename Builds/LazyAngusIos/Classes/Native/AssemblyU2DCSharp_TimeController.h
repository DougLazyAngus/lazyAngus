#pragma once
#include <stdint.h>
// TimeController
struct TimeController_t676;
// TimeController/TimeStateChangedEventHandler
struct TimeStateChangedEventHandler_t675;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"
// TimeController
struct  TimeController_t676  : public MonoBehaviour_t13
{
	// TimeController/TimeStateChangedEventHandler TimeController::TimeStateChanged
	TimeStateChangedEventHandler_t675 * ___TimeStateChanged_3;
	// TimeController/TimeState TimeController::<timeState>k__BackingField
	int32_t ___U3CtimeStateU3Ek__BackingField_4;
};
struct TimeController_t676_StaticFields{
	// TimeController TimeController::instance
	TimeController_t676 * ___instance_2;
};
