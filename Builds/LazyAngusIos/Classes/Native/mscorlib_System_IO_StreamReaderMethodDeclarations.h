#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t1178;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t753;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t711;

// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m21634 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" void StreamReader__ctor_m7891 (StreamReader_t1178 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamReader__ctor_m18101 (StreamReader_t1178 * __this, Stream_t51 * ___stream, Encoding_t753 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m21635 (StreamReader_t1178 * __this, Stream_t51 * ___stream, Encoding_t753 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" void StreamReader__ctor_m21636 (StreamReader_t1178 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
extern "C" void StreamReader__ctor_m21637 (StreamReader_t1178 * __this, String_t* ___path, Encoding_t753 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m21638 (StreamReader_t1178 * __this, String_t* ___path, Encoding_t753 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C" void StreamReader__cctor_m21639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader_Initialize_m21640 (StreamReader_t1178 * __this, Stream_t51 * ___stream, Encoding_t753 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Close()
extern "C" void StreamReader_Close_m21641 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C" void StreamReader_Dispose_m21642 (StreamReader_t1178 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m21643 (StreamReader_t1178 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C" int32_t StreamReader_ReadBuffer_m21644 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C" int32_t StreamReader_Peek_m21645 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamReader::DataAvailable()
extern "C" bool StreamReader_DataAvailable_m21646 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C" int32_t StreamReader_Read_m21647 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m21648 (StreamReader_t1178 * __this, CharU5BU5D_t711* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m21649 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C" String_t* StreamReader_ReadLine_m21650 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C" String_t* StreamReader_ReadToEnd_m21651 (StreamReader_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
