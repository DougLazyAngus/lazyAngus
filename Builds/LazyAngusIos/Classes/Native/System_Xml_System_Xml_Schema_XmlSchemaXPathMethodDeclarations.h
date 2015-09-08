#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3663;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3405;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C" void XmlSchemaXPath__ctor_m14604 (XmlSchemaXPath_t3663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C" String_t* XmlSchemaXPath_get_XPath_m14605 (XmlSchemaXPath_t3663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaXPath_Compile_m14606 (XmlSchemaXPath_t3663 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C" XsdIdentityPathU5BU5D_t3405* XmlSchemaXPath_get_CompiledExpression_m14607 (XmlSchemaXPath_t3663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParseExpression_m14608 (XmlSchemaXPath_t3663 * __this, String_t* ___xpath, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParsePath_m14609 (XmlSchemaXPath_t3663 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t716 * ___paths, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaXPath_ParseStep_m14610 (XmlSchemaXPath_t3663 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t716 * ___steps, ArrayList_t716 * ___paths, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C" int32_t XmlSchemaXPath_SkipWhitespace_m14611 (XmlSchemaXPath_t3663 * __this, String_t* ___xpath, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" XmlSchemaXPath_t3663 * XmlSchemaXPath_Read_m14612 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
