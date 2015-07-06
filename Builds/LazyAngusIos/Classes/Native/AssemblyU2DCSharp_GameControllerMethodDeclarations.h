#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t392;
// GameController/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t422;
// GameController/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t423;
// GameController/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t424;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// MouseHole
struct MouseHole_t434;
// MouseMove
struct MouseMove_t458;
// GameController/GamePhaseType
#include "AssemblyU2DCSharp_GameController_GamePhaseType.h"
// GameController/GameUIsType
#include "AssemblyU2DCSharp_GameController_GameUIsType.h"

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m1946 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::add_GameInstanceChanged(GameController/GameInstanceChangedEventHandler)
extern "C" void GameController_add_GameInstanceChanged_m1947 (GameController_t392 * __this, GameInstanceChangedEventHandler_t422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::remove_GameInstanceChanged(GameController/GameInstanceChangedEventHandler)
extern "C" void GameController_remove_GameInstanceChanged_m1948 (GameController_t392 * __this, GameInstanceChangedEventHandler_t422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::add_GameLevelChanged(GameController/GameLevelChangedEventHandler)
extern "C" void GameController_add_GameLevelChanged_m1949 (GameController_t392 * __this, GameLevelChangedEventHandler_t423 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::remove_GameLevelChanged(GameController/GameLevelChangedEventHandler)
extern "C" void GameController_remove_GameLevelChanged_m1950 (GameController_t392 * __this, GameLevelChangedEventHandler_t423 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::add_GamePhaseChanged(GameController/GamePhaseChangedEventHandler)
extern "C" void GameController_add_GamePhaseChanged_m1951 (GameController_t392 * __this, GamePhaseChangedEventHandler_t424 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::remove_GamePhaseChanged(GameController/GamePhaseChangedEventHandler)
extern "C" void GameController_remove_GamePhaseChanged_m1952 (GameController_t392 * __this, GamePhaseChangedEventHandler_t424 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameController::get_gameLevel()
extern "C" int32_t GameController_get_gameLevel_m1953 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_gameLevel(System.Int32)
extern "C" void GameController_set_gameLevel_m1954 (GameController_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController/GamePhaseType GameController::get_gamePhase()
extern "C" int32_t GameController_get_gamePhase_m1955 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_gamePhase(GameController/GamePhaseType)
extern "C" void GameController_set_gamePhase_m1956 (GameController_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t392 * GameController_get_instance_m1957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m1958 (Object_t * __this /* static, unused */, GameController_t392 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m1959 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m1960 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m1961 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m1962 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::SetupPendingPhase()
extern "C" Object_t * GameController_SetupPendingPhase_m1963 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CheckForPhaseTransition()
extern "C" void GameController_CheckForPhaseTransition_m1964 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MaybeIncrementMouseHoleCapacity()
extern "C" void GameController_MaybeIncrementMouseHoleCapacity_m1965 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m1966 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::IsLegalTransition(GameController/GamePhaseType,GameController/GamePhaseType)
extern "C" bool GameController_IsLegalTransition_m1967 (GameController_t392 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseHole GameController::FindDoomedMouseHole()
extern "C" MouseHole_t434 * GameController_FindDoomedMouseHole_m1968 (GameController_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::TransitionToPhase(GameController/GamePhaseType)
extern "C" void GameController_TransitionToPhase_m1969 (GameController_t392 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetActiveUI(GameController/GameUIsType)
extern "C" void GameController_SetActiveUI_m1970 (GameController_t392 * __this, int32_t ___uiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMousePoisoned(MouseMove)
extern "C" void GameController_OnMousePoisoned_m1971 (GameController_t392 * __this, MouseMove_t458 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m1972 (GameController_t392 * __this, MouseMove_t458 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m1973 (GameController_t392 * __this, MouseMove_t458 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetGameLevel(System.Int32)
extern "C" void GameController_SetGameLevel_m1974 (GameController_t392 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LogKillsPerSwipe(System.Int32)
extern "C" void GameController_LogKillsPerSwipe_m1975 (GameController_t392 * __this, int32_t ___killsPerSwipe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
