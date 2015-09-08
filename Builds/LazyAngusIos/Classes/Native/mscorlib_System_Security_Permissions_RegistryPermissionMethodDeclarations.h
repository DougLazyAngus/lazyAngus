#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.RegistryPermission
struct RegistryPermission_t5312;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Collections.IList
struct IList_t704;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.RegistryPermissionAccess
#include "mscorlib_System_Security_Permissions_RegistryPermissionAcces.h"

// System.Void System.Security.Permissions.RegistryPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void RegistryPermission__ctor_m23738 (RegistryPermission_t5312 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C" void RegistryPermission_AddPathList_m23739 (RegistryPermission_t5312 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Security.Permissions.RegistryPermissionAccess)
extern "C" String_t* RegistryPermission_GetPathList_m23740 (RegistryPermission_t5312 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::SetPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C" void RegistryPermission_SetPathList_m23741 (RegistryPermission_t5312 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Copy()
extern "C" Object_t * RegistryPermission_Copy_m23742 (RegistryPermission_t5312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::FromXml(System.Security.SecurityElement)
extern "C" void RegistryPermission_FromXml_m23743 (RegistryPermission_t5312 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * RegistryPermission_Intersect_m23744 (RegistryPermission_t5312 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool RegistryPermission_IsSubsetOf_m23745 (RegistryPermission_t5312 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsUnrestricted()
extern "C" bool RegistryPermission_IsUnrestricted_m23746 (RegistryPermission_t5312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.RegistryPermission::ToXml()
extern "C" SecurityElement_t4831 * RegistryPermission_ToXml_m23747 (RegistryPermission_t5312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Union(System.Security.IPermission)
extern "C" Object_t * RegistryPermission_Union_m23748 (RegistryPermission_t5312 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsEmpty()
extern "C" bool RegistryPermission_IsEmpty_m23749 (RegistryPermission_t5312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.RegistryPermission System.Security.Permissions.RegistryPermission::Cast(System.Security.IPermission)
extern "C" RegistryPermission_t5312 * RegistryPermission_Cast_m23750 (RegistryPermission_t5312 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::ThrowInvalidFlag(System.Security.Permissions.RegistryPermissionAccess,System.Boolean)
extern "C" void RegistryPermission_ThrowInvalidFlag_m23751 (RegistryPermission_t5312 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Collections.ArrayList)
extern "C" String_t* RegistryPermission_GetPathList_m23752 (RegistryPermission_t5312 * __this, ArrayList_t716 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C" bool RegistryPermission_KeyIsSubsetOf_m23753 (RegistryPermission_t5312 * __this, Object_t * ___local, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddWithUnionKey(System.Collections.IList,System.String)
extern "C" void RegistryPermission_AddWithUnionKey_m23754 (RegistryPermission_t5312 * __this, Object_t * ___list, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C" void RegistryPermission_IntersectKeys_m23755 (RegistryPermission_t5312 * __this, Object_t * ___local, Object_t * ___target, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
