#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionStream
struct WebConnectionStream_t2043;
// System.Net.WebConnection
struct WebConnection_t2047;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1806;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C" void WebConnectionStream__ctor_m10676 (WebConnectionStream_t2043 * __this, WebConnection_t2047 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionStream__ctor_m10677 (WebConnectionStream_t2043 * __this, WebConnection_t2047 * ___cnc, HttpWebRequest_t1806 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C" void WebConnectionStream__cctor_m10678 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C" bool WebConnectionStream_IsNtlmAuth_m10679 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C" void WebConnectionStream_CheckResponseInBuffer_m10680 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C" WebConnection_t2047 * WebConnectionStream_get_Connection_m10681 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C" int32_t WebConnectionStream_get_ReadTimeout_m10682 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C" int32_t WebConnectionStream_get_WriteTimeout_m10683 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C" bool WebConnectionStream_get_CompleteRequestWritten_m10684 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C" void WebConnectionStream_set_SendChunked_m10685 (WebConnectionStream_t2043 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C" void WebConnectionStream_set_ReadBuffer_m10686 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferOffset_m10687 (WebConnectionStream_t2043 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferSize_m10688 (WebConnectionStream_t2043 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C" ByteU5BU5D_t36* WebConnectionStream_get_WriteBuffer_m10689 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C" int32_t WebConnectionStream_get_WriteBufferLength_m10690 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C" void WebConnectionStream_ForceCompletion_m10691 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C" void WebConnectionStream_CheckComplete_m10692 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C" void WebConnectionStream_ReadAll_m10693 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteCallbackWrapper_m10694 (WebConnectionStream_t2043 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_ReadCallbackWrapper_m10695 (WebConnectionStream_t2043 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnectionStream_Read_m10696 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginRead_m10697 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t346 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C" int32_t WebConnectionStream_EndRead_m10698 (WebConnectionStream_t2043 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteRequestAsyncCB_m10699 (WebConnectionStream_t2043 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginWrite_m10700 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t346 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C" void WebConnectionStream_CheckWriteOverflow_m10701 (WebConnectionStream_t2043 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C" void WebConnectionStream_EndWrite_m10702 (WebConnectionStream_t2043 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void WebConnectionStream_Write_m10703 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C" void WebConnectionStream_Flush_m10704 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C" void WebConnectionStream_SetHeaders_m10705 (WebConnectionStream_t2043 * __this, ByteU5BU5D_t36* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C" bool WebConnectionStream_get_RequestWritten_m10706 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_WriteRequestAsync_m10707 (WebConnectionStream_t2043 * __this, AsyncCallback_t346 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C" void WebConnectionStream_WriteHeaders_m10708 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C" void WebConnectionStream_WriteRequest_m10709 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C" void WebConnectionStream_InternalClose_m10710 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C" void WebConnectionStream_Close_m10711 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C" void WebConnectionStream_KillBuffer_m10712 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t WebConnectionStream_Seek_m10713 (WebConnectionStream_t2043 * __this, int64_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C" void WebConnectionStream_SetLength_m10714 (WebConnectionStream_t2043 * __this, int64_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C" bool WebConnectionStream_get_CanSeek_m10715 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C" bool WebConnectionStream_get_CanRead_m10716 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C" bool WebConnectionStream_get_CanWrite_m10717 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C" int64_t WebConnectionStream_get_Length_m10718 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C" int64_t WebConnectionStream_get_Position_m10719 (WebConnectionStream_t2043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C" void WebConnectionStream_set_Position_m10720 (WebConnectionStream_t2043 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
