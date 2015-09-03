#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.DefaultPolicies
struct DefaultPolicies_t5328;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t5342;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5229;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.DefaultPolicies/Key
#include "mscorlib_System_Security_Policy_DefaultPolicies_Key.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C" void DefaultPolicies__cctor_m23872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_FullTrust_m23873 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_LocalIntranet_m23874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_Internet_m23875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_SkipVerification_m23876 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_Execution_m23877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_Nothing_m23878 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C" PermissionSet_t4833 * DefaultPolicies_get_Everything_m23879 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C" StrongNameMembershipCondition_t5342 * DefaultPolicies_FullTrustMembership_m23880 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildFullTrust_m23881 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildLocalIntranet_m23882 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildInternet_m23883 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildSkipVerification_m23884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildExecution_m23885 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildNothing_m23886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C" NamedPermissionSet_t5229 * DefaultPolicies_BuildEverything_m23887 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C" SecurityElement_t4827 * DefaultPolicies_PrintingPermission_m23888 (Object_t * __this /* static, unused */, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
