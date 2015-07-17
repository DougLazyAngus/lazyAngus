#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t1997;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1996;
// System.Net.WebRequest
struct WebRequest_t1702;
// System.Net.ICredentials
struct ICredentials_t1680;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m10113 (BasicClient_t1997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1996 * BasicClient_Authenticate_m10114 (BasicClient_t1997 * __this, String_t* ___challenge, WebRequest_t1702 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t36* BasicClient_GetBytes_m10115 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1996 * BasicClient_InternalAuthenticate_m10116 (Object_t * __this /* static, unused */, WebRequest_t1702 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1996 * BasicClient_PreAuthenticate_m10117 (BasicClient_t1997 * __this, WebRequest_t1702 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m10118 (BasicClient_t1997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
