#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.IsolatedStoragePermission
struct IsolatedStoragePermission_t5309;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Permissions.IsolatedStorageContainment
#include "mscorlib_System_Security_Permissions_IsolatedStorageContainm.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.IsolatedStoragePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void IsolatedStoragePermission__ctor_m23737 (IsolatedStoragePermission_t5309 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UserQuota(System.Int64)
extern "C" void IsolatedStoragePermission_set_UserQuota_m23738 (IsolatedStoragePermission_t5309 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UsageAllowed(System.Security.Permissions.IsolatedStorageContainment)
extern "C" void IsolatedStoragePermission_set_UsageAllowed_m23739 (IsolatedStoragePermission_t5309 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsUnrestricted()
extern "C" bool IsolatedStoragePermission_IsUnrestricted_m23740 (IsolatedStoragePermission_t5309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStoragePermission::ToXml()
extern "C" SecurityElement_t4838 * IsolatedStoragePermission_ToXml_m23741 (IsolatedStoragePermission_t5309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::FromXml(System.Security.SecurityElement)
extern "C" void IsolatedStoragePermission_FromXml_m23742 (IsolatedStoragePermission_t5309 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsEmpty()
extern "C" bool IsolatedStoragePermission_IsEmpty_m23743 (IsolatedStoragePermission_t5309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
