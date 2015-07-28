#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t4450;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t682;
// System.Char[]
struct CharU5BU5D_t653;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m17307 (UnexceptionalStreamWriter_t4450 * __this, Stream_t51 * ___stream, Encoding_t682 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m17308 (UnexceptionalStreamWriter_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m17309 (UnexceptionalStreamWriter_t4450 * __this, CharU5BU5D_t653* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m17310 (UnexceptionalStreamWriter_t4450 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m17311 (UnexceptionalStreamWriter_t4450 * __this, CharU5BU5D_t653* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m17312 (UnexceptionalStreamWriter_t4450 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
