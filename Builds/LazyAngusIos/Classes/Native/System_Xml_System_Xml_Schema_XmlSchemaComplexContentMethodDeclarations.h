#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaComplexContent
struct XmlSchemaComplexContent_t3651;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t3650;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;

// System.Void System.Xml.Schema.XmlSchemaComplexContent::.ctor()
extern "C" void XmlSchemaComplexContent__ctor_m14165 (XmlSchemaComplexContent_t3651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::get_IsMixed()
extern "C" bool XmlSchemaComplexContent_get_IsMixed_m14166 (XmlSchemaComplexContent_t3651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaComplexContent::get_Content()
extern "C" XmlSchemaContent_t3650 * XmlSchemaComplexContent_get_Content_m14167 (XmlSchemaComplexContent_t3651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaComplexContent_SetParent_m14168 (XmlSchemaComplexContent_t3651 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContent_Compile_m14169 (XmlSchemaComplexContent_t3651 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContent_Validate_m14170 (XmlSchemaComplexContent_t3651 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContent System.Xml.Schema.XmlSchemaComplexContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaComplexContent_t3651 * XmlSchemaComplexContent_Read_m14171 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
