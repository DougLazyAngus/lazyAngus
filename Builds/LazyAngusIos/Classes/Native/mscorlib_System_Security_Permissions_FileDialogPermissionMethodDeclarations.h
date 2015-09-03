#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.FileDialogPermission
struct FileDialogPermission_t5291;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Permissions.FileDialogPermissionAccess
#include "mscorlib_System_Security_Permissions_FileDialogPermissionAcc.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void FileDialogPermission__ctor_m23612 (FileDialogPermission_t5291 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission__ctor_m23613 (FileDialogPermission_t5291 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::set_Access(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission_set_Access_m23614 (FileDialogPermission_t5291 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Copy()
extern "C" Object_t * FileDialogPermission_Copy_m23615 (FileDialogPermission_t5291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::FromXml(System.Security.SecurityElement)
extern "C" void FileDialogPermission_FromXml_m23616 (FileDialogPermission_t5291 * __this, SecurityElement_t4827 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Intersect_m23617 (FileDialogPermission_t5291 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool FileDialogPermission_IsSubsetOf_m23618 (FileDialogPermission_t5291 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsUnrestricted()
extern "C" bool FileDialogPermission_IsUnrestricted_m23619 (FileDialogPermission_t5291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileDialogPermission::ToXml()
extern "C" SecurityElement_t4827 * FileDialogPermission_ToXml_m23620 (FileDialogPermission_t5291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Union(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Union_m23621 (FileDialogPermission_t5291 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileDialogPermission System.Security.Permissions.FileDialogPermission::Cast(System.Security.IPermission)
extern "C" FileDialogPermission_t5291 * FileDialogPermission_Cast_m23622 (FileDialogPermission_t5291 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
