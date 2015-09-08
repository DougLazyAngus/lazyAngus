#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t4846;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5326;
// System.Security.SecurityElement
struct SecurityElement_t4831;

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C" void ApplicationTrust__ctor_m23857 (ApplicationTrust_t4846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C" PolicyStatement_t5326 * ApplicationTrust_get_DefaultGrantSet_m23858 (ApplicationTrust_t4846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C" void ApplicationTrust_FromXml_m23859 (ApplicationTrust_t4846 * __this, SecurityElement_t4831 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C" SecurityElement_t4831 * ApplicationTrust_ToXml_m23860 (ApplicationTrust_t4846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C" PolicyStatement_t5326 * ApplicationTrust_GetDefaultGrantSet_m23861 (ApplicationTrust_t4846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
