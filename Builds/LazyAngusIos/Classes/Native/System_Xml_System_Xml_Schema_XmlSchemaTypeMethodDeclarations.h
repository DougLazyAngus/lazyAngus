#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1991;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1995;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1990;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m9411 (XmlSchemaType_t1991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t1995 * XmlSchemaType_get_QualifiedName_m9412 (XmlSchemaType_t1991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t1990 * XmlSchemaType_GetBuiltInSimpleType_m9413 (Object_t * __this /* static, unused */, XmlQualifiedName_t1995 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
