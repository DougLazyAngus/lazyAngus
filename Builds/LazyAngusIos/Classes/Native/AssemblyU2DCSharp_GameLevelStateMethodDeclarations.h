#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLevelState
struct GameLevelState_t507;
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t506;

// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m2739 (GameLevelState_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_add_GameLevelChanged_m2740 (GameLevelState_t507 * __this, GameLevelChangedEventHandler_t506 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_remove_GameLevelChanged_m2741 (GameLevelState_t507 * __this, GameLevelChangedEventHandler_t506 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m2742 (GameLevelState_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m2743 (GameLevelState_t507 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameLevelState GameLevelState::get_instance()
extern "C" GameLevelState_t507 * GameLevelState_get_instance_m2744 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_instance(GameLevelState)
extern "C" void GameLevelState_set_instance_m2745 (Object_t * __this /* static, unused */, GameLevelState_t507 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m2746 (GameLevelState_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m2747 (GameLevelState_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m2748 (GameLevelState_t507 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
