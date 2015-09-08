#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t2167;
// System.AppDomainSetup
struct AppDomainSetup_t3381;
// System.String
struct String_t;
// System.AppDomainManager
struct AppDomainManager_t4839;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t5053;
// System.Reflection.AssemblyName
struct AssemblyName_t1486;
// System.Security.Policy.Evidence
struct Evidence_t4836;
// System.Security.PermissionSet
struct PermissionSet_t4837;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t787;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5126;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.AppDomainSetup System.AppDomain::getSetup()
extern "C" AppDomainSetup_t3381 * AppDomain_getSetup_m19953 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C" AppDomainSetup_t3381 * AppDomain_get_SetupInformation_m12098 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m19954 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C" String_t* AppDomain_get_FriendlyName_m19955 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t2167 * AppDomain_getCurDomain_m19956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t2167 * AppDomain_get_CurrentDomain_m7957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5053 * AppDomain_DefineDynamicAssembly_m19957 (AppDomain_t2167 * __this, AssemblyName_t1486 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t5053 * AppDomain_DefineDynamicAssembly_m19958 (AppDomain_t2167 * __this, AssemblyName_t1486 * ___name, int32_t ___access, String_t* ___dir, Evidence_t4836 * ___evidence, PermissionSet_t4837 * ___requiredPermissions, PermissionSet_t4837 * ___optionalPermissions, PermissionSet_t4837 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5053 * AppDomain_DefineInternalDynamicAssembly_m19959 (AppDomain_t2167 * __this, AssemblyName_t1486 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C" Object_t * AppDomain_InitializeLifetimeService_m19960 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t787 * AppDomain_LoadAssembly_m19961 (AppDomain_t2167 * __this, String_t* ___assemblyRef, Evidence_t4836 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t787 * AppDomain_Load_m19962 (AppDomain_t2167 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t787 * AppDomain_Load_m19963 (AppDomain_t2167 * __this, String_t* ___assemblyString, Evidence_t4836 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t5126 * AppDomain_InternalGetContext_m19964 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t5126 * AppDomain_InternalGetDefaultContext_m19965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m19966 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m19967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m19968 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m19969 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C" AppDomainManager_t4839 * AppDomain_get_DomainManager_m19970 (AppDomain_t2167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
