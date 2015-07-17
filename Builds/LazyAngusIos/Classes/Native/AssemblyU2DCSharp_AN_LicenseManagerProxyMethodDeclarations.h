#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_LicenseManagerProxy
struct AN_LicenseManagerProxy_t132;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t580;

// System.Void AN_LicenseManagerProxy::.ctor()
extern "C" void AN_LicenseManagerProxy__ctor_m915 (AN_LicenseManagerProxy_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_LicenseManagerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_LicenseManagerProxy_CallActivityFunction_m916 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t580* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_LicenseManagerProxy::StartLicenseRequest(System.String)
extern "C" void AN_LicenseManagerProxy_StartLicenseRequest_m917 (Object_t * __this /* static, unused */, String_t* ___base64PublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
