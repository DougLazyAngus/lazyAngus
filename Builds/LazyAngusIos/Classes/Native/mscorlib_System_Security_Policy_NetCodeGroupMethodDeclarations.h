#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t5346;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5336;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5337;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t5441;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5333;
// System.Security.Policy.Evidence
struct Evidence_t4843;

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C" void NetCodeGroup__ctor_m24007 (NetCodeGroup_t5346 * __this, Object_t * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup__ctor_m24008 (NetCodeGroup_t5346 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C" void NetCodeGroup__cctor_m24009 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C" CodeGroup_t5337 * NetCodeGroup_Copy_m24010 (NetCodeGroup_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C" bool NetCodeGroup_Equals_m24011 (NetCodeGroup_t5346 * __this, CodeConnectAccessU5BU5D_t5441* ___rules1, CodeConnectAccessU5BU5D_t5441* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C" bool NetCodeGroup_Equals_m24012 (NetCodeGroup_t5346 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C" int32_t NetCodeGroup_GetHashCode_m24013 (NetCodeGroup_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5333 * NetCodeGroup_Resolve_m24014 (NetCodeGroup_t5346 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_CreateXml_m24015 (NetCodeGroup_t5346 * __this, SecurityElement_t4838 * ___element, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_ParseXml_m24016 (NetCodeGroup_t5346 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
