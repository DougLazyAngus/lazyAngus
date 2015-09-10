#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t5254;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Reflection.MethodBase
struct MethodBase_t1553;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.RuntimeDeclSecurityActions
#include "mscorlib_System_Security_RuntimeDeclSecurityActions.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m23308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C" bool SecurityManager_get_CheckExecutionRights_m23309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m23310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C" bool SecurityManager_IsGranted_m23311 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C" Object_t * SecurityManager_CheckPermissionSet_m23312 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, PermissionSet_t4844 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C" PermissionSet_t4844 * SecurityManager_ResolvePolicy_m23313 (Object_t * __this /* static, unused */, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C" PermissionSet_t4844 * SecurityManager_ResolvePolicy_m23314 (Object_t * __this /* static, unused */, Evidence_t4843 * ___evidence, PermissionSet_t4844 * ___reqdPset, PermissionSet_t4844 * ___optPset, PermissionSet_t4844 * ___denyPset, PermissionSet_t4844 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C" Object_t * SecurityManager_get_Hierarchy_m23315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C" void SecurityManager_InitializePolicyHierarchy_m23316 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C" bool SecurityManager_ResolvePolicyLevel_m23317 (Object_t * __this /* static, unused */, PermissionSet_t4844 ** ___ps, PolicyLevel_t5242 * ___pl, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C" void SecurityManager_ResolveIdentityPermissions_m23318 (Object_t * __this /* static, unused */, PermissionSet_t4844 * ___ps, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C" PolicyLevel_t5242 * SecurityManager_get_ResolvingPolicyLevel_m23319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C" void SecurityManager_set_ResolvingPolicyLevel_m23320 (Object_t * __this /* static, unused */, PolicyLevel_t5242 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t4844 * SecurityManager_Decode_m23321 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t4844 * SecurityManager_Decode_m23322 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_GetLinkDemandSecurity_m23323 (Object_t * __this /* static, unused */, MethodBase_t1553 * ___method, RuntimeDeclSecurityActions_t5252 * ___cdecl, RuntimeDeclSecurityActions_t5252 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C" void SecurityManager_ReflectedLinkDemandInvoke_m23324 (Object_t * __this /* static, unused */, MethodBase_t1553 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C" bool SecurityManager_ReflectedLinkDemandQuery_m23325 (Object_t * __this /* static, unused */, MethodBase_t1553 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_LinkDemand_m23326 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, RuntimeDeclSecurityActions_t5252 * ___klass, RuntimeDeclSecurityActions_t5252 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
