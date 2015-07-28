﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelationBase
struct ParseRelationBase_t1238;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t1159;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;

// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelationBase__ctor_m6675 (ParseRelationBase_t1238 * __this, ParseObject_t1159 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelationBase__ctor_m6676 (ParseRelationBase_t1238 * __this, ParseObject_t1159 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::EnsureParentAndKey(Parse.ParseObject,System.String)
extern "C" void ParseRelationBase_EnsureParentAndKey_m6677 (ParseRelationBase_t1238 * __this, ParseObject_t1159 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Add(Parse.ParseObject)
extern "C" void ParseRelationBase_Add_m6678 (ParseRelationBase_t1238 * __this, ParseObject_t1159 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Remove(Parse.ParseObject)
extern "C" void ParseRelationBase_Remove_m6679 (ParseRelationBase_t1238 * __this, ParseObject_t1159 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseRelationBase::ToJSON()
extern "C" Object_t* ParseRelationBase_ToJSON_m6680 (ParseRelationBase_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRelationBase::get_TargetClassName()
extern "C" String_t* ParseRelationBase_get_TargetClassName_m6681 (ParseRelationBase_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::set_TargetClassName(System.String)
extern "C" void ParseRelationBase_set_TargetClassName_m6682 (ParseRelationBase_t1238 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelationBase Parse.ParseRelationBase::CreateRelation(Parse.ParseObject,System.String,System.String)
extern "C" ParseRelationBase_t1238 * ParseRelationBase_CreateRelation_m6683 (Object_t * __this /* static, unused */, ParseObject_t1159 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;