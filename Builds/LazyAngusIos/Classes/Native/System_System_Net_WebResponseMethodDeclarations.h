#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t3728;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4307;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Exception
struct Exception_t57;
// System.IO.Stream
struct Stream_t51;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m17162 (WebResponse_t3728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m17163 (WebResponse_t3728 * __this, SerializationInfo_t2936 * ___serializationInfo, StreamingContext_t2937  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m17164 (WebResponse_t3728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m17165 (WebResponse_t3728 * __this, SerializationInfo_t2936 * ___serializationInfo, StreamingContext_t2937  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t4307 * WebResponse_get_Headers_m17166 (WebResponse_t3728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t57 * WebResponse_GetMustImplement_m17167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m17168 (WebResponse_t3728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t51 * WebResponse_GetResponseStream_m17169 (WebResponse_t3728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m17170 (WebResponse_t3728 * __this, SerializationInfo_t2936 * ___serializationInfo, StreamingContext_t2937  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
