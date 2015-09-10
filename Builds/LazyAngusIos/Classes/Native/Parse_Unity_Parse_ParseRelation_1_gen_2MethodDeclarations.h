#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1546;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1543;
// Parse.ParseObject
struct ParseObject_t1249;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m38626_gshared (ParseRelation_1_t1546 * __this, ParseObject_t1249 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m38626(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1546 *, ParseObject_t1249 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m38626_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m38627_gshared (ParseRelation_1_t1546 * __this, ParseObject_t1249 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m38627(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1546 *, ParseObject_t1249 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m38627_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m38628_gshared (ParseRelation_1_t1546 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m38628(__this, ___obj, method) (( void (*) (ParseRelation_1_t1546 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m38628_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m38629_gshared (ParseRelation_1_t1546 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m38629(__this, ___obj, method) (( void (*) (ParseRelation_1_t1546 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m38629_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1543 * ParseRelation_1_get_Query_m38630_gshared (ParseRelation_1_t1546 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m38630(__this, method) (( ParseQuery_1_t1543 * (*) (ParseRelation_1_t1546 *, const MethodInfo*))ParseRelation_1_get_Query_m38630_gshared)(__this, method)
