﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseConfig
struct ParseConfig_t1173;
// Parse.Internal.TaskQueue
struct TaskQueue_t1149;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseConfig>
struct Func_2_t1174;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseConfig
struct  ParseConfig_t1173  : public Object_t
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseConfig::properties
	Object_t* ___properties_3;
};
struct ParseConfig_t1173_StaticFields{
	// System.Object Parse.ParseConfig::currentConfigMutex
	Object_t * ___currentConfigMutex_0;
	// Parse.ParseConfig Parse.ParseConfig::currentConfig
	ParseConfig_t1173 * ___currentConfig_1;
	// Parse.Internal.TaskQueue Parse.ParseConfig::taskQueue
	TaskQueue_t1149 * ___taskQueue_2;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseConfig> Parse.ParseConfig::CS$<>9__CachedAnonymousMethodDelegate5
	Func_2_t1174 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_4;
};