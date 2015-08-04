#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t1107;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t690;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t661;

// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m17255 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" void StreamReader__ctor_m7475 (StreamReader_t1107 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamReader__ctor_m14857 (StreamReader_t1107 * __this, Stream_t51 * ___stream, Encoding_t690 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m17256 (StreamReader_t1107 * __this, Stream_t51 * ___stream, Encoding_t690 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" void StreamReader__ctor_m17257 (StreamReader_t1107 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
extern "C" void StreamReader__ctor_m17258 (StreamReader_t1107 * __this, String_t* ___path, Encoding_t690 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m17259 (StreamReader_t1107 * __this, String_t* ___path, Encoding_t690 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C" void StreamReader__cctor_m17260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader_Initialize_m17261 (StreamReader_t1107 * __this, Stream_t51 * ___stream, Encoding_t690 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Close()
extern "C" void StreamReader_Close_m17262 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C" void StreamReader_Dispose_m17263 (StreamReader_t1107 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m17264 (StreamReader_t1107 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C" int32_t StreamReader_ReadBuffer_m17265 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C" int32_t StreamReader_Peek_m17266 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C" int32_t StreamReader_Read_m17267 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m17268 (StreamReader_t1107 * __this, CharU5BU5D_t661* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m17269 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C" String_t* StreamReader_ReadLine_m17270 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C" String_t* StreamReader_ReadToEnd_m17271 (StreamReader_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
