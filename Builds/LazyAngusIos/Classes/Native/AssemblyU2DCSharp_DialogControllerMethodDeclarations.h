#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogController
struct DialogController_t493;
// UnityEngine.GameObject
struct GameObject_t352;

// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m2665 (DialogController_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::Awake()
extern "C" void DialogController_Awake_m2666 (DialogController_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern "C" void DialogController_ShowDialog_m2667 (DialogController_t493 * __this, GameObject_t352 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern "C" void DialogController_HideDialog_m2668 (DialogController_t493 * __this, GameObject_t352 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m2669 (DialogController_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
