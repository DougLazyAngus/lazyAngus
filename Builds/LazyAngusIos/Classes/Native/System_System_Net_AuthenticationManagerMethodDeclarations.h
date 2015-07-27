#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.AuthenticationManager
struct AuthenticationManager_t1996;
// System.Net.Authorization
struct Authorization_t1998;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1704;
// System.Net.ICredentials
struct ICredentials_t1682;

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m10116 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m10117 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1998 * AuthenticationManager_Authenticate_m10118 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t1704 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1998 * AuthenticationManager_DoAuthenticate_m10119 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t1704 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1998 * AuthenticationManager_PreAuthenticate_m10120 (Object_t * __this /* static, unused */, WebRequest_t1704 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
