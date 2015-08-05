#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebResponse
struct FileWebResponse_t3989;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3971;
// System.Uri
struct Uri_t710;
// System.IO.FileStream
struct FileStream_t62;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.IO.Stream
struct Stream_t51;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C" void FileWebResponse__ctor_m13583 (FileWebResponse_t3989 * __this, Uri_t710 * ___responseUri, FileStream_t62 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse__ctor_m13584 (FileWebResponse_t3989 * __this, SerializationInfo_t2871 * ___serializationInfo, StreamingContext_t2872  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m13585 (FileWebResponse_t3989 * __this, SerializationInfo_t2871 * ___serializationInfo, StreamingContext_t2872  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C" void FileWebResponse_System_IDisposable_Dispose_m13586 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C" WebHeaderCollection_t3971 * FileWebResponse_get_Headers_m13587 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_GetObjectData_m13588 (FileWebResponse_t3989 * __this, SerializationInfo_t2871 * ___serializationInfo, StreamingContext_t2872  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C" Stream_t51 * FileWebResponse_GetResponseStream_m13589 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C" void FileWebResponse_Finalize_m13590 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C" void FileWebResponse_Close_m13591 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C" void FileWebResponse_Dispose_m13592 (FileWebResponse_t3989 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C" void FileWebResponse_CheckDisposed_m13593 (FileWebResponse_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
