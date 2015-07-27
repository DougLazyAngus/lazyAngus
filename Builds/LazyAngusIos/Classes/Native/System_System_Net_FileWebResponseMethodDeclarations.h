#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebResponse
struct FileWebResponse_t2020;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2002;
// System.Uri
struct Uri_t656;
// System.IO.FileStream
struct FileStream_t32;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.IO.Stream
struct Stream_t24;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C" void FileWebResponse__ctor_m10291 (FileWebResponse_t2020 * __this, Uri_t656 * ___responseUri, FileStream_t32 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse__ctor_m10292 (FileWebResponse_t2020 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m10293 (FileWebResponse_t2020 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C" void FileWebResponse_System_IDisposable_Dispose_m10294 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C" WebHeaderCollection_t2002 * FileWebResponse_get_Headers_m10295 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_GetObjectData_m10296 (FileWebResponse_t2020 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C" Stream_t24 * FileWebResponse_GetResponseStream_m10297 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C" void FileWebResponse_Finalize_m10298 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C" void FileWebResponse_Close_m10299 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C" void FileWebResponse_Dispose_m10300 (FileWebResponse_t2020 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C" void FileWebResponse_CheckDisposed_m10301 (FileWebResponse_t2020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
