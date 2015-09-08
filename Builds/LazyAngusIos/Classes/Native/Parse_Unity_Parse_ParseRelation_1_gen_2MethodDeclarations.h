#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1539;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1536;
// Parse.ParseObject
struct ParseObject_t1242;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m38569_gshared (ParseRelation_1_t1539 * __this, ParseObject_t1242 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m38569(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1539 *, ParseObject_t1242 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m38569_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m38570_gshared (ParseRelation_1_t1539 * __this, ParseObject_t1242 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m38570(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1539 *, ParseObject_t1242 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m38570_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m38571_gshared (ParseRelation_1_t1539 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m38571(__this, ___obj, method) (( void (*) (ParseRelation_1_t1539 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m38571_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m38572_gshared (ParseRelation_1_t1539 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m38572(__this, ___obj, method) (( void (*) (ParseRelation_1_t1539 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m38572_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1536 * ParseRelation_1_get_Query_m38573_gshared (ParseRelation_1_t1539 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m38573(__this, method) (( ParseQuery_1_t1536 * (*) (ParseRelation_1_t1539 *, const MethodInfo*))ParseRelation_1_get_Query_m38573_gshared)(__this, method)
