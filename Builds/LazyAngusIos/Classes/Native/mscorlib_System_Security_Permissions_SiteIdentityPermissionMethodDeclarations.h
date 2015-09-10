#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SiteIdentityPermission
struct SiteIdentityPermission_t5323;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void SiteIdentityPermission__ctor_m23825 (SiteIdentityPermission_t5323 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.String)
extern "C" void SiteIdentityPermission__ctor_m23826 (SiteIdentityPermission_t5323 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.cctor()
extern "C" void SiteIdentityPermission__cctor_m23827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::set_Site(System.String)
extern "C" void SiteIdentityPermission_set_Site_m23828 (SiteIdentityPermission_t5323 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Copy()
extern "C" Object_t * SiteIdentityPermission_Copy_m23829 (SiteIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void SiteIdentityPermission_FromXml_m23830 (SiteIdentityPermission_t5323 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * SiteIdentityPermission_Intersect_m23831 (SiteIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SiteIdentityPermission_IsSubsetOf_m23832 (SiteIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SiteIdentityPermission::ToXml()
extern "C" SecurityElement_t4838 * SiteIdentityPermission_ToXml_m23833 (SiteIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * SiteIdentityPermission_Union_m23834 (SiteIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsEmpty()
extern "C" bool SiteIdentityPermission_IsEmpty_m23835 (SiteIdentityPermission_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SiteIdentityPermission System.Security.Permissions.SiteIdentityPermission::Cast(System.Security.IPermission)
extern "C" SiteIdentityPermission_t5323 * SiteIdentityPermission_Cast_m23836 (SiteIdentityPermission_t5323 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsValid(System.String)
extern "C" bool SiteIdentityPermission_IsValid_m23837 (SiteIdentityPermission_t5323 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::Match(System.String)
extern "C" bool SiteIdentityPermission_Match_m23838 (SiteIdentityPermission_t5323 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
