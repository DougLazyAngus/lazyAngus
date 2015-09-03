#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionBuilder
struct PermissionBuilder_t5230;
// System.Security.IPermission
struct IPermission_t5240;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Type
struct Type_t;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.PermissionBuilder::.cctor()
extern "C" void PermissionBuilder__cctor_m23152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.Permissions.PermissionState)
extern "C" Object_t * PermissionBuilder_Create_m23153 (Object_t * __this /* static, unused */, String_t* ___fullname, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Security.SecurityElement)
extern "C" Object_t * PermissionBuilder_Create_m23154 (Object_t * __this /* static, unused */, SecurityElement_t4827 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.SecurityElement)
extern "C" Object_t * PermissionBuilder_Create_m23155 (Object_t * __this /* static, unused */, String_t* ___fullname, SecurityElement_t4827 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Type)
extern "C" Object_t * PermissionBuilder_Create_m23156 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::CreatePermission(System.String,System.Security.SecurityElement)
extern "C" Object_t * PermissionBuilder_CreatePermission_m23157 (Object_t * __this /* static, unused */, String_t* ___fullname, SecurityElement_t4827 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
