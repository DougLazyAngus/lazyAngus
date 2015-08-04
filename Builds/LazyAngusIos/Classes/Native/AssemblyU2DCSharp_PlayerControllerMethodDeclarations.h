#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t582;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3109 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t582 * PlayerController_get_instance_m3110 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m3111 (Object_t * __this /* static, unused */, PlayerController_t582 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m3112 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3113 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3114 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m3115 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m3116 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3117 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3118 (PlayerController_t582 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3119 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3120 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3121 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m3122 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m3123 (PlayerController_t582 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m3124 (PlayerController_t582 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3125 (PlayerController_t582 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3126 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m3127 (PlayerController_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
