#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t5016;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t764;
// System.Char[]
struct CharU5BU5D_t722;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m21832 (UnexceptionalStreamWriter_t5016 * __this, Stream_t51 * ___stream, Encoding_t764 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m21833 (UnexceptionalStreamWriter_t5016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m21834 (UnexceptionalStreamWriter_t5016 * __this, CharU5BU5D_t722* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m21835 (UnexceptionalStreamWriter_t5016 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m21836 (UnexceptionalStreamWriter_t5016 * __this, CharU5BU5D_t722* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m21837 (UnexceptionalStreamWriter_t5016 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
