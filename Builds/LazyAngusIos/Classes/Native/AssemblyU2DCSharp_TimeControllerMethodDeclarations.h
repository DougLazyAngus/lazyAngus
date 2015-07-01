#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t469;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t468;

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m2203 (TimeController_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_add_PauseChanged_m2204 (TimeController_t469 * __this, PauseChangedEventHandler_t468 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_remove_PauseChanged_m2205 (TimeController_t469 * __this, PauseChangedEventHandler_t468 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2206 (TimeController_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2207 (TimeController_t469 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m2208 (TimeController_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2209 (TimeController_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2210 (TimeController_t469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
