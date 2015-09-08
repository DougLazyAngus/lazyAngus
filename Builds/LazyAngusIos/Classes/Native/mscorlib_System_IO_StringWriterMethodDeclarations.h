#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringWriter
struct StringWriter_t3385;
// System.Text.Encoding
struct Encoding_t757;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.IFormatProvider
struct IFormatProvider_t5006;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t715;

// System.Void System.IO.StringWriter::.ctor()
extern "C" void StringWriter__ctor_m12114 (StringWriter_t3385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" void StringWriter__ctor_m21694 (StringWriter_t3385 * __this, StringBuilder_t261 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C" void StringWriter__ctor_m21695 (StringWriter_t3385 * __this, StringBuilder_t261 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C" Encoding_t757 * StringWriter_get_Encoding_m21696 (StringWriter_t3385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C" void StringWriter_Close_m21697 (StringWriter_t3385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C" void StringWriter_Dispose_m21698 (StringWriter_t3385 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C" StringBuilder_t261 * StringWriter_GetStringBuilder_m21699 (StringWriter_t3385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C" String_t* StringWriter_ToString_m21700 (StringWriter_t3385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C" void StringWriter_Write_m21701 (StringWriter_t3385 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C" void StringWriter_Write_m21702 (StringWriter_t3385 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StringWriter_Write_m21703 (StringWriter_t3385 * __this, CharU5BU5D_t715* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
