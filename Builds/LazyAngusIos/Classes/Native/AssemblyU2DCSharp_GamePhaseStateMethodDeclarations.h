#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GamePhaseState
struct GamePhaseState_t664;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t662;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t663;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"

// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m3625 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_add_GameInstanceChanged_m3626 (GamePhaseState_t664 * __this, GameInstanceChangedEventHandler_t662 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_remove_GameInstanceChanged_m3627 (GamePhaseState_t664 * __this, GameInstanceChangedEventHandler_t662 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_add_GamePhaseChanged_m3628 (GamePhaseState_t664 * __this, GamePhaseChangedEventHandler_t663 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_remove_GamePhaseChanged_m3629 (GamePhaseState_t664 * __this, GamePhaseChangedEventHandler_t663 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m3630 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m3631 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_previousGamePhase()
extern "C" int32_t GamePhaseState_get_previousGamePhase_m3632 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_previousGamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_previousGamePhase_m3633 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_pendingPhase()
extern "C" int32_t GamePhaseState_get_pendingPhase_m3634 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_pendingPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_pendingPhase_m3635 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m3636 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m3637 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m3638 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m3639 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState GamePhaseState::get_instance()
extern "C" GamePhaseState_t664 * GamePhaseState_get_instance_m3640 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern "C" void GamePhaseState_set_instance_m3641 (Object_t * __this /* static, unused */, GamePhaseState_t664 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m3642 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Start()
extern "C" void GamePhaseState_Start_m3643 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m3644 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m3645 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m3646 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m3647 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m3648 (GamePhaseState_t664 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m3649 (GamePhaseState_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m3650 (GamePhaseState_t664 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionToPhase_m3651 (GamePhaseState_t664 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
