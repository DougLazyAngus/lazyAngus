﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseConfig
struct ParseConfig_t1236;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1390;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1388;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
extern "C" ParseConfig_t1236 * ParseConfig_get_CurrentConfig_m6715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
extern "C" void ParseConfig_set_CurrentConfig_m6716 (Object_t * __this /* static, unused */, ParseConfig_t1236 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
extern "C" void ParseConfig_ClearCurrentConfig_m6717 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
extern "C" void ParseConfig_ClearCurrentConfigInMemory_m6718 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
extern "C" void ParseConfig__ctor_m6719 (ParseConfig_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig__ctor_m6720 (ParseConfig_t1236 * __this, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
extern "C" Task_1_t1390 * ParseConfig_GetAsync_m6721 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1390 * ParseConfig_GetAsync_m6722 (Object_t * __this /* static, unused */, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1390 * ParseConfig_GetAsync_m6723 (Object_t * __this /* static, unused */, Task_t1211 * ___toAwait, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
extern "C" ParseConfig_t1236 * ParseConfig_HandleFetchResult_m6724 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig_SaveCurrentConfigFromFetchedConfig_m6725 (Object_t * __this /* static, unused */, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
extern "C" Object_t * ParseConfig_get_Item_m6726 (ParseConfig_t1236 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseConfig_t1236 * ParseConfig_U3CGetAsyncU3Eb__4_m6727 (Object_t * __this /* static, unused */, Task_1_t1388 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
extern "C" void ParseConfig__cctor_m6728 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
