#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t5296;
// System.Security.IPermission
struct IPermission_t5241;
// System.Security.SecurityElement
struct SecurityElement_t4828;

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C" void GacIdentityPermission__ctor_m23665 (GacIdentityPermission_t5296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C" Object_t * GacIdentityPermission_Copy_m23666 (GacIdentityPermission_t5296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Intersect_m23667 (GacIdentityPermission_t5296 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool GacIdentityPermission_IsSubsetOf_m23668 (GacIdentityPermission_t5296 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Union_m23669 (GacIdentityPermission_t5296 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void GacIdentityPermission_FromXml_m23670 (GacIdentityPermission_t5296 * __this, SecurityElement_t4828 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C" SecurityElement_t4828 * GacIdentityPermission_ToXml_m23671 (GacIdentityPermission_t5296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C" GacIdentityPermission_t5296 * GacIdentityPermission_Cast_m23672 (GacIdentityPermission_t5296 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
