#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TW_APIRequest
struct TW_APIRequest_t287;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void TW_APIRequest::.ctor()
extern "C" void TW_APIRequest__ctor_m1455 (TW_APIRequest_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::Send()
extern "C" void TW_APIRequest_Send_m1456 (TW_APIRequest_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::AddParam(System.String,System.Int32)
extern "C" void TW_APIRequest_AddParam_m1457 (TW_APIRequest_t287 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::AddParam(System.String,System.String)
extern "C" void TW_APIRequest_AddParam_m1458 (TW_APIRequest_t287 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::SetUrl(System.String)
extern "C" void TW_APIRequest_SetUrl_m1459 (TW_APIRequest_t287 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TW_APIRequest::Request()
extern "C" Object_t * TW_APIRequest_Request_m1460 (TW_APIRequest_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::OnResult(System.String)
// System.Void TW_APIRequest::OnTokenLoaded()
extern "C" void TW_APIRequest_OnTokenLoaded_m1461 (TW_APIRequest_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
