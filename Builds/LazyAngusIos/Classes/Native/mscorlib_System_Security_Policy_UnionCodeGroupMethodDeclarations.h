#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t5343;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5326;
// System.Security.Policy.Evidence
struct Evidence_t4832;

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void UnionCodeGroup__ctor_m24016 (UnionCodeGroup_t5343 * __this, Object_t * ___membershipCondition, PolicyStatement_t5322 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void UnionCodeGroup__ctor_m24017 (UnionCodeGroup_t5343 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C" CodeGroup_t5326 * UnionCodeGroup_Copy_m24018 (UnionCodeGroup_t5343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C" CodeGroup_t5326 * UnionCodeGroup_Copy_m24019 (UnionCodeGroup_t5343 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5322 * UnionCodeGroup_Resolve_m24020 (UnionCodeGroup_t5343 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
