#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PawController
struct PawController_t489;
// MouseMove
struct MouseMove_t556;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3035 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3036 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Start()
extern "C" void PawController_Start_m3037 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3038 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::RegisterForEvents()
extern "C" void PawController_RegisterForEvents_m3039 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UnregisterForEvents()
extern "C" void PawController_UnregisterForEvents_m3040 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3041 (PawController_t489 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Update()
extern "C" void PawController_Update_m3042 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern "C" void PawController_SetPhase_m3043 (PawController_t489 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3044 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3045 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3046 (PawController_t489 * __this, Vector3_t493  ___targetLocationCat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::UpdateArmRotation()
extern "C" void PawController_UpdateArmRotation_m3047 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3048 (PawController_t489 * __this, Vector3_t493  ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3049 (PawController_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PawController::CountKill(MouseMove)
extern "C" void PawController_CountKill_m3050 (PawController_t489 * __this, MouseMove_t556 * ___mouseMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
