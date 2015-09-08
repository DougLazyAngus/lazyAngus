#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t679;
// TimeController/TimeStateChangedEventHandler
struct TimeStateChangedEventHandler_t678;
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3694 (TimeController_t679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern "C" void TimeController_add_TimeStateChanged_m3695 (TimeController_t679 * __this, TimeStateChangedEventHandler_t678 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern "C" void TimeController_remove_TimeStateChanged_m3696 (TimeController_t679 * __this, TimeStateChangedEventHandler_t678 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TimeController/TimeState TimeController::get_timeState()
extern "C" int32_t TimeController_get_timeState_m3697 (TimeController_t679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_timeState(TimeController/TimeState)
extern "C" void TimeController_set_timeState_m3698 (TimeController_t679 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m3699 (TimeController_t679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::SetTimeState(TimeController/TimeState)
extern "C" void TimeController_SetTimeState_m3700 (TimeController_t679 * __this, int32_t ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
