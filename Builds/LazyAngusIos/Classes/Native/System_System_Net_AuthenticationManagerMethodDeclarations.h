#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.AuthenticationManager
struct AuthenticationManager_t3954;
// System.Net.Authorization
struct Authorization_t3956;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t3244;
// System.Net.ICredentials
struct ICredentials_t3226;

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m13330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m13331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3956 * AuthenticationManager_Authenticate_m13332 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3244 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3956 * AuthenticationManager_DoAuthenticate_m13333 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t3244 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3956 * AuthenticationManager_PreAuthenticate_m13334 (Object_t * __this /* static, unused */, WebRequest_t3244 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
