#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t5339;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5329;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5330;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t5434;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5326;
// System.Security.Policy.Evidence
struct Evidence_t4836;

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C" void NetCodeGroup__ctor_m23950 (NetCodeGroup_t5339 * __this, Object_t * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup__ctor_m23951 (NetCodeGroup_t5339 * __this, SecurityElement_t4831 * ___e, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C" void NetCodeGroup__cctor_m23952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C" CodeGroup_t5330 * NetCodeGroup_Copy_m23953 (NetCodeGroup_t5339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C" bool NetCodeGroup_Equals_m23954 (NetCodeGroup_t5339 * __this, CodeConnectAccessU5BU5D_t5434* ___rules1, CodeConnectAccessU5BU5D_t5434* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C" bool NetCodeGroup_Equals_m23955 (NetCodeGroup_t5339 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C" int32_t NetCodeGroup_GetHashCode_m23956 (NetCodeGroup_t5339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5326 * NetCodeGroup_Resolve_m23957 (NetCodeGroup_t5339 * __this, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_CreateXml_m23958 (NetCodeGroup_t5339 * __this, SecurityElement_t4831 * ___element, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_ParseXml_m23959 (NetCodeGroup_t5339 * __this, SecurityElement_t4831 * ___e, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
