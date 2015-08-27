#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelationBase
struct ParseRelationBase_t1300;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t1222;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;

// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelationBase__ctor_m7014 (ParseRelationBase_t1300 * __this, ParseObject_t1222 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelationBase__ctor_m7015 (ParseRelationBase_t1300 * __this, ParseObject_t1222 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::EnsureParentAndKey(Parse.ParseObject,System.String)
extern "C" void ParseRelationBase_EnsureParentAndKey_m7016 (ParseRelationBase_t1300 * __this, ParseObject_t1222 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Add(Parse.ParseObject)
extern "C" void ParseRelationBase_Add_m7017 (ParseRelationBase_t1300 * __this, ParseObject_t1222 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Remove(Parse.ParseObject)
extern "C" void ParseRelationBase_Remove_m7018 (ParseRelationBase_t1300 * __this, ParseObject_t1222 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseRelationBase::ToJSON()
extern "C" Object_t* ParseRelationBase_ToJSON_m7019 (ParseRelationBase_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRelationBase::get_TargetClassName()
extern "C" String_t* ParseRelationBase_get_TargetClassName_m7020 (ParseRelationBase_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::set_TargetClassName(System.String)
extern "C" void ParseRelationBase_set_TargetClassName_m7021 (ParseRelationBase_t1300 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelationBase Parse.ParseRelationBase::CreateRelation(Parse.ParseObject,System.String,System.String)
extern "C" ParseRelationBase_t1300 * ParseRelationBase_CreateRelation_m7022 (Object_t * __this /* static, unused */, ParseObject_t1222 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
