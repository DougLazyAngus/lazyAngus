#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t557;
// MouseMove
struct MouseMove_t530;
// MouseSinkController
struct MouseSinkController_t606;

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2973 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t557 * GameController_get_instance_m2974 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m2975 (Object_t * __this /* static, unused */, GameController_t557 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m2976 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m2977 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m2978 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m2979 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RegisterForEvents()
extern "C" void GameController_RegisterForEvents_m2980 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UnregisterForEvents()
extern "C" void GameController_UnregisterForEvents_m2981 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2982 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2983 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2984 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UpdateRealAngusContentLocks()
extern "C" void GameController_UpdateRealAngusContentLocks_m2985 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m2986 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m2987 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2988 (GameController_t557 * __this, MouseMove_t530 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2989 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t606 * GameController_FindDoomedExit_m2990 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForLevelEnd()
extern "C" bool GameController_CheckForLevelEnd_m2991 (GameController_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2992 (GameController_t557 * __this, MouseMove_t530 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Start>m__4A(System.Boolean)
extern "C" void GameController_U3CStartU3Em__4A_m2993 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
