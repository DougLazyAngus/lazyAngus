#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t613;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t612;

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3317 (TimeController_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_add_PauseChanged_m3318 (TimeController_t613 * __this, PauseChangedEventHandler_t612 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_remove_PauseChanged_m3319 (TimeController_t613 * __this, PauseChangedEventHandler_t612 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m3320 (TimeController_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m3321 (TimeController_t613 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m3322 (TimeController_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m3323 (TimeController_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m3324 (TimeController_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
