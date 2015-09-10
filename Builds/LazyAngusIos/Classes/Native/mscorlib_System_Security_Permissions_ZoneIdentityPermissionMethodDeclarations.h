#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t5331;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission__ctor_m23895 (ZoneIdentityPermission_t5331 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C" Object_t * ZoneIdentityPermission_Copy_m23896 (ZoneIdentityPermission_t5331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool ZoneIdentityPermission_IsSubsetOf_m23897 (ZoneIdentityPermission_t5331 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Union_m23898 (ZoneIdentityPermission_t5331 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Intersect_m23899 (ZoneIdentityPermission_t5331 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void ZoneIdentityPermission_FromXml_m23900 (ZoneIdentityPermission_t5331 * __this, SecurityElement_t4838 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C" SecurityElement_t4838 * ZoneIdentityPermission_ToXml_m23901 (ZoneIdentityPermission_t5331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission_set_SecurityZone_m23902 (ZoneIdentityPermission_t5331 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C" ZoneIdentityPermission_t5331 * ZoneIdentityPermission_Cast_m23903 (ZoneIdentityPermission_t5331 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
