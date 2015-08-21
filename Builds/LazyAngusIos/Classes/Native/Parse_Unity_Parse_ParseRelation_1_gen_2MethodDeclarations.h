#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1516;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1513;
// Parse.ParseObject
struct ParseObject_t1219;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33938_gshared (ParseRelation_1_t1516 * __this, ParseObject_t1219 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m33938(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1516 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33938_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33939_gshared (ParseRelation_1_t1516 * __this, ParseObject_t1219 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m33939(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1516 *, ParseObject_t1219 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33939_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33940_gshared (ParseRelation_1_t1516 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m33940(__this, ___obj, method) (( void (*) (ParseRelation_1_t1516 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m33940_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33941_gshared (ParseRelation_1_t1516 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m33941(__this, ___obj, method) (( void (*) (ParseRelation_1_t1516 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m33941_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1513 * ParseRelation_1_get_Query_m33942_gshared (ParseRelation_1_t1516 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m33942(__this, method) (( ParseQuery_1_t1513 * (*) (ParseRelation_1_t1516 *, const MethodInfo*))ParseRelation_1_get_Query_m33942_gshared)(__this, method)
