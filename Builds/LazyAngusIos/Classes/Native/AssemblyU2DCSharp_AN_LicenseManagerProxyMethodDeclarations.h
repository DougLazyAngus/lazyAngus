#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_LicenseManagerProxy
struct AN_LicenseManagerProxy_t174;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void AN_LicenseManagerProxy::.ctor()
extern "C" void AN_LicenseManagerProxy__ctor_m1188 (AN_LicenseManagerProxy_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_LicenseManagerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_LicenseManagerProxy_CallActivityFunction_m1189 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t696* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_LicenseManagerProxy::StartLicenseRequest(System.String)
extern "C" void AN_LicenseManagerProxy_StartLicenseRequest_m1190 (Object_t * __this /* static, unused */, String_t* ___base64PublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
