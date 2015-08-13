#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3157;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3161;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3156;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m10521 (XmlSchemaType_t3157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3161 * XmlSchemaType_get_QualifiedName_m10522 (XmlSchemaType_t3157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3156 * XmlSchemaType_GetBuiltInSimpleType_m10523 (Object_t * __this /* static, unused */, XmlQualifiedName_t3161 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
