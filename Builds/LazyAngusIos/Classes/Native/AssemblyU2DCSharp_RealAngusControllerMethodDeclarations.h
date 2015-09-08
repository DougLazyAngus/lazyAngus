#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusController
struct RealAngusController_t642;
// RealAngusElementButton
struct RealAngusElementButton_t640;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void RealAngusController::.ctor()
extern "C" void RealAngusController__ctor_m3463 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::Awake()
extern "C" void RealAngusController_Awake_m3464 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::Start()
extern "C" void RealAngusController_Start_m3465 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::OnDestroy()
extern "C" void RealAngusController_OnDestroy_m3466 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::RegisterForEvents()
extern "C" void RealAngusController_RegisterForEvents_m3467 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::UnregisterForEvents()
extern "C" void RealAngusController_UnregisterForEvents_m3468 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::OnRealAngusDataChanged()
extern "C" void RealAngusController_OnRealAngusDataChanged_m3469 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::OnGamePhaseChanged()
extern "C" void RealAngusController_OnGamePhaseChanged_m3470 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::CalculateLayoutNumbers()
extern "C" void RealAngusController_CalculateLayoutNumbers_m3471 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::LayoutDisplayElements()
extern "C" void RealAngusController_LayoutDisplayElements_m3472 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::OnButtonClicked(RealAngusElementButton)
extern "C" void RealAngusController_OnButtonClicked_m3473 (RealAngusController_t642 * __this, RealAngusElementButton_t640 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::CueToPlayMore()
extern "C" void RealAngusController_CueToPlayMore_m3474 (RealAngusController_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::SelectButton(RealAngusElementButton)
extern "C" void RealAngusController_SelectButton_m3475 (RealAngusController_t642 * __this, RealAngusElementButton_t640 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusController::OnSelectionTransitionCompleted(RealAngusElementButton)
extern "C" void RealAngusController_OnSelectionTransitionCompleted_m3476 (RealAngusController_t642 * __this, RealAngusElementButton_t640 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 RealAngusController::GetNthPosition(System.Int32)
extern "C" Vector2_t110  RealAngusController_GetNthPosition_m3477 (RealAngusController_t642 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
