#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t625;
// UnityEngine.GameObject
struct GameObject_t352;
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3331 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController/BodyMovementType PlayerController::get_bodyMovement()
extern "C" int32_t PlayerController_get_bodyMovement_m3332 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_bodyMovement(PlayerController/BodyMovementType)
extern "C" void PlayerController_set_bodyMovement_m3333 (PlayerController_t625 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t625 * PlayerController_get_instance_m3334 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m3335 (Object_t * __this /* static, unused */, PlayerController_t625 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m3336 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3337 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3338 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m3339 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m3340 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3341 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3342 (PlayerController_t625 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3343 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3344 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3345 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m3346 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m3347 (PlayerController_t625 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m3348 (PlayerController_t625 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3349 (PlayerController_t625 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3350 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m3351 (PlayerController_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PlayerController::GetPawToHitWorldLocation(UnityEngine.Vector2,UnityEngine.Vector3&,System.Single&)
extern "C" GameObject_t352 * PlayerController_GetPawToHitWorldLocation_m3352 (PlayerController_t625 * __this, Vector2_t110  ___worldPoint2d, Vector3_t536 * ___swipeLocationCat, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
