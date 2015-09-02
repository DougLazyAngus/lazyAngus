#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1535;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1532;
// Parse.ParseObject
struct ParseObject_t1238;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m34302_gshared (ParseRelation_1_t1535 * __this, ParseObject_t1238 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m34302(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1535 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m34302_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m34303_gshared (ParseRelation_1_t1535 * __this, ParseObject_t1238 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m34303(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1535 *, ParseObject_t1238 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m34303_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m34304_gshared (ParseRelation_1_t1535 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m34304(__this, ___obj, method) (( void (*) (ParseRelation_1_t1535 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m34304_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m34305_gshared (ParseRelation_1_t1535 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m34305(__this, ___obj, method) (( void (*) (ParseRelation_1_t1535 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m34305_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1532 * ParseRelation_1_get_Query_m34306_gshared (ParseRelation_1_t1535 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m34306(__this, method) (( ParseQuery_1_t1532 * (*) (ParseRelation_1_t1535 *, const MethodInfo*))ParseRelation_1_get_Query_m34306_gshared)(__this, method)
