﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t1479;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1478;
// System.Net.WebRequest
struct WebRequest_t1506;
// System.Net.ICredentials
struct ICredentials_t1502;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m7087 (BasicClient_t1479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1478 * BasicClient_Authenticate_m7088 (BasicClient_t1479 * __this, String_t* ___challenge, WebRequest_t1506 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t36* BasicClient_GetBytes_m7089 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1478 * BasicClient_InternalAuthenticate_m7090 (Object_t * __this /* static, unused */, WebRequest_t1506 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1478 * BasicClient_PreAuthenticate_m7091 (BasicClient_t1479 * __this, WebRequest_t1506 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m7092 (BasicClient_t1479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
