#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseAnalytics
struct ParseAnalytics_t1162;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t644;

// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedAsync()
extern "C" Task_t1155 * ParseAnalytics_TrackAppOpenedAsync_m4023 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String)
extern "C" Task_t1155 * ParseAnalytics_TrackEventAsync_m6358 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C" Task_t1155 * ParseAnalytics_TrackEventAsync_m4024 (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedWithPushHashAsync(System.String)
extern "C" Task_t1155 * ParseAnalytics_TrackAppOpenedWithPushHashAsync_m6359 (Object_t * __this /* static, unused */, String_t* ___pushHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseAnalytics::.ctor()
extern "C" void ParseAnalytics__ctor_m6360 (ParseAnalytics_t1162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
