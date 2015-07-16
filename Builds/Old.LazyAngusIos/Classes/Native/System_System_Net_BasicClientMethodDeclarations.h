#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t1504;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1503;
// System.Net.WebRequest
struct WebRequest_t1531;
// System.Net.ICredentials
struct ICredentials_t1527;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m7267 (BasicClient_t1504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * BasicClient_Authenticate_m7268 (BasicClient_t1504 * __this, String_t* ___challenge, WebRequest_t1531 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t36* BasicClient_GetBytes_m7269 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * BasicClient_InternalAuthenticate_m7270 (Object_t * __this /* static, unused */, WebRequest_t1531 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1503 * BasicClient_PreAuthenticate_m7271 (BasicClient_t1504 * __this, WebRequest_t1531 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m7272 (BasicClient_t1504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
