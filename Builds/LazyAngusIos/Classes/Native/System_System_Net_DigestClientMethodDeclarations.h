﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestClient
struct DigestClient_t1496;
// System.Collections.Hashtable
struct Hashtable_t1413;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1478;
// System.Net.WebRequest
struct WebRequest_t1506;
// System.Net.ICredentials
struct ICredentials_t1502;

// System.Void System.Net.DigestClient::.ctor()
extern "C" void DigestClient__ctor_m7208 (DigestClient_t1496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C" void DigestClient__cctor_m7209 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C" Hashtable_t1413 * DigestClient_get_Cache_m7210 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C" void DigestClient_CheckExpired_m7211 (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1478 * DigestClient_Authenticate_m7212 (DigestClient_t1496 * __this, String_t* ___challenge, WebRequest_t1506 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1478 * DigestClient_PreAuthenticate_m7213 (DigestClient_t1496 * __this, WebRequest_t1506 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C" String_t* DigestClient_get_AuthenticationType_m7214 (DigestClient_t1496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
