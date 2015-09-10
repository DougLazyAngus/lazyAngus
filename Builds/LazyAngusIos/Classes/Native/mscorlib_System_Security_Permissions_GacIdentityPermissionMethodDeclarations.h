#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t5306;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.SecurityElement
struct SecurityElement_t4838;

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C" void GacIdentityPermission__ctor_m23722 (GacIdentityPermission_t5306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C" Object_t * GacIdentityPermission_Copy_m23723 (GacIdentityPermission_t5306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Intersect_m23724 (GacIdentityPermission_t5306 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool GacIdentityPermission_IsSubsetOf_m23725 (GacIdentityPermission_t5306 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Union_m23726 (GacIdentityPermission_t5306 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void GacIdentityPermission_FromXml_m23727 (GacIdentityPermission_t5306 * __this, SecurityElement_t4838 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C" SecurityElement_t4838 * GacIdentityPermission_ToXml_m23728 (GacIdentityPermission_t5306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C" GacIdentityPermission_t5306 * GacIdentityPermission_Cast_m23729 (GacIdentityPermission_t5306 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
