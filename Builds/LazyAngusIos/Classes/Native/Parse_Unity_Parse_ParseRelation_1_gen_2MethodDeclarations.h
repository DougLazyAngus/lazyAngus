#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1518;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1515;
// Parse.ParseObject
struct ParseObject_t1221;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33846_gshared (ParseRelation_1_t1518 * __this, ParseObject_t1221 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m33846(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1518 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33846_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33847_gshared (ParseRelation_1_t1518 * __this, ParseObject_t1221 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m33847(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1518 *, ParseObject_t1221 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m33847_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33848_gshared (ParseRelation_1_t1518 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m33848(__this, ___obj, method) (( void (*) (ParseRelation_1_t1518 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m33848_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33849_gshared (ParseRelation_1_t1518 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m33849(__this, ___obj, method) (( void (*) (ParseRelation_1_t1518 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m33849_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1515 * ParseRelation_1_get_Query_m33850_gshared (ParseRelation_1_t1518 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m33850(__this, method) (( ParseQuery_1_t1515 * (*) (ParseRelation_1_t1518 *, const MethodInfo*))ParseRelation_1_get_Query_m33850_gshared)(__this, method)
