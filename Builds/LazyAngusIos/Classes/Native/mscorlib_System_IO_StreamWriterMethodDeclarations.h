#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t1487;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t681;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t652;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
extern "C" void StreamWriter__ctor_m7418 (StreamWriter_t1487 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m17209 (StreamWriter_t1487 * __this, Stream_t51 * ___stream, Encoding_t681 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m17210 (StreamWriter_t1487 * __this, Stream_t51 * ___stream, Encoding_t681 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m17211 (StreamWriter_t1487 * __this, String_t* ___path, bool ___append, Encoding_t681 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m17212 (StreamWriter_t1487 * __this, String_t* ___path, bool ___append, Encoding_t681 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C" void StreamWriter__cctor_m17213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C" void StreamWriter_Initialize_m17214 (StreamWriter_t1487 * __this, Encoding_t681 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C" void StreamWriter_set_AutoFlush_m17215 (StreamWriter_t1487 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.StreamWriter::get_BaseStream()
extern "C" Stream_t51 * StreamWriter_get_BaseStream_m17216 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StreamWriter::get_Encoding()
extern "C" Encoding_t681 * StreamWriter_get_Encoding_m17217 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m17218 (StreamWriter_t1487 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m17219 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m17220 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m17221 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_Write_m17222 (StreamWriter_t1487 * __this, CharU5BU5D_t652* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m17223 (StreamWriter_t1487 * __this, CharU5BU5D_t652* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m17224 (StreamWriter_t1487 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C" void StreamWriter_Write_m17225 (StreamWriter_t1487 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C" void StreamWriter_Write_m17226 (StreamWriter_t1487 * __this, CharU5BU5D_t652* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C" void StreamWriter_Write_m17227 (StreamWriter_t1487 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C" void StreamWriter_Close_m17228 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C" void StreamWriter_Finalize_m17229 (StreamWriter_t1487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
