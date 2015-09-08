#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.CodeGroup
struct CodeGroup_t5327;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5323;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5326;
// System.Collections.IList
struct IList_t701;
// System.Security.SecurityElement
struct SecurityElement_t4828;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5232;
// System.Security.Policy.Evidence
struct Evidence_t4833;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup__ctor_m23865 (CodeGroup_t5327 * __this, Object_t * ___membershipCondition, PolicyStatement_t5323 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup__ctor_m23866 (CodeGroup_t5327 * __this, SecurityElement_t4828 * ___e, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::Copy()
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::Resolve(System.Security.Policy.Evidence)
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C" PolicyStatement_t5323 * CodeGroup_get_PolicyStatement_m23867 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup_set_PolicyStatement_m23868 (CodeGroup_t5327 * __this, PolicyStatement_t5323 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C" String_t* CodeGroup_get_Description_m23869 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C" void CodeGroup_set_Description_m23870 (CodeGroup_t5327 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C" Object_t * CodeGroup_get_MembershipCondition_m23871 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C" String_t* CodeGroup_get_Name_m23872 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C" void CodeGroup_set_Name_m23873 (CodeGroup_t5327 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C" Object_t * CodeGroup_get_Children_m23874 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C" void CodeGroup_AddChild_m23875 (CodeGroup_t5327 * __this, CodeGroup_t5327 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C" bool CodeGroup_Equals_m23876 (CodeGroup_t5327 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C" bool CodeGroup_Equals_m23877 (CodeGroup_t5327 * __this, CodeGroup_t5327 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C" int32_t CodeGroup_GetHashCode_m23878 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_FromXml_m23879 (CodeGroup_t5327 * __this, SecurityElement_t4828 * ___e, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_ParseXml_m23880 (CodeGroup_t5327 * __this, SecurityElement_t4828 * ___e, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C" SecurityElement_t4828 * CodeGroup_ToXml_m23881 (CodeGroup_t5327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4828 * CodeGroup_ToXml_m23882 (CodeGroup_t5327 * __this, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_CreateXml_m23883 (CodeGroup_t5327 * __this, SecurityElement_t4828 * ___element, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" CodeGroup_t5327 * CodeGroup_CreateFromXml_m23884 (Object_t * __this /* static, unused */, SecurityElement_t4828 * ___se, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
