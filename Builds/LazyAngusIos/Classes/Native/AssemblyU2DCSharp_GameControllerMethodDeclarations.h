#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t505;
// MouseHole
struct MouseHole_t522;
// MouseMove
struct MouseMove_t557;

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2714 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t505 * GameController_get_instance_m2715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m2716 (Object_t * __this /* static, unused */, GameController_t505 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m2717 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m2718 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m2719 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m2720 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RegisterForEvents()
extern "C" void GameController_RegisterForEvents_m2721 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UnregisterForEvents()
extern "C" void GameController_UnregisterForEvents_m2722 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2723 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2724 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2725 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MaybeIncrementMouseHoleCapacity()
extern "C" void GameController_MaybeIncrementMouseHoleCapacity_m2726 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m2727 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseHole GameController::FindDoomedMouseHole()
extern "C" MouseHole_t522 * GameController_FindDoomedMouseHole_m2728 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2729 (GameController_t505 * __this, MouseMove_t557 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2730 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForLevelEnd()
extern "C" bool GameController_CheckForLevelEnd_m2731 (GameController_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2732 (GameController_t505 * __this, MouseMove_t557 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LogKillsPerSwipe(System.Int32)
extern "C" void GameController_LogKillsPerSwipe_m2733 (GameController_t505 * __this, int32_t ___killsPerSwipe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Start>m__4D(System.Boolean)
extern "C" void GameController_U3CStartU3Em__4D_m2734 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
