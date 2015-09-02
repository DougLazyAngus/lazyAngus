#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t675;
// TimeController/TimeStateChangedEventHandler
struct TimeStateChangedEventHandler_t674;
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3678 (TimeController_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern "C" void TimeController_add_TimeStateChanged_m3679 (TimeController_t675 * __this, TimeStateChangedEventHandler_t674 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern "C" void TimeController_remove_TimeStateChanged_m3680 (TimeController_t675 * __this, TimeStateChangedEventHandler_t674 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TimeController/TimeState TimeController::get_timeState()
extern "C" int32_t TimeController_get_timeState_m3681 (TimeController_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_timeState(TimeController/TimeState)
extern "C" void TimeController_set_timeState_m3682 (TimeController_t675 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m3683 (TimeController_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::SetTimeState(TimeController/TimeState)
extern "C" void TimeController_SetTimeState_m3684 (TimeController_t675 * __this, int32_t ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
