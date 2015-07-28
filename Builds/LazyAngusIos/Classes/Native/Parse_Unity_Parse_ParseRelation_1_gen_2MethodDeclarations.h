﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1458;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1455;
// Parse.ParseObject
struct ParseObject_t1159;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33102_gshared (ParseRelation_1_t1458 * __this, ParseObject_t1159 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m33102(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1458 *, ParseObject_t1159 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33102_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33103_gshared (ParseRelation_1_t1458 * __this, ParseObject_t1159 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m33103(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1458 *, ParseObject_t1159 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33103_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33104_gshared (ParseRelation_1_t1458 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m33104(__this, ___obj, method) (( void (*) (ParseRelation_1_t1458 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m33104_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33105_gshared (ParseRelation_1_t1458 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m33105(__this, ___obj, method) (( void (*) (ParseRelation_1_t1458 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m33105_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1455 * ParseRelation_1_get_Query_m33106_gshared (ParseRelation_1_t1458 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m33106(__this, method) (( ParseQuery_1_t1455 * (*) (ParseRelation_1_t1458 *, const MethodInfo*))ParseRelation_1_get_Query_m33106_gshared)(__this, method)