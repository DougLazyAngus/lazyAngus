#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TW_APIRequest
struct TW_APIRequest_t327;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void TW_APIRequest::.ctor()
extern "C" void TW_APIRequest__ctor_m1728 (TW_APIRequest_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::Send()
extern "C" void TW_APIRequest_Send_m1729 (TW_APIRequest_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::AddParam(System.String,System.Int32)
extern "C" void TW_APIRequest_AddParam_m1730 (TW_APIRequest_t327 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::AddParam(System.String,System.String)
extern "C" void TW_APIRequest_AddParam_m1731 (TW_APIRequest_t327 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::SetUrl(System.String)
extern "C" void TW_APIRequest_SetUrl_m1732 (TW_APIRequest_t327 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TW_APIRequest::Request()
extern "C" Object_t * TW_APIRequest_Request_m1733 (TW_APIRequest_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TW_APIRequest::OnResult(System.String)
// System.Void TW_APIRequest::OnTokenLoaded()
extern "C" void TW_APIRequest_OnTokenLoaded_m1734 (TW_APIRequest_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
