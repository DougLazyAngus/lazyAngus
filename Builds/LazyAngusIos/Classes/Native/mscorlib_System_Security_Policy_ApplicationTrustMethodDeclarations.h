#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t4842;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.Security.SecurityElement
struct SecurityElement_t4827;

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C" void ApplicationTrust__ctor_m23844 (ApplicationTrust_t4842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C" PolicyStatement_t5322 * ApplicationTrust_get_DefaultGrantSet_m23845 (ApplicationTrust_t4842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C" void ApplicationTrust_FromXml_m23846 (ApplicationTrust_t4842 * __this, SecurityElement_t4827 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C" SecurityElement_t4827 * ApplicationTrust_ToXml_m23847 (ApplicationTrust_t4842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C" PolicyStatement_t5322 * ApplicationTrust_GetDefaultGrantSet_m23848 (ApplicationTrust_t4842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
