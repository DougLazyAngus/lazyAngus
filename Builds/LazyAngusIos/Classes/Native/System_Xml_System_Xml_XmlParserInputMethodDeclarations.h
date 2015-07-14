#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput
struct XmlParserInput_t2023;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t2057;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t2020;

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C" void XmlParserInput__ctor_m9942 (XmlParserInput_t2023 * __this, TextReader_t2057 * ___reader, String_t* ___baseURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C" void XmlParserInput__ctor_m9943 (XmlParserInput_t2023 * __this, TextReader_t2057 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
extern "C" void XmlParserInput_Close_m9944 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void XmlParserInput_PushPEBuffer_m9945 (XmlParserInput_t2023 * __this, DTDParameterEntityDeclaration_t2020 * ___pe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C" int32_t XmlParserInput_ReadSourceChar_m9946 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C" int32_t XmlParserInput_PeekChar_m9947 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C" int32_t XmlParserInput_ReadChar_m9948 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C" String_t* XmlParserInput_get_BaseURI_m9949 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C" bool XmlParserInput_get_HasPEBuffer_m9950 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C" int32_t XmlParserInput_get_LineNumber_m9951 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C" int32_t XmlParserInput_get_LinePosition_m9952 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C" bool XmlParserInput_get_AllowTextDecl_m9953 (XmlParserInput_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C" void XmlParserInput_set_AllowTextDecl_m9954 (XmlParserInput_t2023 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
