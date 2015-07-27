#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream
struct ChunkStream_t2002;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2001;
// System.String
struct String_t;
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m10129 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t2001 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m10130 (ChunkStream_t2002 * __this, WebHeaderCollection_t2001 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C" void ChunkStream_ResetBuffer_m10131 (ChunkStream_t2002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C" void ChunkStream_WriteAndReadBack_m10132 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_Read_m10133 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_ReadFromChunks_m10134 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ChunkStream_Write_m10135 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C" void ChunkStream_InternalWrite_m10136 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C" bool ChunkStream_get_WantMore_m10137 (ChunkStream_t2002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C" int32_t ChunkStream_get_ChunkLeft_m10138 (ChunkStream_t2002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadBody_m10139 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_GetChunkSize_m10140 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C" String_t* ChunkStream_RemoveChunkExtension_m10141 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadCRLF_m10142 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadTrailer_m10143 (ChunkStream_t2002 * __this, ByteU5BU5D_t36* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C" void ChunkStream_ThrowProtocolViolation_m10144 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
