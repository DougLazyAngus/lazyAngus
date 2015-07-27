#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t530;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m2776 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t530 * PlayerController_get_instance_m2777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m2778 (Object_t * __this /* static, unused */, PlayerController_t530 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m2779 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m2780 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m2781 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m2782 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m2783 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m2784 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m2785 (PlayerController_t530 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m2786 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m2787 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m2788 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m2789 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m2790 (PlayerController_t530 * __this, Vector2_t70  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m2791 (PlayerController_t530 * __this, Vector2_t70  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m2792 (PlayerController_t530 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m2793 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m2794 (PlayerController_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
