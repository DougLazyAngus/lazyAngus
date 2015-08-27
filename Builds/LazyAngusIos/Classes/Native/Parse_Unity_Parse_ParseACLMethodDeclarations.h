#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseACL
struct ParseACL_t1217;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// Parse.ParseUser
struct ParseUser_t1306;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t1301;
// Parse.ParseACL/AccessKind
#include "Parse_Unity_Parse_ParseACL_AccessKind.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.ParseACL::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseACL__ctor_m6621 (ParseACL_t1217 * __this, Object_t* ___jsonObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor()
extern "C" void ParseACL__ctor_m6622 (ParseACL_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor(Parse.ParseUser)
extern "C" void ParseACL__ctor_m6623 (ParseACL_t1217 * __this, ParseUser_t1306 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseACL::ToJSON()
extern "C" Object_t* ParseACL_ToJSON_m6624 (ParseACL_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetAccess(Parse.ParseACL/AccessKind,System.String,System.Boolean)
extern "C" void ParseACL_SetAccess_m6625 (ParseACL_t1217 * __this, int32_t ___kind, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetAccess(Parse.ParseACL/AccessKind,System.String)
extern "C" bool ParseACL_GetAccess_m6626 (ParseACL_t1217 * __this, int32_t ___kind, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicReadAccess()
extern "C" bool ParseACL_get_PublicReadAccess_m6627 (ParseACL_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicReadAccess(System.Boolean)
extern "C" void ParseACL_set_PublicReadAccess_m6628 (ParseACL_t1217 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicWriteAccess()
extern "C" bool ParseACL_get_PublicWriteAccess_m6629 (ParseACL_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicWriteAccess(System.Boolean)
extern "C" void ParseACL_set_PublicWriteAccess_m6630 (ParseACL_t1217 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetReadAccess_m6631 (ParseACL_t1217 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(Parse.ParseUser,System.Boolean)
extern "C" void ParseACL_SetReadAccess_m6632 (ParseACL_t1217 * __this, ParseUser_t1306 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetWriteAccess_m6633 (ParseACL_t1217 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(Parse.ParseUser,System.Boolean)
extern "C" void ParseACL_SetWriteAccess_m6634 (ParseACL_t1217 * __this, ParseUser_t1306 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(System.String)
extern "C" bool ParseACL_GetReadAccess_m6635 (ParseACL_t1217 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(Parse.ParseUser)
extern "C" bool ParseACL_GetReadAccess_m6636 (ParseACL_t1217 * __this, ParseUser_t1306 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(System.String)
extern "C" bool ParseACL_GetWriteAccess_m6637 (ParseACL_t1217 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(Parse.ParseUser)
extern "C" bool ParseACL_GetWriteAccess_m6638 (ParseACL_t1217 * __this, ParseUser_t1306 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetRoleReadAccess_m6639 (ParseACL_t1217 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(Parse.ParseRole,System.Boolean)
extern "C" void ParseACL_SetRoleReadAccess_m6640 (ParseACL_t1217 * __this, ParseRole_t1301 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(System.String)
extern "C" bool ParseACL_GetRoleReadAccess_m6641 (ParseACL_t1217 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(Parse.ParseRole)
extern "C" bool ParseACL_GetRoleReadAccess_m6642 (ParseACL_t1217 * __this, ParseRole_t1301 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetRoleWriteAccess_m6643 (ParseACL_t1217 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(Parse.ParseRole,System.Boolean)
extern "C" void ParseACL_SetRoleWriteAccess_m6644 (ParseACL_t1217 * __this, ParseRole_t1301 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(System.String)
extern "C" bool ParseACL_GetRoleWriteAccess_m6645 (ParseACL_t1217 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(Parse.ParseRole)
extern "C" bool ParseACL_GetRoleWriteAccess_m6646 (ParseACL_t1217 * __this, ParseRole_t1301 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool ParseACL_U3C_ctorU3Eb__0_m6647 (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" String_t* ParseACL_U3C_ctorU3Eb__1_m6648 (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool ParseACL_U3C_ctorU3Eb__2_m6649 (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" String_t* ParseACL_U3C_ctorU3Eb__3_m6650 (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
