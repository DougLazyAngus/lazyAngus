#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringWriter
struct StringWriter_t3381;
// System.Text.Encoding
struct Encoding_t753;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.IFormatProvider
struct IFormatProvider_t5002;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t711;

// System.Void System.IO.StringWriter::.ctor()
extern "C" void StringWriter__ctor_m12101 (StringWriter_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" void StringWriter__ctor_m21681 (StringWriter_t3381 * __this, StringBuilder_t261 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C" void StringWriter__ctor_m21682 (StringWriter_t3381 * __this, StringBuilder_t261 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C" Encoding_t753 * StringWriter_get_Encoding_m21683 (StringWriter_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C" void StringWriter_Close_m21684 (StringWriter_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C" void StringWriter_Dispose_m21685 (StringWriter_t3381 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C" StringBuilder_t261 * StringWriter_GetStringBuilder_m21686 (StringWriter_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C" String_t* StringWriter_ToString_m21687 (StringWriter_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C" void StringWriter_Write_m21688 (StringWriter_t3381 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C" void StringWriter_Write_m21689 (StringWriter_t3381 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StringWriter_Write_m21690 (StringWriter_t3381 * __this, CharU5BU5D_t711* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
