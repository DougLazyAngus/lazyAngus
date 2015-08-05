#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRole
struct ParseRole_t1250;
// System.String
struct String_t;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t1355;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t1356;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1357;
// Parse.ParseACL
struct ParseACL_t1165;
// System.Object
struct Object_t;

// System.Void Parse.ParseRole::.ctor()
extern "C" void ParseRole__ctor_m6755 (ParseRole_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
extern "C" void ParseRole__ctor_m6756 (ParseRole_t1250 * __this, String_t* ___name, ParseACL_t1165 * ___acl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
extern "C" String_t* ParseRole_get_Name_m6757 (ParseRole_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
extern "C" void ParseRole_set_Name_m6758 (ParseRole_t1250 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
extern "C" ParseRelation_1_t1355 * ParseRole_get_Users_m6759 (ParseRole_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
extern "C" ParseRelation_1_t1356 * ParseRole_get_Roles_m6760 (ParseRole_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseRole_OnSettingValue_m6761 (ParseRole_t1250 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
extern "C" ParseQuery_1_t1357 * ParseRole_get_Query_m6762 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
extern "C" void ParseRole__cctor_m6763 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
