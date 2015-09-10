#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream
struct ChunkStream_t4319;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4318;
// System.String
struct String_t;
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m16242 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t4318 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m16243 (ChunkStream_t4319 * __this, WebHeaderCollection_t4318 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C" void ChunkStream_ResetBuffer_m16244 (ChunkStream_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C" void ChunkStream_WriteAndReadBack_m16245 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_Read_m16246 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_ReadFromChunks_m16247 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ChunkStream_Write_m16248 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C" void ChunkStream_InternalWrite_m16249 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C" bool ChunkStream_get_WantMore_m16250 (ChunkStream_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C" int32_t ChunkStream_get_ChunkLeft_m16251 (ChunkStream_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadBody_m16252 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_GetChunkSize_m16253 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C" String_t* ChunkStream_RemoveChunkExtension_m16254 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadCRLF_m16255 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadTrailer_m16256 (ChunkStream_t4319 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C" void ChunkStream_ThrowProtocolViolation_m16257 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
