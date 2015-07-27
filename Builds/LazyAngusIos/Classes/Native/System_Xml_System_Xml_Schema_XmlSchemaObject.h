#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t1554;
// System.Collections.ArrayList
struct ArrayList_t1555;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t1544  : public Object_t
{
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t1554 * ___namespaces_0;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t1555 * ___unhandledAttributeList_1;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t44  ___CompilationId_2;
};
