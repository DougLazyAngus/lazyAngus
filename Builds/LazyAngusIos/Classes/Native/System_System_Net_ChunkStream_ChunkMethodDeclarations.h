#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream/Chunk
struct Chunk_t4013;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Net.ChunkStream/Chunk::.ctor(System.Byte[])
extern "C" void Chunk__ctor_m13659 (Chunk_t4013 * __this, ByteU5BU5D_t66* ___chunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Chunk_Read_m13660 (Chunk_t4013 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
