#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionStream
struct WebConnectionStream_t4007;
// System.Net.WebConnection
struct WebConnection_t4011;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3811;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C" void WebConnectionStream__ctor_m13957 (WebConnectionStream_t4007 * __this, WebConnection_t4011 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionStream__ctor_m13958 (WebConnectionStream_t4007 * __this, WebConnection_t4011 * ___cnc, HttpWebRequest_t3811 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C" void WebConnectionStream__cctor_m13959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C" bool WebConnectionStream_IsNtlmAuth_m13960 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C" void WebConnectionStream_CheckResponseInBuffer_m13961 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C" WebConnection_t4011 * WebConnectionStream_get_Connection_m13962 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C" int32_t WebConnectionStream_get_ReadTimeout_m13963 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C" int32_t WebConnectionStream_get_WriteTimeout_m13964 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C" bool WebConnectionStream_get_CompleteRequestWritten_m13965 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C" void WebConnectionStream_set_SendChunked_m13966 (WebConnectionStream_t4007 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C" void WebConnectionStream_set_ReadBuffer_m13967 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferOffset_m13968 (WebConnectionStream_t4007 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferSize_m13969 (WebConnectionStream_t4007 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C" ByteU5BU5D_t66* WebConnectionStream_get_WriteBuffer_m13970 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C" int32_t WebConnectionStream_get_WriteBufferLength_m13971 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C" void WebConnectionStream_ForceCompletion_m13972 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C" void WebConnectionStream_CheckComplete_m13973 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C" void WebConnectionStream_ReadAll_m13974 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteCallbackWrapper_m13975 (WebConnectionStream_t4007 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_ReadCallbackWrapper_m13976 (WebConnectionStream_t4007 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnectionStream_Read_m13977 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginRead_m13978 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C" int32_t WebConnectionStream_EndRead_m13979 (WebConnectionStream_t4007 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteRequestAsyncCB_m13980 (WebConnectionStream_t4007 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginWrite_m13981 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C" void WebConnectionStream_CheckWriteOverflow_m13982 (WebConnectionStream_t4007 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C" void WebConnectionStream_EndWrite_m13983 (WebConnectionStream_t4007 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void WebConnectionStream_Write_m13984 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C" void WebConnectionStream_Flush_m13985 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C" void WebConnectionStream_SetHeaders_m13986 (WebConnectionStream_t4007 * __this, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C" bool WebConnectionStream_get_RequestWritten_m13987 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_WriteRequestAsync_m13988 (WebConnectionStream_t4007 * __this, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C" void WebConnectionStream_WriteHeaders_m13989 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C" void WebConnectionStream_WriteRequest_m13990 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C" void WebConnectionStream_InternalClose_m13991 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C" void WebConnectionStream_Close_m13992 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C" void WebConnectionStream_KillBuffer_m13993 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t WebConnectionStream_Seek_m13994 (WebConnectionStream_t4007 * __this, int64_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C" void WebConnectionStream_SetLength_m13995 (WebConnectionStream_t4007 * __this, int64_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C" bool WebConnectionStream_get_CanSeek_m13996 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C" bool WebConnectionStream_get_CanRead_m13997 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C" bool WebConnectionStream_get_CanWrite_m13998 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C" int64_t WebConnectionStream_get_Length_m13999 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C" int64_t WebConnectionStream_get_Position_m14000 (WebConnectionStream_t4007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C" void WebConnectionStream_set_Position_m14001 (WebConnectionStream_t4007 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
