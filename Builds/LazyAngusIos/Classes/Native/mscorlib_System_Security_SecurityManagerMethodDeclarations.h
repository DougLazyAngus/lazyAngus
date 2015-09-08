#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t5247;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;
// System.Reflection.Assembly
struct Assembly_t787;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.PermissionSet
struct PermissionSet_t4837;
// System.Security.Policy.Evidence
struct Evidence_t4836;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Reflection.MethodBase
struct MethodBase_t1546;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.RuntimeDeclSecurityActions
#include "mscorlib_System_Security_RuntimeDeclSecurityActions.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m23251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C" bool SecurityManager_get_CheckExecutionRights_m23252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m23253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C" bool SecurityManager_IsGranted_m23254 (Object_t * __this /* static, unused */, Assembly_t787 * ___a, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C" Object_t * SecurityManager_CheckPermissionSet_m23255 (Object_t * __this /* static, unused */, Assembly_t787 * ___a, PermissionSet_t4837 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C" PermissionSet_t4837 * SecurityManager_ResolvePolicy_m23256 (Object_t * __this /* static, unused */, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C" PermissionSet_t4837 * SecurityManager_ResolvePolicy_m23257 (Object_t * __this /* static, unused */, Evidence_t4836 * ___evidence, PermissionSet_t4837 * ___reqdPset, PermissionSet_t4837 * ___optPset, PermissionSet_t4837 * ___denyPset, PermissionSet_t4837 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C" Object_t * SecurityManager_get_Hierarchy_m23258 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C" void SecurityManager_InitializePolicyHierarchy_m23259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C" bool SecurityManager_ResolvePolicyLevel_m23260 (Object_t * __this /* static, unused */, PermissionSet_t4837 ** ___ps, PolicyLevel_t5235 * ___pl, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C" void SecurityManager_ResolveIdentityPermissions_m23261 (Object_t * __this /* static, unused */, PermissionSet_t4837 * ___ps, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C" PolicyLevel_t5235 * SecurityManager_get_ResolvingPolicyLevel_m23262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C" void SecurityManager_set_ResolvingPolicyLevel_m23263 (Object_t * __this /* static, unused */, PolicyLevel_t5235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t4837 * SecurityManager_Decode_m23264 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t4837 * SecurityManager_Decode_m23265 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_GetLinkDemandSecurity_m23266 (Object_t * __this /* static, unused */, MethodBase_t1546 * ___method, RuntimeDeclSecurityActions_t5245 * ___cdecl, RuntimeDeclSecurityActions_t5245 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C" void SecurityManager_ReflectedLinkDemandInvoke_m23267 (Object_t * __this /* static, unused */, MethodBase_t1546 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C" bool SecurityManager_ReflectedLinkDemandQuery_m23268 (Object_t * __this /* static, unused */, MethodBase_t1546 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_LinkDemand_m23269 (Object_t * __this /* static, unused */, Assembly_t787 * ___a, RuntimeDeclSecurityActions_t5245 * ___klass, RuntimeDeclSecurityActions_t5245 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
