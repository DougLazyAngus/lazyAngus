#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t5316;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5314;
// System.Version
struct Version_t1402;
// System.Security.IPermission
struct IPermission_t5241;
// System.Security.SecurityElement
struct SecurityElement_t4828;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.StrongNameIdentityPermission/SNIP
#include "mscorlib_System_Security_Permissions_StrongNameIdentityPermi.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void StrongNameIdentityPermission__ctor_m23786 (StrongNameIdentityPermission_t5316 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameIdentityPermission__ctor_m23787 (StrongNameIdentityPermission_t5316 * __this, StrongNamePublicKeyBlob_t5314 * ___blob, String_t* ___name, Version_t1402 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C" void StrongNameIdentityPermission__ctor_m23788 (StrongNameIdentityPermission_t5316 * __this, StrongNameIdentityPermission_t5316 * ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C" void StrongNameIdentityPermission__cctor_m23789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C" String_t* StrongNameIdentityPermission_get_Name_m23790 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t5314 * StrongNameIdentityPermission_get_PublicKey_m23791 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C" Version_t1402 * StrongNameIdentityPermission_get_Version_m23792 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C" Object_t * StrongNameIdentityPermission_Copy_m23793 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameIdentityPermission_FromXml_m23794 (StrongNameIdentityPermission_t5316 * __this, SecurityElement_t4828 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C" SNIP_t5315  StrongNameIdentityPermission_FromSecurityElement_m23795 (StrongNameIdentityPermission_t5316 * __this, SecurityElement_t4828 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * StrongNameIdentityPermission_Intersect_m23796 (StrongNameIdentityPermission_t5316 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool StrongNameIdentityPermission_IsSubsetOf_m23797 (StrongNameIdentityPermission_t5316 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C" SecurityElement_t4828 * StrongNameIdentityPermission_ToXml_m23798 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" void StrongNameIdentityPermission_ToSecurityElement_m23799 (StrongNameIdentityPermission_t5316 * __this, SecurityElement_t4828 * ___se, SNIP_t5315  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * StrongNameIdentityPermission_Union_m23800 (StrongNameIdentityPermission_t5316 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C" bool StrongNameIdentityPermission_IsUnrestricted_m23801 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" bool StrongNameIdentityPermission_Contains_m23802 (StrongNameIdentityPermission_t5316 * __this, SNIP_t5315  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" bool StrongNameIdentityPermission_IsEmpty_m23803 (StrongNameIdentityPermission_t5316 * __this, SNIP_t5315  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C" bool StrongNameIdentityPermission_IsEmpty_m23804 (StrongNameIdentityPermission_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C" StrongNameIdentityPermission_t5316 * StrongNameIdentityPermission_Cast_m23805 (StrongNameIdentityPermission_t5316 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C" bool StrongNameIdentityPermission_Match_m23806 (StrongNameIdentityPermission_t5316 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
