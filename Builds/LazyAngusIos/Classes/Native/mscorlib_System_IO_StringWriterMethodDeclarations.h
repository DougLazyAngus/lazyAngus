﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringWriter
struct StringWriter_t2075;
// System.Text.Encoding
struct Encoding_t555;
// System.Text.StringBuilder
struct StringBuilder_t192;
// System.IFormatProvider
struct IFormatProvider_t2392;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t536;

// System.Void System.IO.StringWriter::.ctor()
extern "C" void StringWriter__ctor_m10134 (StringWriter_t2075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" void StringWriter__ctor_m13157 (StringWriter_t2075 * __this, StringBuilder_t192 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C" void StringWriter__ctor_m13158 (StringWriter_t2075 * __this, StringBuilder_t192 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C" Encoding_t555 * StringWriter_get_Encoding_m13159 (StringWriter_t2075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C" void StringWriter_Close_m13160 (StringWriter_t2075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C" void StringWriter_Dispose_m13161 (StringWriter_t2075 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C" StringBuilder_t192 * StringWriter_GetStringBuilder_m13162 (StringWriter_t2075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C" String_t* StringWriter_ToString_m13163 (StringWriter_t2075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C" void StringWriter_Write_m13164 (StringWriter_t2075 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C" void StringWriter_Write_m13165 (StringWriter_t2075 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StringWriter_Write_m13166 (StringWriter_t2075 * __this, CharU5BU5D_t536* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;