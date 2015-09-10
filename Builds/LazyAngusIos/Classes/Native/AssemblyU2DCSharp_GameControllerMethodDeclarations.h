#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t616;
// MouseMove
struct MouseMove_t517;
// MouseSinkController
struct MouseSinkController_t629;

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m3295 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t616 * GameController_get_instance_m3296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m3297 (Object_t * __this /* static, unused */, GameController_t616 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m3298 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m3299 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m3300 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m3301 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RegisterForEvents()
extern "C" void GameController_RegisterForEvents_m3302 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UnregisterForEvents()
extern "C" void GameController_UnregisterForEvents_m3303 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestarrrtGame()
extern "C" void GameController_RestarrrtGame_m3304 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m3305 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m3306 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UpdateRealAngusContentLocks()
extern "C" void GameController_UpdateRealAngusContentLocks_m3307 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m3308 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m3309 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m3310 (GameController_t616 * __this, MouseMove_t517 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m3311 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t629 * GameController_FindDoomedExit_m3312 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForLevelEnd()
extern "C" bool GameController_CheckForLevelEnd_m3313 (GameController_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m3314 (GameController_t616 * __this, MouseMove_t517 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Start>m__51(System.Boolean)
extern "C" void GameController_U3CStartU3Em__51_m3315 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
