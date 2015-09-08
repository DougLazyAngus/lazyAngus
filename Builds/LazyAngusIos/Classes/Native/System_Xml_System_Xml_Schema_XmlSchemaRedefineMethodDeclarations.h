#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t3683;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3627;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C" void XmlSchemaRedefine__ctor_m14445 (XmlSchemaRedefine_t3683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaRedefine_get_Items_m14446 (XmlSchemaRedefine_t3683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaRedefine_SetParent_m14447 (XmlSchemaRedefine_t3683 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaRedefine_t3683 * XmlSchemaRedefine_Read_m14448 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
