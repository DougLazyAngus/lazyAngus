#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t5237;
// System.Security.IPermission
struct IPermission_t5251;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C" void CodeAccessPermission__ctor_m23198 (CodeAccessPermission_t5237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.CodeAccessPermission::Copy()
// System.Void System.Security.CodeAccessPermission::Demand()
extern "C" void CodeAccessPermission_Demand_m23199 (CodeAccessPermission_t5237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C" bool CodeAccessPermission_Equals_m23200 (CodeAccessPermission_t5237 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::FromXml(System.Security.SecurityElement)
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C" int32_t CodeAccessPermission_GetHashCode_m23201 (CodeAccessPermission_t5237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.CodeAccessPermission::Intersect(System.Security.IPermission)
// System.Boolean System.Security.CodeAccessPermission::IsSubsetOf(System.Security.IPermission)
// System.String System.Security.CodeAccessPermission::ToString()
extern "C" String_t* CodeAccessPermission_ToString_m23202 (CodeAccessPermission_t5237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::ToXml()
// System.Security.IPermission System.Security.CodeAccessPermission::Union(System.Security.IPermission)
extern "C" Object_t * CodeAccessPermission_Union_m23203 (CodeAccessPermission_t5237 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C" SecurityElement_t4838 * CodeAccessPermission_Element_m23204 (CodeAccessPermission_t5237 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PermissionState System.Security.CodeAccessPermission::CheckPermissionState(System.Security.Permissions.PermissionState,System.Boolean)
extern "C" int32_t CodeAccessPermission_CheckPermissionState_m23205 (Object_t * __this /* static, unused */, int32_t ___state, bool ___allowUnrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::CheckSecurityElement(System.Security.SecurityElement,System.String,System.Int32,System.Int32)
extern "C" int32_t CodeAccessPermission_CheckSecurityElement_m23206 (Object_t * __this /* static, unused */, SecurityElement_t4838 * ___se, String_t* ___parameterName, int32_t ___minimumVersion, int32_t ___maximumVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsUnrestricted(System.Security.SecurityElement)
extern "C" bool CodeAccessPermission_IsUnrestricted_m23207 (Object_t * __this /* static, unused */, SecurityElement_t4838 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C" void CodeAccessPermission_ThrowInvalidPermission_m23208 (Object_t * __this /* static, unused */, Object_t * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
