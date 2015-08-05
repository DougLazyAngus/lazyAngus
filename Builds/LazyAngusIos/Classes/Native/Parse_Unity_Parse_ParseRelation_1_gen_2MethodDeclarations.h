#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1468;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1465;
// Parse.ParseObject
struct ParseObject_t1169;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33172_gshared (ParseRelation_1_t1468 * __this, ParseObject_t1169 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m33172(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1468 *, ParseObject_t1169 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33172_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33173_gshared (ParseRelation_1_t1468 * __this, ParseObject_t1169 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m33173(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1468 *, ParseObject_t1169 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33173_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33174_gshared (ParseRelation_1_t1468 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m33174(__this, ___obj, method) (( void (*) (ParseRelation_1_t1468 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m33174_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33175_gshared (ParseRelation_1_t1468 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m33175(__this, ___obj, method) (( void (*) (ParseRelation_1_t1468 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m33175_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1465 * ParseRelation_1_get_Query_m33176_gshared (ParseRelation_1_t1468 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m33176(__this, method) (( ParseQuery_1_t1465 * (*) (ParseRelation_1_t1468 *, const MethodInfo*))ParseRelation_1_get_Query_m33176_gshared)(__this, method)
