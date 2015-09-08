#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.FileDialogPermission
struct FileDialogPermission_t5295;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Permissions.FileDialogPermissionAccess
#include "mscorlib_System_Security_Permissions_FileDialogPermissionAcc.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void FileDialogPermission__ctor_m23625 (FileDialogPermission_t5295 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission__ctor_m23626 (FileDialogPermission_t5295 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::set_Access(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission_set_Access_m23627 (FileDialogPermission_t5295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Copy()
extern "C" Object_t * FileDialogPermission_Copy_m23628 (FileDialogPermission_t5295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::FromXml(System.Security.SecurityElement)
extern "C" void FileDialogPermission_FromXml_m23629 (FileDialogPermission_t5295 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Intersect_m23630 (FileDialogPermission_t5295 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool FileDialogPermission_IsSubsetOf_m23631 (FileDialogPermission_t5295 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsUnrestricted()
extern "C" bool FileDialogPermission_IsUnrestricted_m23632 (FileDialogPermission_t5295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileDialogPermission::ToXml()
extern "C" SecurityElement_t4831 * FileDialogPermission_ToXml_m23633 (FileDialogPermission_t5295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Union(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Union_m23634 (FileDialogPermission_t5295 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileDialogPermission System.Security.Permissions.FileDialogPermission::Cast(System.Security.IPermission)
extern "C" FileDialogPermission_t5295 * FileDialogPermission_Cast_m23635 (FileDialogPermission_t5295 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
