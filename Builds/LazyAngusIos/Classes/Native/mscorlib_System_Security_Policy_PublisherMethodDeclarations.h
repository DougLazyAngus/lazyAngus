#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Publisher
struct Publisher_t5343;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3225;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.Policy.Evidence
struct Evidence_t4836;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Security.Policy.Publisher::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void Publisher__ctor_m23991 (Publisher_t5343 * __this, X509Certificate_t3225 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::get_Certificate()
extern "C" X509Certificate_t3225 * Publisher_get_Certificate_m23992 (Publisher_t5343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Publisher::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Publisher_CreateIdentityPermission_m23993 (Publisher_t5343 * __this, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Publisher::Equals(System.Object)
extern "C" bool Publisher_Equals_m23994 (Publisher_t5343 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Publisher::GetHashCode()
extern "C" int32_t Publisher_GetHashCode_m23995 (Publisher_t5343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Publisher::ToString()
extern "C" String_t* Publisher_ToString_m23996 (Publisher_t5343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
