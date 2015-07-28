#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GamePhaseState
struct GamePhaseState_t510;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t508;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t509;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"

// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m2752 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_add_GameInstanceChanged_m2753 (GamePhaseState_t510 * __this, GameInstanceChangedEventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_remove_GameInstanceChanged_m2754 (GamePhaseState_t510 * __this, GameInstanceChangedEventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_add_GamePhaseChanged_m2755 (GamePhaseState_t510 * __this, GamePhaseChangedEventHandler_t509 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_remove_GamePhaseChanged_m2756 (GamePhaseState_t510 * __this, GamePhaseChangedEventHandler_t509 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m2757 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m2758 (GamePhaseState_t510 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m2759 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m2760 (GamePhaseState_t510 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m2761 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m2762 (GamePhaseState_t510 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState GamePhaseState::get_instance()
extern "C" GamePhaseState_t510 * GamePhaseState_get_instance_m2763 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern "C" void GamePhaseState_set_instance_m2764 (Object_t * __this /* static, unused */, GamePhaseState_t510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m2765 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Start()
extern "C" void GamePhaseState_Start_m2766 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m2767 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m2768 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m2769 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m2770 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m2771 (GamePhaseState_t510 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m2772 (GamePhaseState_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m2773 (GamePhaseState_t510 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionToPhase_m2774 (GamePhaseState_t510 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
