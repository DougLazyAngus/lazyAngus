#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t1498;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t692;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t663;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
extern "C" void StreamWriter__ctor_m7492 (StreamWriter_t1498 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m17287 (StreamWriter_t1498 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m17288 (StreamWriter_t1498 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m17289 (StreamWriter_t1498 * __this, String_t* ___path, bool ___append, Encoding_t692 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m17290 (StreamWriter_t1498 * __this, String_t* ___path, bool ___append, Encoding_t692 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C" void StreamWriter__cctor_m17291 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C" void StreamWriter_Initialize_m17292 (StreamWriter_t1498 * __this, Encoding_t692 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C" void StreamWriter_set_AutoFlush_m17293 (StreamWriter_t1498 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.StreamWriter::get_BaseStream()
extern "C" Stream_t51 * StreamWriter_get_BaseStream_m17294 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StreamWriter::get_Encoding()
extern "C" Encoding_t692 * StreamWriter_get_Encoding_m17295 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m17296 (StreamWriter_t1498 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m17297 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m17298 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m17299 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_Write_m17300 (StreamWriter_t1498 * __this, CharU5BU5D_t663* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m17301 (StreamWriter_t1498 * __this, CharU5BU5D_t663* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m17302 (StreamWriter_t1498 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C" void StreamWriter_Write_m17303 (StreamWriter_t1498 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C" void StreamWriter_Write_m17304 (StreamWriter_t1498 * __this, CharU5BU5D_t663* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C" void StreamWriter_Write_m17305 (StreamWriter_t1498 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C" void StreamWriter_Close_m17306 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C" void StreamWriter_Finalize_m17307 (StreamWriter_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
