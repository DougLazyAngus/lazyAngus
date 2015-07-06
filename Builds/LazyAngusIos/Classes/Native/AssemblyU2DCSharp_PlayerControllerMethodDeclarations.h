#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t472;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m2206 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t472 * PlayerController_get_instance_m2207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m2208 (Object_t * __this /* static, unused */, PlayerController_t472 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m2209 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m2210 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m2211 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m2212 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m2213 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m2214 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m2215 (PlayerController_t472 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m2216 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m2217 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m2218 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m2219 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m2220 (PlayerController_t472 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m2221 (PlayerController_t472 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m2222 (PlayerController_t472 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m2223 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m2224 (PlayerController_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
