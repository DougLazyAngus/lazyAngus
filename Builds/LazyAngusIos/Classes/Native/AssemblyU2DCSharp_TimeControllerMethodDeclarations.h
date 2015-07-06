#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController
struct TimeController_t488;
// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t487;

// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m2321 (TimeController_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_add_PauseChanged_m2322 (TimeController_t488 * __this, PauseChangedEventHandler_t487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern "C" void TimeController_remove_PauseChanged_m2323 (TimeController_t488 * __this, PauseChangedEventHandler_t487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2324 (TimeController_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2325 (TimeController_t488 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::Awake()
extern "C" void TimeController_Awake_m2326 (TimeController_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2327 (TimeController_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2328 (TimeController_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
