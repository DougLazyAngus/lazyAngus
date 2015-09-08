#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t5324;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission__ctor_m23838 (ZoneIdentityPermission_t5324 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C" Object_t * ZoneIdentityPermission_Copy_m23839 (ZoneIdentityPermission_t5324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool ZoneIdentityPermission_IsSubsetOf_m23840 (ZoneIdentityPermission_t5324 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Union_m23841 (ZoneIdentityPermission_t5324 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Intersect_m23842 (ZoneIdentityPermission_t5324 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void ZoneIdentityPermission_FromXml_m23843 (ZoneIdentityPermission_t5324 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C" SecurityElement_t4831 * ZoneIdentityPermission_ToXml_m23844 (ZoneIdentityPermission_t5324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission_set_SecurityZone_m23845 (ZoneIdentityPermission_t5324 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C" ZoneIdentityPermission_t5324 * ZoneIdentityPermission_Cast_m23846 (ZoneIdentityPermission_t5324 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
