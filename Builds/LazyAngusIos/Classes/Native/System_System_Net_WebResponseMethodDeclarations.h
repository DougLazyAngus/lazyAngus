#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t1703;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2000;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Exception
struct Exception_t27;
// System.IO.Stream
struct Stream_t24;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m10780 (WebResponse_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m10781 (WebResponse_t1703 * __this, SerializationInfo_t1299 * ___serializationInfo, StreamingContext_t1300  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m10782 (WebResponse_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m10783 (WebResponse_t1703 * __this, SerializationInfo_t1299 * ___serializationInfo, StreamingContext_t1300  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t2000 * WebResponse_get_Headers_m10784 (WebResponse_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t27 * WebResponse_GetMustImplement_m10785 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m10786 (WebResponse_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t24 * WebResponse_GetResponseStream_m10787 (WebResponse_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m10788 (WebResponse_t1703 * __this, SerializationInfo_t1299 * ___serializationInfo, StreamingContext_t1300  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
