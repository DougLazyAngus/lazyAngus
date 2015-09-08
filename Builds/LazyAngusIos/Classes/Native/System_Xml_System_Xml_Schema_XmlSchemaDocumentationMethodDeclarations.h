#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDocumentation
struct XmlSchemaDocumentation_t3653;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;

// System.Void System.Xml.Schema.XmlSchemaDocumentation::.ctor()
extern "C" void XmlSchemaDocumentation__ctor_m14190 (XmlSchemaDocumentation_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::get_Markup()
extern "C" XmlNodeU5BU5D_t3635* XmlSchemaDocumentation_get_Markup_m14191 (XmlSchemaDocumentation_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDocumentation::set_Markup(System.Xml.XmlNode[])
extern "C" void XmlSchemaDocumentation_set_Markup_m14192 (XmlSchemaDocumentation_t3653 * __this, XmlNodeU5BU5D_t3635* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDocumentation System.Xml.Schema.XmlSchemaDocumentation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C" XmlSchemaDocumentation_t3653 * XmlSchemaDocumentation_Read_m14193 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
