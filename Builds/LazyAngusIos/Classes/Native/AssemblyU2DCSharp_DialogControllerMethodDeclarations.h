#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogController
struct DialogController_t409;
// UnityEngine.GameObject
struct GameObject_t284;

// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m1911 (DialogController_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::Awake()
extern "C" void DialogController_Awake_m1912 (DialogController_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern "C" void DialogController_ShowDialog_m1913 (DialogController_t409 * __this, GameObject_t284 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern "C" void DialogController_HideDialog_m1914 (DialogController_t409 * __this, GameObject_t284 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m1915 (DialogController_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
