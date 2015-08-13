#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t3302;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4016;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Exception
struct Exception_t57;
// System.IO.Stream
struct Stream_t51;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m14327 (WebResponse_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m14328 (WebResponse_t3302 * __this, SerializationInfo_t2919 * ___serializationInfo, StreamingContext_t2920  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m14329 (WebResponse_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m14330 (WebResponse_t3302 * __this, SerializationInfo_t2919 * ___serializationInfo, StreamingContext_t2920  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t4016 * WebResponse_get_Headers_m14331 (WebResponse_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t57 * WebResponse_GetMustImplement_m14332 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m14333 (WebResponse_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t51 * WebResponse_GetResponseStream_m14334 (WebResponse_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m14335 (WebResponse_t3302 * __this, SerializationInfo_t2919 * ___serializationInfo, StreamingContext_t2920  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
