#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseConfig
struct ParseConfig_t1174;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1330;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1328;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
extern "C" ParseConfig_t1174 * ParseConfig_get_CurrentConfig_m6376 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
extern "C" void ParseConfig_set_CurrentConfig_m6377 (Object_t * __this /* static, unused */, ParseConfig_t1174 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
extern "C" void ParseConfig_ClearCurrentConfig_m6378 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
extern "C" void ParseConfig_ClearCurrentConfigInMemory_m6379 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
extern "C" void ParseConfig__ctor_m6380 (ParseConfig_t1174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig__ctor_m6381 (ParseConfig_t1174 * __this, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
extern "C" Task_1_t1330 * ParseConfig_GetAsync_m6382 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1330 * ParseConfig_GetAsync_m6383 (Object_t * __this /* static, unused */, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1330 * ParseConfig_GetAsync_m6384 (Object_t * __this /* static, unused */, Task_t1149 * ___toAwait, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
extern "C" ParseConfig_t1174 * ParseConfig_HandleFetchResult_m6385 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig_SaveCurrentConfigFromFetchedConfig_m6386 (Object_t * __this /* static, unused */, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
extern "C" Object_t * ParseConfig_get_Item_m6387 (ParseConfig_t1174 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseConfig_t1174 * ParseConfig_U3CGetAsyncU3Eb__4_m6388 (Object_t * __this /* static, unused */, Task_1_t1328 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
extern "C" void ParseConfig__cctor_m6389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
