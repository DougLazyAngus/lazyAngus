﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRole
struct ParseRole_t1301;
// System.String
struct String_t;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t1405;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t1406;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1407;
// Parse.ParseACL
struct ParseACL_t1217;
// System.Object
struct Object_t;

// System.Void Parse.ParseRole::.ctor()
extern "C" void ParseRole__ctor_m7023 (ParseRole_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
extern "C" void ParseRole__ctor_m7024 (ParseRole_t1301 * __this, String_t* ___name, ParseACL_t1217 * ___acl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
extern "C" String_t* ParseRole_get_Name_m7025 (ParseRole_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
extern "C" void ParseRole_set_Name_m7026 (ParseRole_t1301 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
extern "C" ParseRelation_1_t1405 * ParseRole_get_Users_m7027 (ParseRole_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
extern "C" ParseRelation_1_t1406 * ParseRole_get_Roles_m7028 (ParseRole_t1301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseRole_OnSettingValue_m7029 (ParseRole_t1301 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
extern "C" ParseQuery_1_t1407 * ParseRole_get_Query_m7030 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
extern "C" void ParseRole__cctor_m7031 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
