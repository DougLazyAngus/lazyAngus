#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t5297;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void IsolatedStorageFilePermission__ctor_m23660 (IsolatedStorageFilePermission_t5297 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Copy()
extern "C" Object_t * IsolatedStorageFilePermission_Copy_m23661 (IsolatedStorageFilePermission_t5297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Intersect(System.Security.IPermission)
extern "C" Object_t * IsolatedStorageFilePermission_Intersect_m23662 (IsolatedStorageFilePermission_t5297 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool IsolatedStorageFilePermission_IsSubsetOf_m23663 (IsolatedStorageFilePermission_t5297 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Union(System.Security.IPermission)
extern "C" Object_t * IsolatedStorageFilePermission_Union_m23664 (IsolatedStorageFilePermission_t5297 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C" SecurityElement_t4827 * IsolatedStorageFilePermission_ToXml_m23665 (IsolatedStorageFilePermission_t5297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C" IsolatedStorageFilePermission_t5297 * IsolatedStorageFilePermission_Cast_m23666 (IsolatedStorageFilePermission_t5297 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
