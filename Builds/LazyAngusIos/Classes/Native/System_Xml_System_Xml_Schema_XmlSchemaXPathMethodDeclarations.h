#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3659;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3401;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C" void XmlSchemaXPath__ctor_m14591 (XmlSchemaXPath_t3659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C" String_t* XmlSchemaXPath_get_XPath_m14592 (XmlSchemaXPath_t3659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaXPath_Compile_m14593 (XmlSchemaXPath_t3659 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C" XsdIdentityPathU5BU5D_t3401* XmlSchemaXPath_get_CompiledExpression_m14594 (XmlSchemaXPath_t3659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParseExpression_m14595 (XmlSchemaXPath_t3659 * __this, String_t* ___xpath, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParsePath_m14596 (XmlSchemaXPath_t3659 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t712 * ___paths, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParseStep_m14597 (XmlSchemaXPath_t3659 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t712 * ___steps, ArrayList_t712 * ___paths, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C" int32_t XmlSchemaXPath_SkipWhitespace_m14598 (XmlSchemaXPath_t3659 * __this, String_t* ___xpath, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" XmlSchemaXPath_t3659 * XmlSchemaXPath_Read_m14599 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
