#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t1998;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1997;
// System.Net.WebRequest
struct WebRequest_t1703;
// System.Net.ICredentials
struct ICredentials_t1681;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m10121 (BasicClient_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1997 * BasicClient_Authenticate_m10122 (BasicClient_t1998 * __this, String_t* ___challenge, WebRequest_t1703 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t36* BasicClient_GetBytes_m10123 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1997 * BasicClient_InternalAuthenticate_m10124 (Object_t * __this /* static, unused */, WebRequest_t1703 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1997 * BasicClient_PreAuthenticate_m10125 (BasicClient_t1998 * __this, WebRequest_t1703 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m10126 (BasicClient_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
