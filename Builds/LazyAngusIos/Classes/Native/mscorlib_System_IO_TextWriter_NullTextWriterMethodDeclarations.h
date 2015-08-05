#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t4457;
// System.Text.Encoding
struct Encoding_t692;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t663;

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m17343 (NullTextWriter_t4457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.TextWriter/NullTextWriter::get_Encoding()
extern "C" Encoding_t692 * NullTextWriter_get_Encoding_m17344 (NullTextWriter_t4457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m17345 (NullTextWriter_t4457 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m17346 (NullTextWriter_t4457 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m17347 (NullTextWriter_t4457 * __this, CharU5BU5D_t663* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
