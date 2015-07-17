#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLevelState
struct GameLevelState_t462;
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t461;

// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m2453 (GameLevelState_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_add_GameLevelChanged_m2454 (GameLevelState_t462 * __this, GameLevelChangedEventHandler_t461 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_remove_GameLevelChanged_m2455 (GameLevelState_t462 * __this, GameLevelChangedEventHandler_t461 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m2456 (GameLevelState_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m2457 (GameLevelState_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameLevelState GameLevelState::get_instance()
extern "C" GameLevelState_t462 * GameLevelState_get_instance_m2458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_instance(GameLevelState)
extern "C" void GameLevelState_set_instance_m2459 (Object_t * __this /* static, unused */, GameLevelState_t462 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m2460 (GameLevelState_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m2461 (GameLevelState_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m2462 (GameLevelState_t462 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
