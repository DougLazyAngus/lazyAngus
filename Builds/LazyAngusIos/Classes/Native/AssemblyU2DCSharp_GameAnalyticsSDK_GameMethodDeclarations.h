#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.Game
struct Game_t490;
// System.String
struct String_t;

// System.Void GameAnalyticsSDK.Game::.ctor(System.String,System.Int32,System.String,System.String)
extern "C" void Game__ctor_m2701 (Game_t490 * __this, String_t* ___name, int32_t ___id, String_t* ___gameKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Game::get_Name()
extern "C" String_t* Game_get_Name_m2702 (Game_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Game::set_Name(System.String)
extern "C" void Game_set_Name_m2703 (Game_t490 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameAnalyticsSDK.Game::get_ID()
extern "C" int32_t Game_get_ID_m2704 (Game_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Game::set_ID(System.Int32)
extern "C" void Game_set_ID_m2705 (Game_t490 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Game::get_GameKey()
extern "C" String_t* Game_get_GameKey_m2706 (Game_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Game::set_GameKey(System.String)
extern "C" void Game_set_GameKey_m2707 (Game_t490 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Game::get_SecretKey()
extern "C" String_t* Game_get_SecretKey_m2708 (Game_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Game::set_SecretKey(System.String)
extern "C" void Game_set_SecretKey_m2709 (Game_t490 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
