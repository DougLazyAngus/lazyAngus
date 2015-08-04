#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1467;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1464;
// Parse.ParseObject
struct ParseObject_t1168;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33165_gshared (ParseRelation_1_t1467 * __this, ParseObject_t1168 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m33165(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1467 *, ParseObject_t1168 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33165_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33166_gshared (ParseRelation_1_t1467 * __this, ParseObject_t1168 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m33166(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1467 *, ParseObject_t1168 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33166_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33167_gshared (ParseRelation_1_t1467 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m33167(__this, ___obj, method) (( void (*) (ParseRelation_1_t1467 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m33167_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33168_gshared (ParseRelation_1_t1467 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m33168(__this, ___obj, method) (( void (*) (ParseRelation_1_t1467 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m33168_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1464 * ParseRelation_1_get_Query_m33169_gshared (ParseRelation_1_t1467 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m33169(__this, method) (( ParseQuery_1_t1464 * (*) (ParseRelation_1_t1467 *, const MethodInfo*))ParseRelation_1_get_Query_m33169_gshared)(__this, method)
