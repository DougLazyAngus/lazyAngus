#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Compression.DeflateStream
struct DeflateStream_t3933;
// System.IO.Stream
struct Stream_t51;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3930;
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C" void DeflateStream__ctor_m13205 (DeflateStream_t3933 * __this, Stream_t51 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern "C" void DeflateStream__ctor_m13206 (DeflateStream_t3933 * __this, Stream_t51 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, bool ___gzip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C" void DeflateStream_Dispose_m13207 (DeflateStream_t3933 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t DeflateStream_UnmanagedRead_m13208 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_UnmanagedRead_m13209 (DeflateStream_t3933 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t DeflateStream_UnmanagedWrite_m13210 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_UnmanagedWrite_m13211 (DeflateStream_t3933 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflateStream_ReadInternal_m13212 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflateStream_Read_m13213 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateStream_WriteInternal_m13214 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateStream_Write_m13215 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
extern "C" void DeflateStream_CheckResult_m13216 (Object_t * __this /* static, unused */, int32_t ___result, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
extern "C" void DeflateStream_Flush_m13217 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflateStream_BeginRead_m13218 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflateStream_BeginWrite_m13219 (DeflateStream_t3933 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C" int32_t DeflateStream_EndRead_m13220 (DeflateStream_t3933 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C" void DeflateStream_EndWrite_m13221 (DeflateStream_t3933 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t DeflateStream_Seek_m13222 (DeflateStream_t3933 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C" void DeflateStream_SetLength_m13223 (DeflateStream_t3933 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern "C" bool DeflateStream_get_CanRead_m13224 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern "C" bool DeflateStream_get_CanSeek_m13225 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern "C" bool DeflateStream_get_CanWrite_m13226 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern "C" int64_t DeflateStream_get_Length_m13227 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern "C" int64_t DeflateStream_get_Position_m13228 (DeflateStream_t3933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C" void DeflateStream_set_Position_m13229 (DeflateStream_t3933 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
extern "C" IntPtr_t DeflateStream_CreateZStream_m13230 (Object_t * __this /* static, unused */, int32_t ___compress, bool ___gzip, UnmanagedReadOrWrite_t3930 * ___feeder, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
extern "C" int32_t DeflateStream_CloseZStream_m13231 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
extern "C" int32_t DeflateStream_Flush_m13232 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_ReadZStream_m13233 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C" int32_t DeflateStream_WriteZStream_m13234 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
