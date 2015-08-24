#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GamePhaseState
struct GamePhaseState_t561;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t559;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t560;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"

// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m2998 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_add_GameInstanceChanged_m2999 (GamePhaseState_t561 * __this, GameInstanceChangedEventHandler_t559 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern "C" void GamePhaseState_remove_GameInstanceChanged_m3000 (GamePhaseState_t561 * __this, GameInstanceChangedEventHandler_t559 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_add_GamePhaseChanged_m3001 (GamePhaseState_t561 * __this, GamePhaseChangedEventHandler_t560 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern "C" void GamePhaseState_remove_GamePhaseChanged_m3002 (GamePhaseState_t561 * __this, GamePhaseChangedEventHandler_t560 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m3003 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m3004 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState/GamePhaseType GamePhaseState::get_previousGamePhase()
extern "C" int32_t GamePhaseState_get_previousGamePhase_m3005 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_previousGamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_previousGamePhase_m3006 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m3007 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m3008 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m3009 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m3010 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePhaseState GamePhaseState::get_instance()
extern "C" GamePhaseState_t561 * GamePhaseState_get_instance_m3011 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern "C" void GamePhaseState_set_instance_m3012 (Object_t * __this /* static, unused */, GamePhaseState_t561 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m3013 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Start()
extern "C" void GamePhaseState_Start_m3014 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m3015 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m3016 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m3017 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m3018 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m3019 (GamePhaseState_t561 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m3020 (GamePhaseState_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m3021 (GamePhaseState_t561 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionToPhase_m3022 (GamePhaseState_t561 * __this, int32_t ___newPhase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
