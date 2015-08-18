#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawController
struct PawController_t532;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3293 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3294 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Start()
extern "C" void PawController_Start_m3295 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3296 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::RegisterForEvents()
extern "C" void PawController_RegisterForEvents_m3297 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UnregisterForEvents()
extern "C" void PawController_UnregisterForEvents_m3298 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3299 (PawController_t532 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Update()
extern "C" void PawController_Update_m3300 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern "C" void PawController_SetPhase_m3301 (PawController_t532 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3302 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3303 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3304 (PawController_t532 * __this, Vector3_t536  ___targetLocationCat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdateArmRotation()
extern "C" void PawController_UpdateArmRotation_m3305 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3306 (PawController_t532 * __this, Vector3_t536  ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3307 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::AddTimer()
extern "C" void PawController_AddTimer_m3308 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PawController::GetTimerWidgetPosition()
extern "C" Vector3_t536  PawController_GetTimerWidgetPosition_m3309 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PawController::ShouldHaveTimer()
extern "C" bool PawController_ShouldHaveTimer_m3310 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdateTimerWidget()
extern "C" void PawController_UpdateTimerWidget_m3311 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::RemoveTimer()
extern "C" void PawController_RemoveTimer_m3312 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3313 (PawController_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
