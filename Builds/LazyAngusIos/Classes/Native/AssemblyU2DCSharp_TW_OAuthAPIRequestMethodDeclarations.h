#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TW_OAuthAPIRequest
struct TW_OAuthAPIRequest_t264;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TW_APIRequstResult
struct TW_APIRequstResult_t254;

// System.Void TW_OAuthAPIRequest::.ctor()
extern "C" void TW_OAuthAPIRequest__ctor_m1074 (TW_OAuthAPIRequest_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TW_OAuthAPIRequest TW_OAuthAPIRequest::Create()
extern "C" TW_OAuthAPIRequest_t264 * TW_OAuthAPIRequest_Create_m1075 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_OAuthAPIRequest::Send(System.String)
extern "C" void TW_OAuthAPIRequest_Send_m1076 (TW_OAuthAPIRequest_t264 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_OAuthAPIRequest::AddParam(System.String,System.Int32)
extern "C" void TW_OAuthAPIRequest_AddParam_m1077 (TW_OAuthAPIRequest_t264 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_OAuthAPIRequest::AddParam(System.String,System.String)
extern "C" void TW_OAuthAPIRequest_AddParam_m1078 (TW_OAuthAPIRequest_t264 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_OAuthAPIRequest::SetUrl(System.String)
extern "C" void TW_OAuthAPIRequest_SetUrl_m1079 (TW_OAuthAPIRequest_t264 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TW_OAuthAPIRequest::Request()
extern "C" Object_t * TW_OAuthAPIRequest_Request_m1080 (TW_OAuthAPIRequest_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_OAuthAPIRequest::<OnResult>m__17(TW_APIRequstResult)
extern "C" void TW_OAuthAPIRequest_U3COnResultU3Em__17_m1081 (Object_t * __this /* static, unused */, TW_APIRequstResult_t254 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
