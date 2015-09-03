#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.CStreamWriter
struct CStreamWriter_t4850;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t753;
// System.Char[]
struct CharU5BU5D_t711;
// System.String
struct String_t;

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void CStreamWriter__ctor_m20014 (CStreamWriter_t4850 * __this, Stream_t51 * ___stream, Encoding_t753 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void CStreamWriter_Write_m20015 (CStreamWriter_t4850 * __this, CharU5BU5D_t711* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C" void CStreamWriter_Write_m20016 (CStreamWriter_t4850 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C" void CStreamWriter_InternalWriteString_m20017 (CStreamWriter_t4850 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C" void CStreamWriter_InternalWriteChar_m20018 (CStreamWriter_t4850 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C" void CStreamWriter_InternalWriteChars_m20019 (CStreamWriter_t4850 * __this, CharU5BU5D_t711* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C" void CStreamWriter_Write_m20020 (CStreamWriter_t4850 * __this, CharU5BU5D_t711* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C" void CStreamWriter_Write_m20021 (CStreamWriter_t4850 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
