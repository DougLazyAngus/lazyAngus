#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t4457;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t689;
// System.Char[]
struct CharU5BU5D_t660;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m17354 (UnexceptionalStreamWriter_t4457 * __this, Stream_t51 * ___stream, Encoding_t689 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m17355 (UnexceptionalStreamWriter_t4457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m17356 (UnexceptionalStreamWriter_t4457 * __this, CharU5BU5D_t660* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m17357 (UnexceptionalStreamWriter_t4457 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m17358 (UnexceptionalStreamWriter_t4457 * __this, CharU5BU5D_t660* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m17359 (UnexceptionalStreamWriter_t4457 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
