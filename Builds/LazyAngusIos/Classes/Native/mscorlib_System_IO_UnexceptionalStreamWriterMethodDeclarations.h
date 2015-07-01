#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t2373;
// System.IO.Stream
struct Stream_t24;
// System.Text.Encoding
struct Encoding_t531;
// System.Char[]
struct CharU5BU5D_t512;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m13078 (UnexceptionalStreamWriter_t2373 * __this, Stream_t24 * ___stream, Encoding_t531 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m13079 (UnexceptionalStreamWriter_t2373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m13080 (UnexceptionalStreamWriter_t2373 * __this, CharU5BU5D_t512* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m13081 (UnexceptionalStreamWriter_t2373 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m13082 (UnexceptionalStreamWriter_t2373 * __this, CharU5BU5D_t512* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m13083 (UnexceptionalStreamWriter_t2373 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
