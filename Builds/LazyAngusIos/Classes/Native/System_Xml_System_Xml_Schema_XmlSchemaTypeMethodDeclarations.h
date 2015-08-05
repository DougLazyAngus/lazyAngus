#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3109;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3114;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3108;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m10272 (XmlSchemaType_t3109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3114 * XmlSchemaType_get_QualifiedName_m10273 (XmlSchemaType_t3109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3108 * XmlSchemaType_GetBuiltInSimpleType_m10274 (Object_t * __this /* static, unused */, XmlQualifiedName_t3114 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
