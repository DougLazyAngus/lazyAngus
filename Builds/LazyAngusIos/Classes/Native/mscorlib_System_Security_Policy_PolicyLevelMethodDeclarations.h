#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5240;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5333;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C" void PolicyLevel__ctor_m24022 (PolicyLevel_t5242 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C" void PolicyLevel_LoadFromFile_m24023 (PolicyLevel_t5242 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C" SecurityElement_t4838 * PolicyLevel_FromString_m24024 (PolicyLevel_t5242 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C" void PolicyLevel_FromXml_m24025 (PolicyLevel_t5242 * __this, SecurityElement_t4838 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C" NamedPermissionSet_t5240 * PolicyLevel_GetNamedPermissionSet_m24026 (PolicyLevel_t5242 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5333 * PolicyLevel_Resolve_m24027 (PolicyLevel_t5242 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C" SecurityElement_t4838 * PolicyLevel_ToXml_m24028 (PolicyLevel_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C" void PolicyLevel_Save_m24029 (PolicyLevel_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C" void PolicyLevel_CreateDefaultLevel_m24030 (PolicyLevel_t5242 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C" void PolicyLevel_CreateDefaultFullTrustAssemblies_m24031 (PolicyLevel_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C" void PolicyLevel_CreateDefaultNamedPermissionSets_m24032 (PolicyLevel_t5242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C" String_t* PolicyLevel_ResolveClassName_m24033 (PolicyLevel_t5242 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C" bool PolicyLevel_IsFullTrustAssembly_m24034 (PolicyLevel_t5242 * __this, Assembly_t794 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
