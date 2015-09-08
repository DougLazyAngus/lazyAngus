#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t5323;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void UrlIdentityPermission__ctor_m23826 (UrlIdentityPermission_t5323 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C" void UrlIdentityPermission__ctor_m23827 (UrlIdentityPermission_t5323 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C" void UrlIdentityPermission_set_Url_m23828 (UrlIdentityPermission_t5323 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C" Object_t * UrlIdentityPermission_Copy_m23829 (UrlIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void UrlIdentityPermission_FromXml_m23830 (UrlIdentityPermission_t5323 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Intersect_m23831 (UrlIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool UrlIdentityPermission_IsSubsetOf_m23832 (UrlIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C" SecurityElement_t4831 * UrlIdentityPermission_ToXml_m23833 (UrlIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Union_m23834 (UrlIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C" bool UrlIdentityPermission_IsEmpty_m23835 (UrlIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C" UrlIdentityPermission_t5323 * UrlIdentityPermission_Cast_m23836 (UrlIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C" bool UrlIdentityPermission_Match_m23837 (UrlIdentityPermission_t5323 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
