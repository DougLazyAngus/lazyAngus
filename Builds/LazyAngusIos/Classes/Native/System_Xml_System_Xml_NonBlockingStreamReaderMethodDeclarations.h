#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t3233;
// System.Text.Encoding
struct Encoding_t739;
// System.IO.Stream
struct Stream_t51;
// System.Char[]
struct CharU5BU5D_t697;
// System.String
struct String_t;

// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void NonBlockingStreamReader__ctor_m10955 (NonBlockingStreamReader_t3233 * __this, Stream_t51 * ___stream, Encoding_t739 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
extern "C" Encoding_t739 * NonBlockingStreamReader_get_Encoding_m10956 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Close()
extern "C" void NonBlockingStreamReader_Close_m10957 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C" void NonBlockingStreamReader_Dispose_m10958 (NonBlockingStreamReader_t3233 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
extern "C" int32_t NonBlockingStreamReader_ReadBuffer_m10959 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
extern "C" int32_t NonBlockingStreamReader_Peek_m10960 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
extern "C" int32_t NonBlockingStreamReader_Read_m10961 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NonBlockingStreamReader_Read_m10962 (NonBlockingStreamReader_t3233 * __this, CharU5BU5D_t697* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
extern "C" int32_t NonBlockingStreamReader_FindNextEOL_m10963 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
extern "C" String_t* NonBlockingStreamReader_ReadLine_m10964 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
extern "C" String_t* NonBlockingStreamReader_ReadToEnd_m10965 (NonBlockingStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
