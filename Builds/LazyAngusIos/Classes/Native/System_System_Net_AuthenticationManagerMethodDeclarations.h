#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.AuthenticationManager
struct AuthenticationManager_t4010;
// System.Net.Authorization
struct Authorization_t4012;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t3301;
// System.Net.ICredentials
struct ICredentials_t3283;

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m13648 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m13649 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * AuthenticationManager_Authenticate_m13650 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3301 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * AuthenticationManager_DoAuthenticate_m13651 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3301 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * AuthenticationManager_PreAuthenticate_m13652 (Object_t * __this /* static, unused */, WebRequest_t3301 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
