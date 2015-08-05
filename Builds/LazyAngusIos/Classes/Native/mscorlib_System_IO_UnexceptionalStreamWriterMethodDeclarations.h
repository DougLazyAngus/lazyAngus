#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t4461;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t692;
// System.Char[]
struct CharU5BU5D_t663;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m17385 (UnexceptionalStreamWriter_t4461 * __this, Stream_t51 * ___stream, Encoding_t692 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m17386 (UnexceptionalStreamWriter_t4461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m17387 (UnexceptionalStreamWriter_t4461 * __this, CharU5BU5D_t663* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m17388 (UnexceptionalStreamWriter_t4461 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m17389 (UnexceptionalStreamWriter_t4461 * __this, CharU5BU5D_t663* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m17390 (UnexceptionalStreamWriter_t4461 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
