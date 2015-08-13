#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t4013;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t4012;
// System.Net.WebRequest
struct WebRequest_t3301;
// System.Net.ICredentials
struct ICredentials_t3283;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m13660 (BasicClient_t4013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * BasicClient_Authenticate_m13661 (BasicClient_t4013 * __this, String_t* ___challenge, WebRequest_t3301 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t66* BasicClient_GetBytes_m13662 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * BasicClient_InternalAuthenticate_m13663 (Object_t * __this /* static, unused */, WebRequest_t3301 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t4012 * BasicClient_PreAuthenticate_m13664 (BasicClient_t4013 * __this, WebRequest_t3301 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m13665 (BasicClient_t4013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
