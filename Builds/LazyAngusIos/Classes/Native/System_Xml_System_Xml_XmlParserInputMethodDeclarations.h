#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput
struct XmlParserInput_t3479;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t3372;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t3475;

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C" void XmlParserInput__ctor_m13627 (XmlParserInput_t3479 * __this, TextReader_t3372 * ___reader, String_t* ___baseURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C" void XmlParserInput__ctor_m13628 (XmlParserInput_t3479 * __this, TextReader_t3372 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
extern "C" void XmlParserInput_Close_m13629 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void XmlParserInput_PushPEBuffer_m13630 (XmlParserInput_t3479 * __this, DTDParameterEntityDeclaration_t3475 * ___pe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C" int32_t XmlParserInput_ReadSourceChar_m13631 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C" int32_t XmlParserInput_PeekChar_m13632 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C" int32_t XmlParserInput_ReadChar_m13633 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C" String_t* XmlParserInput_get_BaseURI_m13634 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C" bool XmlParserInput_get_HasPEBuffer_m13635 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C" int32_t XmlParserInput_get_LineNumber_m13636 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C" int32_t XmlParserInput_get_LinePosition_m13637 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C" bool XmlParserInput_get_AllowTextDecl_m13638 (XmlParserInput_t3479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C" void XmlParserInput_set_AllowTextDecl_m13639 (XmlParserInput_t3479 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
