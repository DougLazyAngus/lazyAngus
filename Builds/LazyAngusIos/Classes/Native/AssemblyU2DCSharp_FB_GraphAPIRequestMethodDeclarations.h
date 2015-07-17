#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB_GraphAPIRequest
struct FB_GraphAPIRequest_t257;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void FB_GraphAPIRequest::.ctor()
extern "C" void FB_GraphAPIRequest__ctor_m1350 (FB_GraphAPIRequest_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FB_GraphAPIRequest FB_GraphAPIRequest::Create()
extern "C" FB_GraphAPIRequest_t257 * FB_GraphAPIRequest_Create_m1351 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB_GraphAPIRequest::Send()
extern "C" void FB_GraphAPIRequest_Send_m1352 (FB_GraphAPIRequest_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB_GraphAPIRequest::AppendUrl(System.String)
extern "C" void FB_GraphAPIRequest_AppendUrl_m1353 (FB_GraphAPIRequest_t257 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB_GraphAPIRequest::AddParam(System.String,System.Int32)
extern "C" void FB_GraphAPIRequest_AddParam_m1354 (FB_GraphAPIRequest_t257 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB_GraphAPIRequest::AddParam(System.String,System.String)
extern "C" void FB_GraphAPIRequest_AddParam_m1355 (FB_GraphAPIRequest_t257 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FB_GraphAPIRequest::Request()
extern "C" Object_t * FB_GraphAPIRequest_Request_m1356 (FB_GraphAPIRequest_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
