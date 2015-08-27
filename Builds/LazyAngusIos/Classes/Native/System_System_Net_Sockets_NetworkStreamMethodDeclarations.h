#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.NetworkStream
struct NetworkStream_t3992;
// System.Net.Sockets.Socket
struct Socket_t3991;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C" void NetworkStream__ctor_m13552 (NetworkStream_t3992 * __this, Socket_t3991 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C" void NetworkStream__ctor_m13553 (NetworkStream_t3992 * __this, Socket_t3991 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C" void NetworkStream__ctor_m13554 (NetworkStream_t3992 * __this, Socket_t3991 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C" void NetworkStream_System_IDisposable_Dispose_m13555 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C" bool NetworkStream_get_CanRead_m13556 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C" bool NetworkStream_get_CanSeek_m13557 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C" bool NetworkStream_get_CanWrite_m13558 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C" int64_t NetworkStream_get_Length_m13559 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C" int64_t NetworkStream_get_Position_m13560 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C" void NetworkStream_set_Position_m13561 (NetworkStream_t3992 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C" int32_t NetworkStream_get_ReadTimeout_m13562 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C" int32_t NetworkStream_get_WriteTimeout_m13563 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginRead_m13564 (NetworkStream_t3992 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginWrite_m13565 (NetworkStream_t3992 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C" void NetworkStream_Finalize_m13566 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C" void NetworkStream_Dispose_m13567 (NetworkStream_t3992 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C" int32_t NetworkStream_EndRead_m13568 (NetworkStream_t3992 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C" void NetworkStream_EndWrite_m13569 (NetworkStream_t3992 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C" void NetworkStream_Flush_m13570 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NetworkStream_Read_m13571 (NetworkStream_t3992 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NetworkStream_Seek_m13572 (NetworkStream_t3992 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C" void NetworkStream_SetLength_m13573 (NetworkStream_t3992 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NetworkStream_Write_m13574 (NetworkStream_t3992 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C" void NetworkStream_CheckDisposed_m13575 (NetworkStream_t3992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
