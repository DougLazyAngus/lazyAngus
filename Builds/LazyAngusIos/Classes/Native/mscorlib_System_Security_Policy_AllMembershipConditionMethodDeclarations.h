#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t5321;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.String
struct String_t;

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C" void AllMembershipCondition__ctor_m23834 (AllMembershipCondition_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool AllMembershipCondition_Check_m23835 (AllMembershipCondition_t5321 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C" Object_t * AllMembershipCondition_Copy_m23836 (AllMembershipCondition_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C" bool AllMembershipCondition_Equals_m23837 (AllMembershipCondition_t5321 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void AllMembershipCondition_FromXml_m23838 (AllMembershipCondition_t5321 * __this, SecurityElement_t4827 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void AllMembershipCondition_FromXml_m23839 (AllMembershipCondition_t5321 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C" int32_t AllMembershipCondition_GetHashCode_m23840 (AllMembershipCondition_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C" String_t* AllMembershipCondition_ToString_m23841 (AllMembershipCondition_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C" SecurityElement_t4827 * AllMembershipCondition_ToXml_m23842 (AllMembershipCondition_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4827 * AllMembershipCondition_ToXml_m23843 (AllMembershipCondition_t5321 * __this, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
