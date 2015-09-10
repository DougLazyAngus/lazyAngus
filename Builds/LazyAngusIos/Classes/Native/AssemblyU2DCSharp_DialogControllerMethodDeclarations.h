#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogController
struct DialogController_t610;
// UnityEngine.GameObject
struct GameObject_t352;

// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m3274 (DialogController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::Awake()
extern "C" void DialogController_Awake_m3275 (DialogController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern "C" void DialogController_ShowDialog_m3276 (DialogController_t610 * __this, GameObject_t352 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern "C" void DialogController_HideDialog_m3277 (DialogController_t610 * __this, GameObject_t352 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m3278 (DialogController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
