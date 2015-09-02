#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream
struct ChunkStream_t4034;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4033;
// System.String
struct String_t;
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m13822 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t4033 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m13823 (ChunkStream_t4034 * __this, WebHeaderCollection_t4033 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C" void ChunkStream_ResetBuffer_m13824 (ChunkStream_t4034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C" void ChunkStream_WriteAndReadBack_m13825 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_Read_m13826 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_ReadFromChunks_m13827 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ChunkStream_Write_m13828 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C" void ChunkStream_InternalWrite_m13829 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C" bool ChunkStream_get_WantMore_m13830 (ChunkStream_t4034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C" int32_t ChunkStream_get_ChunkLeft_m13831 (ChunkStream_t4034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadBody_m13832 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_GetChunkSize_m13833 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C" String_t* ChunkStream_RemoveChunkExtension_m13834 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadCRLF_m13835 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadTrailer_m13836 (ChunkStream_t4034 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C" void ChunkStream_ThrowProtocolViolation_m13837 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
