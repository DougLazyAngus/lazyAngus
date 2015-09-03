#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.Studio
struct Studio_t489;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Game>
struct List_1_t488;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>
struct List_1_t485;

// System.Void GameAnalyticsSDK.Studio::.ctor(System.String,System.String,System.Collections.Generic.List`1<GameAnalyticsSDK.Game>)
extern "C" void Studio__ctor_m2692 (Studio_t489 * __this, String_t* ___name, String_t* ___id, List_1_t488 * ___games, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Studio::get_Name()
extern "C" String_t* Studio_get_Name_m2693 (Studio_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Studio::set_Name(System.String)
extern "C" void Studio_set_Name_m2694 (Studio_t489 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameAnalyticsSDK.Studio::get_ID()
extern "C" String_t* Studio_get_ID_m2695 (Studio_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Studio::set_ID(System.String)
extern "C" void Studio_set_ID_m2696 (Studio_t489 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Game> GameAnalyticsSDK.Studio::get_Games()
extern "C" List_1_t488 * Studio_get_Games_m2697 (Studio_t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.Studio::set_Games(System.Collections.Generic.List`1<GameAnalyticsSDK.Game>)
extern "C" void Studio_set_Games_m2698 (Studio_t489 * __this, List_1_t488 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GameAnalyticsSDK.Studio::GetStudioNames(System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>,System.Boolean)
extern "C" StringU5BU5D_t75* Studio_GetStudioNames_m2699 (Object_t * __this /* static, unused */, List_1_t485 * ___studios, bool ___addFirstEmpty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GameAnalyticsSDK.Studio::GetGameNames(System.Int32,System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>)
extern "C" StringU5BU5D_t75* Studio_GetGameNames_m2700 (Object_t * __this /* static, unused */, int32_t ___index, List_1_t485 * ___studios, const MethodInfo* method) IL2CPP_METHOD_ATTR;
