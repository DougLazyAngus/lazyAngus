#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t3569;
// System.Text.Encoding
struct Encoding_t764;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t722;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m21783 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m21784 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.TextWriter::get_Encoding()
// System.String System.IO.TextWriter::get_NewLine()
extern "C" String_t* TextWriter_get_NewLine_m21785 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m21786 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m21787 (TextWriter_t3569 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m21788 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m21789 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t3569 * TextWriter_Synchronized_m21790 (Object_t * __this /* static, unused */, TextWriter_t3569 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m21791 (TextWriter_t3569 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m21792 (TextWriter_t3569 * __this, CharU5BU5D_t722* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m21793 (TextWriter_t3569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object)
extern "C" void TextWriter_Write_m21794 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object[])
extern "C" void TextWriter_Write_m21795 (TextWriter_t3569 * __this, String_t* ___format, ObjectU5BU5D_t707* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m21796 (TextWriter_t3569 * __this, CharU5BU5D_t722* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object)
extern "C" void TextWriter_Write_m21797 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C" void TextWriter_Write_m21798 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m21799 (TextWriter_t3569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m21800 (TextWriter_t3569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object)
extern "C" void TextWriter_WriteLine_m21801 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object[])
extern "C" void TextWriter_WriteLine_m21802 (TextWriter_t3569 * __this, String_t* ___format, ObjectU5BU5D_t707* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object)
extern "C" void TextWriter_WriteLine_m21803 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void TextWriter_WriteLine_m21804 (TextWriter_t3569 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
