#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t1651;
// System.IO.TextReader
struct TextReader_t1633;
// System.String
struct String_t;

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" void XmlParserInputSource__ctor_m8181 (XmlParserInputSource_t1651 * __this, TextReader_t1633 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" int32_t XmlParserInputSource_get_LineNumber_m8182 (XmlParserInputSource_t1651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" int32_t XmlParserInputSource_get_LinePosition_m8183 (XmlParserInputSource_t1651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" void XmlParserInputSource_Close_m8184 (XmlParserInputSource_t1651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" int32_t XmlParserInputSource_Read_m8185 (XmlParserInputSource_t1651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
