﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3856;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern "C" void TlsStream__ctor_m13034 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern "C" void TlsStream__ctor_m13035 (TlsStream_t3856 * __this, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C" bool TlsStream_get_EOF_m13036 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C" bool TlsStream_get_CanWrite_m13037 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C" bool TlsStream_get_CanRead_m13038 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C" bool TlsStream_get_CanSeek_m13039 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C" int64_t TlsStream_get_Position_m13040 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C" void TlsStream_set_Position_m13041 (TlsStream_t3856 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C" int64_t TlsStream_get_Length_m13042 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern "C" ByteU5BU5D_t66* TlsStream_ReadSmallValue_m13043 (TlsStream_t3856 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C" uint8_t TlsStream_ReadByte_m13044 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C" int16_t TlsStream_ReadInt16_m13045 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C" int32_t TlsStream_ReadInt24_m13046 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern "C" ByteU5BU5D_t66* TlsStream_ReadBytes_m13047 (TlsStream_t3856 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern "C" void TlsStream_Write_m13048 (TlsStream_t3856 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern "C" void TlsStream_Write_m13049 (TlsStream_t3856 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern "C" void TlsStream_WriteInt24_m13050 (TlsStream_t3856 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern "C" void TlsStream_Write_m13051 (TlsStream_t3856 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C" void TlsStream_Write_m13052 (TlsStream_t3856 * __this, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C" void TlsStream_Reset_m13053 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C" ByteU5BU5D_t66* TlsStream_ToArray_m13054 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C" void TlsStream_Flush_m13055 (TlsStream_t3856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C" void TlsStream_SetLength_m13056 (TlsStream_t3856 * __this, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TlsStream_Seek_m13057 (TlsStream_t3856 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TlsStream_Read_m13058 (TlsStream_t3856 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void TlsStream_Write_m13059 (TlsStream_t3856 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
