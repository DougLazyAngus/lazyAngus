#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t5330;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void UrlIdentityPermission__ctor_m23883 (UrlIdentityPermission_t5330 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C" void UrlIdentityPermission__ctor_m23884 (UrlIdentityPermission_t5330 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C" void UrlIdentityPermission_set_Url_m23885 (UrlIdentityPermission_t5330 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C" Object_t * UrlIdentityPermission_Copy_m23886 (UrlIdentityPermission_t5330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void UrlIdentityPermission_FromXml_m23887 (UrlIdentityPermission_t5330 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Intersect_m23888 (UrlIdentityPermission_t5330 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool UrlIdentityPermission_IsSubsetOf_m23889 (UrlIdentityPermission_t5330 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C" SecurityElement_t4838 * UrlIdentityPermission_ToXml_m23890 (UrlIdentityPermission_t5330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Union_m23891 (UrlIdentityPermission_t5330 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C" bool UrlIdentityPermission_IsEmpty_m23892 (UrlIdentityPermission_t5330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C" UrlIdentityPermission_t5330 * UrlIdentityPermission_Cast_m23893 (UrlIdentityPermission_t5330 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C" bool UrlIdentityPermission_Match_m23894 (UrlIdentityPermission_t5330 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
