#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseConfig
struct ParseConfig_t1235;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1389;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1387;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
extern "C" ParseConfig_t1235 * ParseConfig_get_CurrentConfig_m6693 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
extern "C" void ParseConfig_set_CurrentConfig_m6694 (Object_t * __this /* static, unused */, ParseConfig_t1235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
extern "C" void ParseConfig_ClearCurrentConfig_m6695 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
extern "C" void ParseConfig_ClearCurrentConfigInMemory_m6696 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
extern "C" void ParseConfig__ctor_m6697 (ParseConfig_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig__ctor_m6698 (ParseConfig_t1235 * __this, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
extern "C" Task_1_t1389 * ParseConfig_GetAsync_m6699 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1389 * ParseConfig_GetAsync_m6700 (Object_t * __this /* static, unused */, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1389 * ParseConfig_GetAsync_m6701 (Object_t * __this /* static, unused */, Task_t1210 * ___toAwait, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
extern "C" ParseConfig_t1235 * ParseConfig_HandleFetchResult_m6702 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void ParseConfig_SaveCurrentConfigFromFetchedConfig_m6703 (Object_t * __this /* static, unused */, Dictionary_2_t312 * ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
extern "C" Object_t * ParseConfig_get_Item_m6704 (ParseConfig_t1235 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseConfig_t1235 * ParseConfig_U3CGetAsyncU3Eb__4_m6705 (Object_t * __this /* static, unused */, Task_1_t1387 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
extern "C" void ParseConfig__cctor_m6706 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
