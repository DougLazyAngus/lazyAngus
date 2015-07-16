#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLevelState
struct GameLevelState_t426;
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t425;

// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m1989 (GameLevelState_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_add_GameLevelChanged_m1990 (GameLevelState_t426 * __this, GameLevelChangedEventHandler_t425 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern "C" void GameLevelState_remove_GameLevelChanged_m1991 (GameLevelState_t426 * __this, GameLevelChangedEventHandler_t425 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m1992 (GameLevelState_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m1993 (GameLevelState_t426 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameLevelState GameLevelState::get_instance()
extern "C" GameLevelState_t426 * GameLevelState_get_instance_m1994 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::set_instance(GameLevelState)
extern "C" void GameLevelState_set_instance_m1995 (Object_t * __this /* static, unused */, GameLevelState_t426 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m1996 (GameLevelState_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m1997 (GameLevelState_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m1998 (GameLevelState_t426 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
