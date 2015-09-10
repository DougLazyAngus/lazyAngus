#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t637;
// PlayerController/TurnedWithTapHandler
struct TurnedWithTapHandler_t634;
// PlayerController/TurnedWithDragHandler
struct TurnedWithDragHandler_t635;
// PlayerController/SwattedHandler
struct SwattedHandler_t636;
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
extern "C" void PlayerController__ctor_m3431 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::add_TurnedWithTap(PlayerController/TurnedWithTapHandler)
extern "C" void PlayerController_add_TurnedWithTap_m3432 (PlayerController_t637 * __this, TurnedWithTapHandler_t634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::remove_TurnedWithTap(PlayerController/TurnedWithTapHandler)
extern "C" void PlayerController_remove_TurnedWithTap_m3433 (PlayerController_t637 * __this, TurnedWithTapHandler_t634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::add_TurnedWithDrag(PlayerController/TurnedWithDragHandler)
extern "C" void PlayerController_add_TurnedWithDrag_m3434 (PlayerController_t637 * __this, TurnedWithDragHandler_t635 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::remove_TurnedWithDrag(PlayerController/TurnedWithDragHandler)
extern "C" void PlayerController_remove_TurnedWithDrag_m3435 (PlayerController_t637 * __this, TurnedWithDragHandler_t635 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::add_Swatted(PlayerController/SwattedHandler)
extern "C" void PlayerController_add_Swatted_m3436 (PlayerController_t637 * __this, SwattedHandler_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::remove_Swatted(PlayerController/SwattedHandler)
extern "C" void PlayerController_remove_Swatted_m3437 (PlayerController_t637 * __this, SwattedHandler_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController/BodyMovementType PlayerController::get_bodyMovement()
extern "C" int32_t PlayerController_get_bodyMovement_m3438 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_bodyMovement(PlayerController/BodyMovementType)
extern "C" void PlayerController_set_bodyMovement_m3439 (PlayerController_t637 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController PlayerController::get_instance()
extern "C" PlayerController_t637 * PlayerController_get_instance_m3440 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::set_instance(PlayerController)
extern "C" void PlayerController_set_instance_m3441 (Object_t * __this /* static, unused */, PlayerController_t637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m3442 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3443 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3444 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::RegisterForEvents()
extern "C" void PlayerController_RegisterForEvents_m3445 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UnregisterForEvents()
extern "C" void PlayerController_UnregisterForEvents_m3446 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3447 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3448 (PlayerController_t637 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3449 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3450 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3451 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDrag()
extern "C" void PlayerController_UpdateDrag_m3452 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleDragClickStart_m3453 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern "C" void PlayerController_HandleSlapClickStart_m3454 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3455 (PlayerController_t637 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3456 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MakeFartPuff()
extern "C" void PlayerController_MakeFartPuff_m3457 (PlayerController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PlayerController::GetPawToHitWorldLocation(UnityEngine.Vector2,UnityEngine.Vector3&,System.Single&)
extern "C" GameObject_t352 * PlayerController_GetPawToHitWorldLocation_m3458 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, Vector3_t523 * ___swipeLocationCat, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
