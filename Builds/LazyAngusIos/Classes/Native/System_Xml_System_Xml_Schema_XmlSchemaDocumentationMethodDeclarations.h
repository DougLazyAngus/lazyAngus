#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDocumentation
struct XmlSchemaDocumentation_t3649;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t3631;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;

// System.Void System.Xml.Schema.XmlSchemaDocumentation::.ctor()
extern "C" void XmlSchemaDocumentation__ctor_m14177 (XmlSchemaDocumentation_t3649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::get_Markup()
extern "C" XmlNodeU5BU5D_t3631* XmlSchemaDocumentation_get_Markup_m14178 (XmlSchemaDocumentation_t3649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDocumentation::set_Markup(System.Xml.XmlNode[])
extern "C" void XmlSchemaDocumentation_set_Markup_m14179 (XmlSchemaDocumentation_t3649 * __this, XmlNodeU5BU5D_t3631* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDocumentation System.Xml.Schema.XmlSchemaDocumentation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C" XmlSchemaDocumentation_t3649 * XmlSchemaDocumentation_Read_m14180 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
