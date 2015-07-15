#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1983;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1987;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1982;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m9373 (XmlSchemaType_t1983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t1987 * XmlSchemaType_get_QualifiedName_m9374 (XmlSchemaType_t1983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t1982 * XmlSchemaType_GetBuiltInSimpleType_m9375 (Object_t * __this /* static, unused */, XmlQualifiedName_t1987 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
