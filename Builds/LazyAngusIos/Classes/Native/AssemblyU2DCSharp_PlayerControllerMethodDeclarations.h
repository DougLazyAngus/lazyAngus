#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t575;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3072 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t575 * PlayerController_get_instance_m3073 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m3074 (Object_t * __this /* static, unused */, PlayerController_t575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m3075 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3076 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3077 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m3078 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m3079 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3080 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3081 (PlayerController_t575 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3082 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3083 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3084 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m3085 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m3086 (PlayerController_t575 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m3087 (PlayerController_t575 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3088 (PlayerController_t575 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3089 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m3090 (PlayerController_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
