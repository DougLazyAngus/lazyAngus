#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3101;
// System.Collections.ArrayList
struct ArrayList_t3102;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t3091  : public Object_t
{
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t3101 * ___namespaces_0;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t3102 * ___unhandledAttributeList_1;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t74  ___CompilationId_2;
};
