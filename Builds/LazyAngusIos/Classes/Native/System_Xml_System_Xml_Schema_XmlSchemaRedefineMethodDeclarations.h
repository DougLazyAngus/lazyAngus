#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t3679;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C" void XmlSchemaRedefine__ctor_m14432 (XmlSchemaRedefine_t3679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaRedefine_get_Items_m14433 (XmlSchemaRedefine_t3679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaRedefine_SetParent_m14434 (XmlSchemaRedefine_t3679 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaRedefine_t3679 * XmlSchemaRedefine_Read_m14435 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
