#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t2095;
// System.IO.Stream
struct Stream_t24;
// System.Text.Encoding
struct Encoding_t555;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t536;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m13128 (StreamWriter_t2095 * __this, Stream_t24 * ___stream, Encoding_t555 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m13129 (StreamWriter_t2095 * __this, Stream_t24 * ___stream, Encoding_t555 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m13130 (StreamWriter_t2095 * __this, String_t* ___path, bool ___append, Encoding_t555 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m13131 (StreamWriter_t2095 * __this, String_t* ___path, bool ___append, Encoding_t555 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C" void StreamWriter__cctor_m13132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C" void StreamWriter_Initialize_m13133 (StreamWriter_t2095 * __this, Encoding_t555 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C" void StreamWriter_set_AutoFlush_m13134 (StreamWriter_t2095 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.StreamWriter::get_BaseStream()
extern "C" Stream_t24 * StreamWriter_get_BaseStream_m13135 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StreamWriter::get_Encoding()
extern "C" Encoding_t555 * StreamWriter_get_Encoding_m13136 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m13137 (StreamWriter_t2095 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m13138 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m13139 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m13140 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_Write_m13141 (StreamWriter_t2095 * __this, CharU5BU5D_t536* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m13142 (StreamWriter_t2095 * __this, CharU5BU5D_t536* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m13143 (StreamWriter_t2095 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C" void StreamWriter_Write_m13144 (StreamWriter_t2095 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C" void StreamWriter_Write_m13145 (StreamWriter_t2095 * __this, CharU5BU5D_t536* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C" void StreamWriter_Write_m13146 (StreamWriter_t2095 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C" void StreamWriter_Close_m13147 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C" void StreamWriter_Finalize_m13148 (StreamWriter_t2095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
