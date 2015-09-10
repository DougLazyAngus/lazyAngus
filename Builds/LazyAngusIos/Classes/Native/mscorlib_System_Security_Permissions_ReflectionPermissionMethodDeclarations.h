#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.ReflectionPermission
struct ReflectionPermission_t5317;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Permissions.ReflectionPermissionFlag
#include "mscorlib_System_Security_Permissions_ReflectionPermissionFla.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void ReflectionPermission__ctor_m23783 (ReflectionPermission_t5317 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.ReflectionPermissionFlag)
extern "C" void ReflectionPermission__ctor_m23784 (ReflectionPermission_t5317 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::get_Flags()
extern "C" int32_t ReflectionPermission_get_Flags_m23785 (ReflectionPermission_t5317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::set_Flags(System.Security.Permissions.ReflectionPermissionFlag)
extern "C" void ReflectionPermission_set_Flags_m23786 (ReflectionPermission_t5317 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Copy()
extern "C" Object_t * ReflectionPermission_Copy_m23787 (ReflectionPermission_t5317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::FromXml(System.Security.SecurityElement)
extern "C" void ReflectionPermission_FromXml_m23788 (ReflectionPermission_t5317 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * ReflectionPermission_Intersect_m23789 (ReflectionPermission_t5317 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool ReflectionPermission_IsSubsetOf_m23790 (ReflectionPermission_t5317 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsUnrestricted()
extern "C" bool ReflectionPermission_IsUnrestricted_m23791 (ReflectionPermission_t5317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ReflectionPermission::ToXml()
extern "C" SecurityElement_t4838 * ReflectionPermission_ToXml_m23792 (ReflectionPermission_t5317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Union(System.Security.IPermission)
extern "C" Object_t * ReflectionPermission_Union_m23793 (ReflectionPermission_t5317 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermission System.Security.Permissions.ReflectionPermission::Cast(System.Security.IPermission)
extern "C" ReflectionPermission_t5317 * ReflectionPermission_Cast_m23794 (ReflectionPermission_t5317 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
