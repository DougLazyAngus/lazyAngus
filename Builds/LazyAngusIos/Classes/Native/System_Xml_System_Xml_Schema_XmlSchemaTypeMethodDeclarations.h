#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3174;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3178;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3173;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m10674 (XmlSchemaType_t3174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3178 * XmlSchemaType_get_QualifiedName_m10675 (XmlSchemaType_t3174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3173 * XmlSchemaType_GetBuiltInSimpleType_m10676 (Object_t * __this /* static, unused */, XmlQualifiedName_t3178 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
