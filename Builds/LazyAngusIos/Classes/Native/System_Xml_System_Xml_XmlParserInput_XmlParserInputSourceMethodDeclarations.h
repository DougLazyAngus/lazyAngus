#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t3250;
// System.IO.TextReader
struct TextReader_t3233;
// System.String
struct String_t;

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" void XmlParserInputSource__ctor_m11103 (XmlParserInputSource_t3250 * __this, TextReader_t3233 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" int32_t XmlParserInputSource_get_LineNumber_m11104 (XmlParserInputSource_t3250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" int32_t XmlParserInputSource_get_LinePosition_m11105 (XmlParserInputSource_t3250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" void XmlParserInputSource_Close_m11106 (XmlParserInputSource_t3250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" int32_t XmlParserInputSource_Read_m11107 (XmlParserInputSource_t3250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
