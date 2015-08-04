#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseConfig
struct ParseConfig_t1182;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1338;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1336;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
extern "C" ParseConfig_t1182 * ParseConfig_get_CurrentConfig_m6435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
extern "C" void ParseConfig_set_CurrentConfig_m6436 (Object_t * __this /* static, unused */, ParseConfig_t1182 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
extern "C" void ParseConfig_ClearCurrentConfig_m6437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
extern "C" void ParseConfig_ClearCurrentConfigInMemory_m6438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
extern "C" void ParseConfig__ctor_m6439 (ParseConfig_t1182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig__ctor_m6440 (ParseConfig_t1182 * __this, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
extern "C" Task_1_t1338 * ParseConfig_GetAsync_m6441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1338 * ParseConfig_GetAsync_m6442 (Object_t * __this /* static, unused */, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1338 * ParseConfig_GetAsync_m6443 (Object_t * __this /* static, unused */, Task_t1157 * ___toAwait, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
extern "C" ParseConfig_t1182 * ParseConfig_HandleFetchResult_m6444 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig_SaveCurrentConfigFromFetchedConfig_m6445 (Object_t * __this /* static, unused */, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
extern "C" Object_t * ParseConfig_get_Item_m6446 (ParseConfig_t1182 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseConfig_t1182 * ParseConfig_U3CGetAsyncU3Eb__4_m6447 (Object_t * __this /* static, unused */, Task_1_t1336 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
extern "C" void ParseConfig__cctor_m6448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
