#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseAnalytics
struct ParseAnalytics_t1218;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t693;

// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedAsync()
extern "C" Task_t1211 * ParseAnalytics_TrackAppOpenedAsync_m4304 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String)
extern "C" Task_t1211 * ParseAnalytics_TrackEventAsync_m6651 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C" Task_t1211 * ParseAnalytics_TrackEventAsync_m4305 (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedWithPushHashAsync(System.String)
extern "C" Task_t1211 * ParseAnalytics_TrackAppOpenedWithPushHashAsync_m6652 (Object_t * __this /* static, unused */, String_t* ___pushHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseAnalytics::.ctor()
extern "C" void ParseAnalytics__ctor_m6653 (ParseAnalytics_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
