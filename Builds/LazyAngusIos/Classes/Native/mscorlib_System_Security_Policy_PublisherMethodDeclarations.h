#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Publisher
struct Publisher_t5350;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3232;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Security.Policy.Publisher::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void Publisher__ctor_m24048 (Publisher_t5350 * __this, X509Certificate_t3232 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::get_Certificate()
extern "C" X509Certificate_t3232 * Publisher_get_Certificate_m24049 (Publisher_t5350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Publisher::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Publisher_CreateIdentityPermission_m24050 (Publisher_t5350 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Publisher::Equals(System.Object)
extern "C" bool Publisher_Equals_m24051 (Publisher_t5350 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Publisher::GetHashCode()
extern "C" int32_t Publisher_GetHashCode_m24052 (Publisher_t5350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Publisher::ToString()
extern "C" String_t* Publisher_ToString_m24053 (Publisher_t5350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
