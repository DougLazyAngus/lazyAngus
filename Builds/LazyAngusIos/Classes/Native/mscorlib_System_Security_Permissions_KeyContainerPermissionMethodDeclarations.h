#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.KeyContainerPermission
struct KeyContainerPermission_t5311;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t5440;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.KeyContainerPermissionFlags
#include "mscorlib_System_Security_Permissions_KeyContainerPermissionF.h"

// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void KeyContainerPermission__ctor_m23744 (KeyContainerPermission_t5311 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C" void KeyContainerPermission__ctor_m23745 (KeyContainerPermission_t5311 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags,System.Security.Permissions.KeyContainerPermissionAccessEntry[])
extern "C" void KeyContainerPermission__ctor_m23746 (KeyContainerPermission_t5311 * __this, int32_t ___flags, KeyContainerPermissionAccessEntryU5BU5D_t5440* ___accessList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Copy()
extern "C" Object_t * KeyContainerPermission_Copy_m23747 (KeyContainerPermission_t5311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::FromXml(System.Security.SecurityElement)
extern "C" void KeyContainerPermission_FromXml_m23748 (KeyContainerPermission_t5311 * __this, SecurityElement_t4838 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * KeyContainerPermission_Intersect_m23749 (KeyContainerPermission_t5311 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool KeyContainerPermission_IsSubsetOf_m23750 (KeyContainerPermission_t5311 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsUnrestricted()
extern "C" bool KeyContainerPermission_IsUnrestricted_m23751 (KeyContainerPermission_t5311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.KeyContainerPermission::ToXml()
extern "C" SecurityElement_t4838 * KeyContainerPermission_ToXml_m23752 (KeyContainerPermission_t5311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Union(System.Security.IPermission)
extern "C" Object_t * KeyContainerPermission_Union_m23753 (KeyContainerPermission_t5311 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::SetFlags(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C" void KeyContainerPermission_SetFlags_m23754 (KeyContainerPermission_t5311 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermission System.Security.Permissions.KeyContainerPermission::Cast(System.Security.IPermission)
extern "C" KeyContainerPermission_t5311 * KeyContainerPermission_Cast_m23755 (KeyContainerPermission_t5311 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
