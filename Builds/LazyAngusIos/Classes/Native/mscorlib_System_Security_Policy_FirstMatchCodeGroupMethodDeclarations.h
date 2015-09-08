#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.FirstMatchCodeGroup
struct FirstMatchCodeGroup_t5335;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5329;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5326;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5330;
// System.Security.Policy.Evidence
struct Evidence_t4836;

// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void FirstMatchCodeGroup__ctor_m23931 (FirstMatchCodeGroup_t5335 * __this, Object_t * ___membershipCondition, PolicyStatement_t5326 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FirstMatchCodeGroup__ctor_m23932 (FirstMatchCodeGroup_t5335 * __this, SecurityElement_t4831 * ___e, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FirstMatchCodeGroup::Copy()
extern "C" CodeGroup_t5330 * FirstMatchCodeGroup_Copy_m23933 (FirstMatchCodeGroup_t5335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FirstMatchCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5326 * FirstMatchCodeGroup_Resolve_m23934 (FirstMatchCodeGroup_t5335 * __this, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.FirstMatchCodeGroup System.Security.Policy.FirstMatchCodeGroup::CopyNoChildren()
extern "C" FirstMatchCodeGroup_t5335 * FirstMatchCodeGroup_CopyNoChildren_m23935 (FirstMatchCodeGroup_t5335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
