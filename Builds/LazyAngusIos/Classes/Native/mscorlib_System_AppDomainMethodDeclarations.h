#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t2097;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t722;
// System.Security.Policy.Evidence
struct Evidence_t4483;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4553;

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m19094 (AppDomain_t2097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C" String_t* AppDomain_get_FriendlyName_m7544 (AppDomain_t2097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t2097 * AppDomain_getCurDomain_m19095 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t2097 * AppDomain_get_CurrentDomain_m7543 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t722 * AppDomain_LoadAssembly_m19096 (AppDomain_t2097 * __this, String_t* ___assemblyRef, Evidence_t4483 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t722 * AppDomain_Load_m19097 (AppDomain_t2097 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t722 * AppDomain_Load_m19098 (AppDomain_t2097 * __this, String_t* ___assemblyString, Evidence_t4483 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t4553 * AppDomain_InternalGetContext_m19099 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t4553 * AppDomain_InternalGetDefaultContext_m19100 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m19101 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m19102 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m19103 (AppDomain_t2097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
