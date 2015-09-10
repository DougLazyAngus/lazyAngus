#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLevelState
struct GameLevelState_t660;
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t659;

// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m3601 (GameLevelState_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_add_GameLevelChanged_m3602 (GameLevelState_t660 * __this, GameLevelChangedEventHandler_t659 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_remove_GameLevelChanged_m3603 (GameLevelState_t660 * __this, GameLevelChangedEventHandler_t659 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m3604 (GameLevelState_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m3605 (GameLevelState_t660 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameLevelState GameLevelState::get_instance()
extern "C" GameLevelState_t660 * GameLevelState_get_instance_m3606 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_instance(GameLevelState)
extern "C" void GameLevelState_set_instance_m3607 (Object_t * __this /* static, unused */, GameLevelState_t660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m3608 (GameLevelState_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m3609 (GameLevelState_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m3610 (GameLevelState_t660 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
