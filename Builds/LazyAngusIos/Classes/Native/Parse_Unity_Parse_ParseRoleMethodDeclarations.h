#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRole
struct ParseRole_t1246;
// System.String
struct String_t;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t1351;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t1352;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1353;
// Parse.ParseACL
struct ParseACL_t1161;
// System.Object
struct Object_t;

// System.Void Parse.ParseRole::.ctor()
extern "C" void ParseRole__ctor_m6730 (ParseRole_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
extern "C" void ParseRole__ctor_m6731 (ParseRole_t1246 * __this, String_t* ___name, ParseACL_t1161 * ___acl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
extern "C" String_t* ParseRole_get_Name_m6732 (ParseRole_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
extern "C" void ParseRole_set_Name_m6733 (ParseRole_t1246 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
extern "C" ParseRelation_1_t1351 * ParseRole_get_Users_m6734 (ParseRole_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
extern "C" ParseRelation_1_t1352 * ParseRole_get_Roles_m6735 (ParseRole_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseRole_OnSettingValue_m6736 (ParseRole_t1246 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
extern "C" ParseQuery_1_t1353 * ParseRole_get_Query_m6737 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
extern "C" void ParseRole__cctor_m6738 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
