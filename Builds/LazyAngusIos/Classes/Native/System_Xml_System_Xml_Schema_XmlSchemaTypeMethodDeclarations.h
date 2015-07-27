#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1553;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1558;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1552;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m7592 (XmlSchemaType_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t1558 * XmlSchemaType_get_QualifiedName_m7593 (XmlSchemaType_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t1552 * XmlSchemaType_GetBuiltInSimpleType_m7594 (Object_t * __this /* static, unused */, XmlQualifiedName_t1558 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
