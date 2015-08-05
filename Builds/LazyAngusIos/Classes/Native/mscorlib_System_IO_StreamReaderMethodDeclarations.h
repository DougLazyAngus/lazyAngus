#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t1109;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t692;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t663;

// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m17270 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" void StreamReader__ctor_m7490 (StreamReader_t1109 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamReader__ctor_m14872 (StreamReader_t1109 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m17271 (StreamReader_t1109 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" void StreamReader__ctor_m17272 (StreamReader_t1109 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
extern "C" void StreamReader__ctor_m17273 (StreamReader_t1109 * __this, String_t* ___path, Encoding_t692 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m17274 (StreamReader_t1109 * __this, String_t* ___path, Encoding_t692 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C" void StreamReader__cctor_m17275 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader_Initialize_m17276 (StreamReader_t1109 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Close()
extern "C" void StreamReader_Close_m17277 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C" void StreamReader_Dispose_m17278 (StreamReader_t1109 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m17279 (StreamReader_t1109 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C" int32_t StreamReader_ReadBuffer_m17280 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C" int32_t StreamReader_Peek_m17281 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C" int32_t StreamReader_Read_m17282 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m17283 (StreamReader_t1109 * __this, CharU5BU5D_t663* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m17284 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C" String_t* StreamReader_ReadLine_m17285 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C" String_t* StreamReader_ReadToEnd_m17286 (StreamReader_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
