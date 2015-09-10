#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t2174;
// System.AppDomainSetup
struct AppDomainSetup_t3388;
// System.String
struct String_t;
// System.AppDomainManager
struct AppDomainManager_t4846;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t5060;
// System.Reflection.AssemblyName
struct AssemblyName_t1493;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5133;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.AppDomainSetup System.AppDomain::getSetup()
extern "C" AppDomainSetup_t3388 * AppDomain_getSetup_m20010 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C" AppDomainSetup_t3388 * AppDomain_get_SetupInformation_m12155 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m20011 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C" String_t* AppDomain_get_FriendlyName_m20012 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t2174 * AppDomain_getCurDomain_m20013 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t2174 * AppDomain_get_CurrentDomain_m8015 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5060 * AppDomain_DefineDynamicAssembly_m20014 (AppDomain_t2174 * __this, AssemblyName_t1493 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t5060 * AppDomain_DefineDynamicAssembly_m20015 (AppDomain_t2174 * __this, AssemblyName_t1493 * ___name, int32_t ___access, String_t* ___dir, Evidence_t4843 * ___evidence, PermissionSet_t4844 * ___requiredPermissions, PermissionSet_t4844 * ___optionalPermissions, PermissionSet_t4844 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t5060 * AppDomain_DefineInternalDynamicAssembly_m20016 (AppDomain_t2174 * __this, AssemblyName_t1493 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C" Object_t * AppDomain_InitializeLifetimeService_m20017 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t794 * AppDomain_LoadAssembly_m20018 (AppDomain_t2174 * __this, String_t* ___assemblyRef, Evidence_t4843 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t794 * AppDomain_Load_m20019 (AppDomain_t2174 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t794 * AppDomain_Load_m20020 (AppDomain_t2174 * __this, String_t* ___assemblyString, Evidence_t4843 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t5133 * AppDomain_InternalGetContext_m20021 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t5133 * AppDomain_InternalGetDefaultContext_m20022 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m20023 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m20024 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m20025 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m20026 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C" AppDomainManager_t4846 * AppDomain_get_DomainManager_m20027 (AppDomain_t2174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
