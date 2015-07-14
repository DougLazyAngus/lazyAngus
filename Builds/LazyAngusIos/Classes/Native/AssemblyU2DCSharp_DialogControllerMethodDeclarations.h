#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogController
struct DialogController_t411;
// UnityEngine.GameObject
struct GameObject_t284;

// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m1908 (DialogController_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::Awake()
extern "C" void DialogController_Awake_m1909 (DialogController_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern "C" void DialogController_ShowDialog_m1910 (DialogController_t411 * __this, GameObject_t284 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern "C" void DialogController_HideDialog_m1911 (DialogController_t411 * __this, GameObject_t284 * ___dialog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogController::ClearActiveDialog()
extern "C" void DialogController_ClearActiveDialog_m1912 (DialogController_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m1913 (DialogController_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
