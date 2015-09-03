#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContent
struct XmlSchemaSimpleContent_t3680;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t3639;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;

// System.Void System.Xml.Schema.XmlSchemaSimpleContent::.ctor()
extern "C" void XmlSchemaSimpleContent__ctor_m14473 (XmlSchemaSimpleContent_t3680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaSimpleContent::get_Content()
extern "C" XmlSchemaContent_t3639 * XmlSchemaSimpleContent_get_Content_m14474 (XmlSchemaSimpleContent_t3680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContent_SetParent_m14475 (XmlSchemaSimpleContent_t3680 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Compile_m14476 (XmlSchemaSimpleContent_t3680 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Validate_m14477 (XmlSchemaSimpleContent_t3680 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContent System.Xml.Schema.XmlSchemaSimpleContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContent_t3680 * XmlSchemaSimpleContent_Read_m14478 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
