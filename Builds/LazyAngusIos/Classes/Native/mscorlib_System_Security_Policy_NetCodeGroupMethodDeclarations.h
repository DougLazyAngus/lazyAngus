#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t5335;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5326;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t5430;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.Security.Policy.Evidence
struct Evidence_t4832;

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C" void NetCodeGroup__ctor_m23937 (NetCodeGroup_t5335 * __this, Object_t * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup__ctor_m23938 (NetCodeGroup_t5335 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C" void NetCodeGroup__cctor_m23939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C" CodeGroup_t5326 * NetCodeGroup_Copy_m23940 (NetCodeGroup_t5335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C" bool NetCodeGroup_Equals_m23941 (NetCodeGroup_t5335 * __this, CodeConnectAccessU5BU5D_t5430* ___rules1, CodeConnectAccessU5BU5D_t5430* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C" bool NetCodeGroup_Equals_m23942 (NetCodeGroup_t5335 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C" int32_t NetCodeGroup_GetHashCode_m23943 (NetCodeGroup_t5335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5322 * NetCodeGroup_Resolve_m23944 (NetCodeGroup_t5335 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_CreateXml_m23945 (NetCodeGroup_t5335 * __this, SecurityElement_t4827 * ___element, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_ParseXml_m23946 (NetCodeGroup_t5335 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
