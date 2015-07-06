#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionStream
struct WebConnectionStream_t1530;
// System.Net.WebConnection
struct WebConnection_t1534;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1535;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C" void WebConnectionStream__ctor_m7645 (WebConnectionStream_t1530 * __this, WebConnection_t1534 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionStream__ctor_m7646 (WebConnectionStream_t1530 * __this, WebConnection_t1534 * ___cnc, HttpWebRequest_t1535 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C" void WebConnectionStream__cctor_m7647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C" bool WebConnectionStream_IsNtlmAuth_m7648 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C" void WebConnectionStream_CheckResponseInBuffer_m7649 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C" WebConnection_t1534 * WebConnectionStream_get_Connection_m7650 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C" int32_t WebConnectionStream_get_ReadTimeout_m7651 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C" int32_t WebConnectionStream_get_WriteTimeout_m7652 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C" bool WebConnectionStream_get_CompleteRequestWritten_m7653 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C" void WebConnectionStream_set_SendChunked_m7654 (WebConnectionStream_t1530 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C" void WebConnectionStream_set_ReadBuffer_m7655 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferOffset_m7656 (WebConnectionStream_t1530 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferSize_m7657 (WebConnectionStream_t1530 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C" ByteU5BU5D_t36* WebConnectionStream_get_WriteBuffer_m7658 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C" int32_t WebConnectionStream_get_WriteBufferLength_m7659 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C" void WebConnectionStream_ForceCompletion_m7660 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C" void WebConnectionStream_CheckComplete_m7661 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C" void WebConnectionStream_ReadAll_m7662 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteCallbackWrapper_m7663 (WebConnectionStream_t1530 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_ReadCallbackWrapper_m7664 (WebConnectionStream_t1530 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnectionStream_Read_m7665 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginRead_m7666 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C" int32_t WebConnectionStream_EndRead_m7667 (WebConnectionStream_t1530 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteRequestAsyncCB_m7668 (WebConnectionStream_t1530 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginWrite_m7669 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C" void WebConnectionStream_CheckWriteOverflow_m7670 (WebConnectionStream_t1530 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C" void WebConnectionStream_EndWrite_m7671 (WebConnectionStream_t1530 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void WebConnectionStream_Write_m7672 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C" void WebConnectionStream_Flush_m7673 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C" void WebConnectionStream_SetHeaders_m7674 (WebConnectionStream_t1530 * __this, ByteU5BU5D_t36* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C" bool WebConnectionStream_get_RequestWritten_m7675 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_WriteRequestAsync_m7676 (WebConnectionStream_t1530 * __this, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C" void WebConnectionStream_WriteHeaders_m7677 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C" void WebConnectionStream_WriteRequest_m7678 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C" void WebConnectionStream_InternalClose_m7679 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C" void WebConnectionStream_Close_m7680 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C" void WebConnectionStream_KillBuffer_m7681 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t WebConnectionStream_Seek_m7682 (WebConnectionStream_t1530 * __this, int64_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C" void WebConnectionStream_SetLength_m7683 (WebConnectionStream_t1530 * __this, int64_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C" bool WebConnectionStream_get_CanSeek_m7684 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C" bool WebConnectionStream_get_CanRead_m7685 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C" bool WebConnectionStream_get_CanWrite_m7686 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C" int64_t WebConnectionStream_get_Length_m7687 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C" int64_t WebConnectionStream_get_Position_m7688 (WebConnectionStream_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C" void WebConnectionStream_set_Position_m7689 (WebConnectionStream_t1530 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
