#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawController
struct PawController_t557;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3398 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3399 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Start()
extern "C" void PawController_Start_m3400 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3401 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::RegisterForEvents()
extern "C" void PawController_RegisterForEvents_m3402 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UnregisterForEvents()
extern "C" void PawController_UnregisterForEvents_m3403 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3404 (PawController_t557 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Update()
extern "C" void PawController_Update_m3405 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern "C" void PawController_SetPhase_m3406 (PawController_t557 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3407 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3408 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3409 (PawController_t557 * __this, Vector3_t523  ___targetLocationCat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdateArmRotation()
extern "C" void PawController_UpdateArmRotation_m3410 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3411 (PawController_t557 * __this, Vector3_t523  ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3412 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::AddTimer()
extern "C" void PawController_AddTimer_m3413 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PawController::GetTimerWidgetPosition()
extern "C" Vector3_t523  PawController_GetTimerWidgetPosition_m3414 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PawController::ShouldHaveTimer()
extern "C" bool PawController_ShouldHaveTimer_m3415 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdateTimerWidget()
extern "C" void PawController_UpdateTimerWidget_m3416 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::RemoveTimer()
extern "C" void PawController_RemoveTimer_m3417 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3418 (PawController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
