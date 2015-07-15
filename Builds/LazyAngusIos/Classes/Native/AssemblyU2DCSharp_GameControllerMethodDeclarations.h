#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t424;
// MouseHole
struct MouseHole_t439;
// MouseMove
struct MouseMove_t473;

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m1964 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t424 * GameController_get_instance_m1965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m1966 (Object_t * __this /* static, unused */, GameController_t424 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m1967 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m1968 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m1969 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m1970 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RegisterForEvents()
extern "C" void GameController_RegisterForEvents_m1971 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UnregisterForEvents()
extern "C" void GameController_UnregisterForEvents_m1972 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m1973 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m1974 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m1975 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MaybeIncrementMouseHoleCapacity()
extern "C" void GameController_MaybeIncrementMouseHoleCapacity_m1976 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m1977 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseHole GameController::FindDoomedMouseHole()
extern "C" MouseHole_t439 * GameController_FindDoomedMouseHole_m1978 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m1979 (GameController_t424 * __this, MouseMove_t473 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m1980 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForLevelEnd()
extern "C" bool GameController_CheckForLevelEnd_m1981 (GameController_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m1982 (GameController_t424 * __this, MouseMove_t473 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LogKillsPerSwipe(System.Int32)
extern "C" void GameController_LogKillsPerSwipe_m1983 (GameController_t424 * __this, int32_t ___killsPerSwipe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Start>m__25(System.Boolean)
extern "C" void GameController_U3CStartU3Em__25_m1984 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
