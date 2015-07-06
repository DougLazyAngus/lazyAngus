#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t1722;
// System.Text.Encoding
struct Encoding_t555;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t536;
// System.Object
struct Object_t;

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m13189 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m13190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.TextWriter::get_Encoding()
// System.String System.IO.TextWriter::get_NewLine()
extern "C" String_t* TextWriter_get_NewLine_m13191 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m13192 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m13193 (TextWriter_t1722 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m13194 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m13195 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t1722 * TextWriter_Synchronized_m13196 (Object_t * __this /* static, unused */, TextWriter_t1722 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m13197 (TextWriter_t1722 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m13198 (TextWriter_t1722 * __this, CharU5BU5D_t536* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m13199 (TextWriter_t1722 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object)
extern "C" void TextWriter_Write_m13200 (TextWriter_t1722 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m13201 (TextWriter_t1722 * __this, CharU5BU5D_t536* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m13202 (TextWriter_t1722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m13203 (TextWriter_t1722 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object)
extern "C" void TextWriter_WriteLine_m13204 (TextWriter_t1722 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
