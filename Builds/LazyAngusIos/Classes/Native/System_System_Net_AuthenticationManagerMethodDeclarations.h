#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.AuthenticationManager
struct AuthenticationManager_t1501;
// System.Net.Authorization
struct Authorization_t1503;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1531;
// System.Net.ICredentials
struct ICredentials_t1527;

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m7255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m7256 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * AuthenticationManager_Authenticate_m7257 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t1531 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * AuthenticationManager_DoAuthenticate_m7258 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t1531 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * AuthenticationManager_PreAuthenticate_m7259 (Object_t * __this /* static, unused */, WebRequest_t1531 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
