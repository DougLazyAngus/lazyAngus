#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5233;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5326;
// System.Security.Policy.Evidence
struct Evidence_t4836;
// System.Reflection.Assembly
struct Assembly_t787;
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C" void PolicyLevel__ctor_m23965 (PolicyLevel_t5235 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C" void PolicyLevel_LoadFromFile_m23966 (PolicyLevel_t5235 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C" SecurityElement_t4831 * PolicyLevel_FromString_m23967 (PolicyLevel_t5235 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C" void PolicyLevel_FromXml_m23968 (PolicyLevel_t5235 * __this, SecurityElement_t4831 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C" NamedPermissionSet_t5233 * PolicyLevel_GetNamedPermissionSet_m23969 (PolicyLevel_t5235 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5326 * PolicyLevel_Resolve_m23970 (PolicyLevel_t5235 * __this, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C" SecurityElement_t4831 * PolicyLevel_ToXml_m23971 (PolicyLevel_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C" void PolicyLevel_Save_m23972 (PolicyLevel_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C" void PolicyLevel_CreateDefaultLevel_m23973 (PolicyLevel_t5235 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C" void PolicyLevel_CreateDefaultFullTrustAssemblies_m23974 (PolicyLevel_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C" void PolicyLevel_CreateDefaultNamedPermissionSets_m23975 (PolicyLevel_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C" String_t* PolicyLevel_ResolveClassName_m23976 (PolicyLevel_t5235 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C" bool PolicyLevel_IsFullTrustAssembly_m23977 (PolicyLevel_t5235 * __this, Assembly_t787 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
