#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t508;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t507;

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m2422 (TimeController_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_add_PauseChanged_m2423 (TimeController_t508 * __this, PauseChangedEventHandler_t507 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_remove_PauseChanged_m2424 (TimeController_t508 * __this, PauseChangedEventHandler_t507 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2425 (TimeController_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2426 (TimeController_t508 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m2427 (TimeController_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2428 (TimeController_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2429 (TimeController_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
