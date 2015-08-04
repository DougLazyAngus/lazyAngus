#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GamePhaseState
struct GamePhaseState_t516;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t514;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t515;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"

// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m2772 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_add_GameInstanceChanged_m2773 (GamePhaseState_t516 * __this, GameInstanceChangedEventHandler_t514 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_remove_GameInstanceChanged_m2774 (GamePhaseState_t516 * __this, GameInstanceChangedEventHandler_t514 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_add_GamePhaseChanged_m2775 (GamePhaseState_t516 * __this, GamePhaseChangedEventHandler_t515 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_remove_GamePhaseChanged_m2776 (GamePhaseState_t516 * __this, GamePhaseChangedEventHandler_t515 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m2777 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m2778 (GamePhaseState_t516 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m2779 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m2780 (GamePhaseState_t516 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m2781 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m2782 (GamePhaseState_t516 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState GamePhaseState::get_instance()
extern "C" GamePhaseState_t516 * GamePhaseState_get_instance_m2783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern "C" void GamePhaseState_set_instance_m2784 (Object_t * __this /* static, unused */, GamePhaseState_t516 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m2785 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Start()
extern "C" void GamePhaseState_Start_m2786 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m2787 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m2788 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m2789 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m2790 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m2791 (GamePhaseState_t516 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m2792 (GamePhaseState_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m2793 (GamePhaseState_t516 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionToPhase_m2794 (GamePhaseState_t516 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
