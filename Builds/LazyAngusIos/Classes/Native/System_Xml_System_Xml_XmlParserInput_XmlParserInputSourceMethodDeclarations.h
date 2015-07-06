#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t2051;
// System.IO.TextReader
struct TextReader_t2034;
// System.String
struct String_t;

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" void XmlParserInputSource__ctor_m9782 (XmlParserInputSource_t2051 * __this, TextReader_t2034 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" int32_t XmlParserInputSource_get_LineNumber_m9783 (XmlParserInputSource_t2051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" int32_t XmlParserInputSource_get_LinePosition_m9784 (XmlParserInputSource_t2051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" void XmlParserInputSource_Close_m9785 (XmlParserInputSource_t2051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" int32_t XmlParserInputSource_Read_m9786 (XmlParserInputSource_t2051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
