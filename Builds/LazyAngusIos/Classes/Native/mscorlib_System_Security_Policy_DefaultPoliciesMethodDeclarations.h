#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.DefaultPolicies
struct DefaultPolicies_t5332;
// System.Security.PermissionSet
struct PermissionSet_t4837;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t5346;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5233;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Policy.DefaultPolicies/Key
#include "mscorlib_System_Security_Policy_DefaultPolicies_Key.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C" void DefaultPolicies__cctor_m23885 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_FullTrust_m23886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_LocalIntranet_m23887 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_Internet_m23888 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_SkipVerification_m23889 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_Execution_m23890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_Nothing_m23891 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C" PermissionSet_t4837 * DefaultPolicies_get_Everything_m23892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C" StrongNameMembershipCondition_t5346 * DefaultPolicies_FullTrustMembership_m23893 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildFullTrust_m23894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildLocalIntranet_m23895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildInternet_m23896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildSkipVerification_m23897 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildExecution_m23898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildNothing_m23899 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C" NamedPermissionSet_t5233 * DefaultPolicies_BuildEverything_m23900 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C" SecurityElement_t4831 * DefaultPolicies_PrintingPermission_m23901 (Object_t * __this /* static, unused */, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
