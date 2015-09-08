#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.CStreamWriter
struct CStreamWriter_t4851;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t754;
// System.Char[]
struct CharU5BU5D_t712;
// System.String
struct String_t;

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void CStreamWriter__ctor_m20027 (CStreamWriter_t4851 * __this, Stream_t51 * ___stream, Encoding_t754 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void CStreamWriter_Write_m20028 (CStreamWriter_t4851 * __this, CharU5BU5D_t712* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C" void CStreamWriter_Write_m20029 (CStreamWriter_t4851 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C" void CStreamWriter_InternalWriteString_m20030 (CStreamWriter_t4851 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C" void CStreamWriter_InternalWriteChar_m20031 (CStreamWriter_t4851 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C" void CStreamWriter_InternalWriteChars_m20032 (CStreamWriter_t4851 * __this, CharU5BU5D_t712* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C" void CStreamWriter_Write_m20033 (CStreamWriter_t4851 * __this, CharU5BU5D_t712* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C" void CStreamWriter_Write_m20034 (CStreamWriter_t4851 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
