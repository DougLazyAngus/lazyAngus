#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t5309;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3225;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void PublisherIdentityPermission__ctor_m23716 (PublisherIdentityPermission_t5309 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void PublisherIdentityPermission__ctor_m23717 (PublisherIdentityPermission_t5309 * __this, X509Certificate_t3225 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void PublisherIdentityPermission_set_Certificate_m23718 (PublisherIdentityPermission_t5309 * __this, X509Certificate_t3225 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C" Object_t * PublisherIdentityPermission_Copy_m23719 (PublisherIdentityPermission_t5309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void PublisherIdentityPermission_FromXml_m23720 (PublisherIdentityPermission_t5309 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * PublisherIdentityPermission_Intersect_m23721 (PublisherIdentityPermission_t5309 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool PublisherIdentityPermission_IsSubsetOf_m23722 (PublisherIdentityPermission_t5309 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C" SecurityElement_t4831 * PublisherIdentityPermission_ToXml_m23723 (PublisherIdentityPermission_t5309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * PublisherIdentityPermission_Union_m23724 (PublisherIdentityPermission_t5309 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C" PublisherIdentityPermission_t5309 * PublisherIdentityPermission_Cast_m23725 (PublisherIdentityPermission_t5309 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
