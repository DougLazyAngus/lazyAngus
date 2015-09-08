#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t5290;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5241;
// System.Security.SecurityElement
struct SecurityElement_t4828;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.EnvironmentPermissionAccess
#include "mscorlib_System_Security_Permissions_EnvironmentPermissionAc.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void EnvironmentPermission__ctor_m23609 (EnvironmentPermission_t5290 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C" void EnvironmentPermission__ctor_m23610 (EnvironmentPermission_t5290 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::AddPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C" void EnvironmentPermission_AddPathList_m23611 (EnvironmentPermission_t5290 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Copy()
extern "C" Object_t * EnvironmentPermission_Copy_m23612 (EnvironmentPermission_t5290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::FromXml(System.Security.SecurityElement)
extern "C" void EnvironmentPermission_FromXml_m23613 (EnvironmentPermission_t5290 * __this, SecurityElement_t4828 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C" String_t* EnvironmentPermission_GetPathList_m23614 (EnvironmentPermission_t5290 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * EnvironmentPermission_Intersect_m23615 (EnvironmentPermission_t5290 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool EnvironmentPermission_IsSubsetOf_m23616 (EnvironmentPermission_t5290 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C" bool EnvironmentPermission_IsUnrestricted_m23617 (EnvironmentPermission_t5290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::SetPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C" void EnvironmentPermission_SetPathList_m23618 (EnvironmentPermission_t5290 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C" SecurityElement_t4828 * EnvironmentPermission_ToXml_m23619 (EnvironmentPermission_t5290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Union(System.Security.IPermission)
extern "C" Object_t * EnvironmentPermission_Union_m23620 (EnvironmentPermission_t5290 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsEmpty()
extern "C" bool EnvironmentPermission_IsEmpty_m23621 (EnvironmentPermission_t5290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C" EnvironmentPermission_t5290 * EnvironmentPermission_Cast_m23622 (EnvironmentPermission_t5290 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C" void EnvironmentPermission_ThrowInvalidFlag_m23623 (EnvironmentPermission_t5290 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C" String_t* EnvironmentPermission_GetPathList_m23624 (EnvironmentPermission_t5290 * __this, ArrayList_t713 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
