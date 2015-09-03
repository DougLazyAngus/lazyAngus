#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.CodeGroup
struct CodeGroup_t5326;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Collections.IList
struct IList_t700;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup__ctor_m23852 (CodeGroup_t5326 * __this, Object_t * ___membershipCondition, PolicyStatement_t5322 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup__ctor_m23853 (CodeGroup_t5326 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::Copy()
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::Resolve(System.Security.Policy.Evidence)
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C" PolicyStatement_t5322 * CodeGroup_get_PolicyStatement_m23854 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup_set_PolicyStatement_m23855 (CodeGroup_t5326 * __this, PolicyStatement_t5322 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C" String_t* CodeGroup_get_Description_m23856 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C" void CodeGroup_set_Description_m23857 (CodeGroup_t5326 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C" Object_t * CodeGroup_get_MembershipCondition_m23858 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C" String_t* CodeGroup_get_Name_m23859 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C" void CodeGroup_set_Name_m23860 (CodeGroup_t5326 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C" Object_t * CodeGroup_get_Children_m23861 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C" void CodeGroup_AddChild_m23862 (CodeGroup_t5326 * __this, CodeGroup_t5326 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C" bool CodeGroup_Equals_m23863 (CodeGroup_t5326 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C" bool CodeGroup_Equals_m23864 (CodeGroup_t5326 * __this, CodeGroup_t5326 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C" int32_t CodeGroup_GetHashCode_m23865 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_FromXml_m23866 (CodeGroup_t5326 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_ParseXml_m23867 (CodeGroup_t5326 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C" SecurityElement_t4827 * CodeGroup_ToXml_m23868 (CodeGroup_t5326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4827 * CodeGroup_ToXml_m23869 (CodeGroup_t5326 * __this, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_CreateXml_m23870 (CodeGroup_t5326 * __this, SecurityElement_t4827 * ___element, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" CodeGroup_t5326 * CodeGroup_CreateFromXml_m23871 (Object_t * __this /* static, unused */, SecurityElement_t4827 * ___se, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
