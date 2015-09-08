#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t5344;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5326;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5323;
// System.Security.SecurityElement
struct SecurityElement_t4828;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5232;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5327;
// System.Security.Policy.Evidence
struct Evidence_t4833;

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void UnionCodeGroup__ctor_m24029 (UnionCodeGroup_t5344 * __this, Object_t * ___membershipCondition, PolicyStatement_t5323 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void UnionCodeGroup__ctor_m24030 (UnionCodeGroup_t5344 * __this, SecurityElement_t4828 * ___e, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C" CodeGroup_t5327 * UnionCodeGroup_Copy_m24031 (UnionCodeGroup_t5344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C" CodeGroup_t5327 * UnionCodeGroup_Copy_m24032 (UnionCodeGroup_t5344 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5323 * UnionCodeGroup_Resolve_m24033 (UnionCodeGroup_t5344 * __this, Evidence_t4833 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
