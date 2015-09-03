#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t2163;
// System.AppDomainSetup
struct AppDomainSetup_t3377;
// System.String
struct String_t;
// System.AppDomainManager
struct AppDomainManager_t4835;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t5049;
// System.Reflection.AssemblyName
struct AssemblyName_t1482;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t783;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5122;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.AppDomainSetup System.AppDomain::getSetup()
extern "C" AppDomainSetup_t3377 * AppDomain_getSetup_m19940 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C" AppDomainSetup_t3377 * AppDomain_get_SetupInformation_m12085 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m19941 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C" String_t* AppDomain_get_FriendlyName_m19942 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t2163 * AppDomain_getCurDomain_m19943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t2163 * AppDomain_get_CurrentDomain_m7944 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5049 * AppDomain_DefineDynamicAssembly_m19944 (AppDomain_t2163 * __this, AssemblyName_t1482 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t5049 * AppDomain_DefineDynamicAssembly_m19945 (AppDomain_t2163 * __this, AssemblyName_t1482 * ___name, int32_t ___access, String_t* ___dir, Evidence_t4832 * ___evidence, PermissionSet_t4833 * ___requiredPermissions, PermissionSet_t4833 * ___optionalPermissions, PermissionSet_t4833 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5049 * AppDomain_DefineInternalDynamicAssembly_m19946 (AppDomain_t2163 * __this, AssemblyName_t1482 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C" Object_t * AppDomain_InitializeLifetimeService_m19947 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t783 * AppDomain_LoadAssembly_m19948 (AppDomain_t2163 * __this, String_t* ___assemblyRef, Evidence_t4832 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t783 * AppDomain_Load_m19949 (AppDomain_t2163 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t783 * AppDomain_Load_m19950 (AppDomain_t2163 * __this, String_t* ___assemblyString, Evidence_t4832 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t5122 * AppDomain_InternalGetContext_m19951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t5122 * AppDomain_InternalGetDefaultContext_m19952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m19953 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m19954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m19955 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m19956 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C" AppDomainManager_t4835 * AppDomain_get_DomainManager_m19957 (AppDomain_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
