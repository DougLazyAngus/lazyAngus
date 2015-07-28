﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseAnalytics
struct ParseAnalytics_t1156;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t637;

// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedAsync()
extern "C" Task_t1149 * ParseAnalytics_TrackAppOpenedAsync_m6310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String)
extern "C" Task_t1149 * ParseAnalytics_TrackEventAsync_m6311 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C" Task_t1149 * ParseAnalytics_TrackEventAsync_m6312 (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedWithPushHashAsync(System.String)
extern "C" Task_t1149 * ParseAnalytics_TrackAppOpenedWithPushHashAsync_m6313 (Object_t * __this /* static, unused */, String_t* ___pushHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseAnalytics::.ctor()
extern "C" void ParseAnalytics__ctor_m6314 (ParseAnalytics_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
