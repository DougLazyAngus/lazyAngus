#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t5242;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void SecurityPermission__ctor_m23743 (SecurityPermission_t5242 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission__ctor_m23744 (SecurityPermission_t5242 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission_set_Flags_m23745 (SecurityPermission_t5242 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C" bool SecurityPermission_IsUnrestricted_m23746 (SecurityPermission_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Copy()
extern "C" Object_t * SecurityPermission_Copy_m23747 (SecurityPermission_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * SecurityPermission_Intersect_m23748 (SecurityPermission_t5242 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Union(System.Security.IPermission)
extern "C" Object_t * SecurityPermission_Union_m23749 (SecurityPermission_t5242 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SecurityPermission_IsSubsetOf_m23750 (SecurityPermission_t5242 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::FromXml(System.Security.SecurityElement)
extern "C" void SecurityPermission_FromXml_m23751 (SecurityPermission_t5242 * __this, SecurityElement_t4827 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C" SecurityElement_t4827 * SecurityPermission_ToXml_m23752 (SecurityPermission_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C" bool SecurityPermission_IsEmpty_m23753 (SecurityPermission_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C" SecurityPermission_t5242 * SecurityPermission_Cast_m23754 (SecurityPermission_t5242 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
