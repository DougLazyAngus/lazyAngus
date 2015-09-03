#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t5243;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Reflection.Assembly
struct Assembly_t783;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Reflection.MethodBase
struct MethodBase_t1542;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.RuntimeDeclSecurityActions
#include "mscorlib_System_Security_RuntimeDeclSecurityActions.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m23238 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C" bool SecurityManager_get_CheckExecutionRights_m23239 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m23240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C" bool SecurityManager_IsGranted_m23241 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C" Object_t * SecurityManager_CheckPermissionSet_m23242 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, PermissionSet_t4833 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C" PermissionSet_t4833 * SecurityManager_ResolvePolicy_m23243 (Object_t * __this /* static, unused */, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C" PermissionSet_t4833 * SecurityManager_ResolvePolicy_m23244 (Object_t * __this /* static, unused */, Evidence_t4832 * ___evidence, PermissionSet_t4833 * ___reqdPset, PermissionSet_t4833 * ___optPset, PermissionSet_t4833 * ___denyPset, PermissionSet_t4833 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C" Object_t * SecurityManager_get_Hierarchy_m23245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C" void SecurityManager_InitializePolicyHierarchy_m23246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C" bool SecurityManager_ResolvePolicyLevel_m23247 (Object_t * __this /* static, unused */, PermissionSet_t4833 ** ___ps, PolicyLevel_t5231 * ___pl, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C" void SecurityManager_ResolveIdentityPermissions_m23248 (Object_t * __this /* static, unused */, PermissionSet_t4833 * ___ps, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C" PolicyLevel_t5231 * SecurityManager_get_ResolvingPolicyLevel_m23249 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C" void SecurityManager_set_ResolvingPolicyLevel_m23250 (Object_t * __this /* static, unused */, PolicyLevel_t5231 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t4833 * SecurityManager_Decode_m23251 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t4833 * SecurityManager_Decode_m23252 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_GetLinkDemandSecurity_m23253 (Object_t * __this /* static, unused */, MethodBase_t1542 * ___method, RuntimeDeclSecurityActions_t5241 * ___cdecl, RuntimeDeclSecurityActions_t5241 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C" void SecurityManager_ReflectedLinkDemandInvoke_m23254 (Object_t * __this /* static, unused */, MethodBase_t1542 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C" bool SecurityManager_ReflectedLinkDemandQuery_m23255 (Object_t * __this /* static, unused */, MethodBase_t1542 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_LinkDemand_m23256 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, RuntimeDeclSecurityActions_t5241 * ___klass, RuntimeDeclSecurityActions_t5241 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
