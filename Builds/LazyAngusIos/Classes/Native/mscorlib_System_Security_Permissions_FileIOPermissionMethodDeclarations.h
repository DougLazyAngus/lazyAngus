#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.FileIOPermission
struct FileIOPermission_t5304;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Object
struct Object_t;
// System.Collections.IList
struct IList_t711;
// System.Security.Permissions.FileIOPermissionAccess
#include "mscorlib_System_Security_Permissions_FileIOPermissionAccess.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void FileIOPermission__ctor_m23693 (FileIOPermission_t5304 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C" void FileIOPermission__ctor_m23694 (FileIOPermission_t5304 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.cctor()
extern "C" void FileIOPermission__cctor_m23695 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::CreateLists()
extern "C" void FileIOPermission_CreateLists_m23696 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllFiles()
extern "C" int32_t FileIOPermission_get_AllFiles_m23697 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C" void FileIOPermission_set_AllFiles_m23698 (FileIOPermission_t5304 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllLocalFiles()
extern "C" int32_t FileIOPermission_get_AllLocalFiles_m23699 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllLocalFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C" void FileIOPermission_set_AllLocalFiles_m23700 (FileIOPermission_t5304 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C" void FileIOPermission_AddPathList_m23701 (FileIOPermission_t5304 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String[])
extern "C" void FileIOPermission_AddPathList_m23702 (FileIOPermission_t5304 * __this, int32_t ___access, StringU5BU5D_t75* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathInternal(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C" void FileIOPermission_AddPathInternal_m23703 (FileIOPermission_t5304 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Copy()
extern "C" Object_t * FileIOPermission_Copy_m23704 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::FromXml(System.Security.SecurityElement)
extern "C" void FileIOPermission_FromXml_m23705 (FileIOPermission_t5304 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Security.Permissions.FileIOPermission::GetPathList(System.Security.Permissions.FileIOPermissionAccess)
extern "C" StringU5BU5D_t75* FileIOPermission_GetPathList_m23706 (FileIOPermission_t5304 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * FileIOPermission_Intersect_m23707 (FileIOPermission_t5304 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool FileIOPermission_IsSubsetOf_m23708 (FileIOPermission_t5304 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsUnrestricted()
extern "C" bool FileIOPermission_IsUnrestricted_m23709 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileIOPermission::ToXml()
extern "C" SecurityElement_t4838 * FileIOPermission_ToXml_m23710 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Union(System.Security.IPermission)
extern "C" Object_t * FileIOPermission_Union_m23711 (FileIOPermission_t5304 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::Equals(System.Object)
extern "C" bool FileIOPermission_Equals_m23712 (FileIOPermission_t5304 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.FileIOPermission::GetHashCode()
extern "C" int32_t FileIOPermission_GetHashCode_m23713 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsEmpty()
extern "C" bool FileIOPermission_IsEmpty_m23714 (FileIOPermission_t5304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermission System.Security.Permissions.FileIOPermission::Cast(System.Security.IPermission)
extern "C" FileIOPermission_t5304 * FileIOPermission_Cast_m23715 (Object_t * __this /* static, unused */, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowInvalidFlag(System.Security.Permissions.FileIOPermissionAccess,System.Boolean)
extern "C" void FileIOPermission_ThrowInvalidFlag_m23716 (Object_t * __this /* static, unused */, int32_t ___access, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String)
extern "C" void FileIOPermission_ThrowIfInvalidPath_m23717 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String[])
extern "C" void FileIOPermission_ThrowIfInvalidPath_m23718 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C" bool FileIOPermission_KeyIsSubsetOf_m23719 (Object_t * __this /* static, unused */, Object_t * ___local, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::UnionKeys(System.Collections.IList,System.String[])
extern "C" void FileIOPermission_UnionKeys_m23720 (Object_t * __this /* static, unused */, Object_t * ___list, StringU5BU5D_t75* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C" void FileIOPermission_IntersectKeys_m23721 (Object_t * __this /* static, unused */, Object_t * ___local, Object_t * ___target, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
