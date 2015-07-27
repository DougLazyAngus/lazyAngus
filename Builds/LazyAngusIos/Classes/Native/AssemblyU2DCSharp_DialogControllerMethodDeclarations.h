#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogController
struct DialogController_t449;
// UnityEngine.GameObject
struct GameObject_t312;

// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m2378 (DialogController_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::Awake()
extern "C" void DialogController_Awake_m2379 (DialogController_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern "C" void DialogController_ShowDialog_m2380 (DialogController_t449 * __this, GameObject_t312 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern "C" void DialogController_HideDialog_m2381 (DialogController_t449 * __this, GameObject_t312 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m2382 (DialogController_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
