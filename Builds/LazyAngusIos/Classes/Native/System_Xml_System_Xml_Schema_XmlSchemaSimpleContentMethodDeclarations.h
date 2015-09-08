#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContent
struct XmlSchemaSimpleContent_t3681;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t3640;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3440;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3700;

// System.Void System.Xml.Schema.XmlSchemaSimpleContent::.ctor()
extern "C" void XmlSchemaSimpleContent__ctor_m14486 (XmlSchemaSimpleContent_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaSimpleContent::get_Content()
extern "C" XmlSchemaContent_t3640 * XmlSchemaSimpleContent_get_Content_m14487 (XmlSchemaSimpleContent_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContent_SetParent_m14488 (XmlSchemaSimpleContent_t3681 * __this, XmlSchemaObject_t3440 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Compile_m14489 (XmlSchemaSimpleContent_t3681 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Validate_m14490 (XmlSchemaSimpleContent_t3681 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContent System.Xml.Schema.XmlSchemaSimpleContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContent_t3681 * XmlSchemaSimpleContent_Read_m14491 (Object_t * __this /* static, unused */, XmlSchemaReader_t3700 * ___reader, ValidationEventHandler_t3438 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
