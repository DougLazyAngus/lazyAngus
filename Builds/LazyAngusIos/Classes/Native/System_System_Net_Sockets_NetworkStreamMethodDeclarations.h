﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.NetworkStream
struct NetworkStream_t1455;
// System.Net.Sockets.Socket
struct Socket_t1454;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C" void NetworkStream__ctor_m6954 (NetworkStream_t1455 * __this, Socket_t1454 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C" void NetworkStream__ctor_m6955 (NetworkStream_t1455 * __this, Socket_t1454 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C" void NetworkStream__ctor_m6956 (NetworkStream_t1455 * __this, Socket_t1454 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C" void NetworkStream_System_IDisposable_Dispose_m6957 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C" bool NetworkStream_get_CanRead_m6958 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C" bool NetworkStream_get_CanSeek_m6959 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C" bool NetworkStream_get_CanWrite_m6960 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C" int64_t NetworkStream_get_Length_m6961 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C" int64_t NetworkStream_get_Position_m6962 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C" void NetworkStream_set_Position_m6963 (NetworkStream_t1455 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C" int32_t NetworkStream_get_ReadTimeout_m6964 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C" int32_t NetworkStream_get_WriteTimeout_m6965 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginRead_m6966 (NetworkStream_t1455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginWrite_m6967 (NetworkStream_t1455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C" void NetworkStream_Finalize_m6968 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C" void NetworkStream_Dispose_m6969 (NetworkStream_t1455 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C" int32_t NetworkStream_EndRead_m6970 (NetworkStream_t1455 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C" void NetworkStream_EndWrite_m6971 (NetworkStream_t1455 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C" void NetworkStream_Flush_m6972 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NetworkStream_Read_m6973 (NetworkStream_t1455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NetworkStream_Seek_m6974 (NetworkStream_t1455 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C" void NetworkStream_SetLength_m6975 (NetworkStream_t1455 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NetworkStream_Write_m6976 (NetworkStream_t1455 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C" void NetworkStream_CheckDisposed_m6977 (NetworkStream_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
