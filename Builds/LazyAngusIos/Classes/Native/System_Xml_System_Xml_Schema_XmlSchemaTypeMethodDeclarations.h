#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3098;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3103;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3097;

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m10202 (XmlSchemaType_t3098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3103 * XmlSchemaType_get_QualifiedName_m10203 (XmlSchemaType_t3098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3097 * XmlSchemaType_GetBuiltInSimpleType_m10204 (Object_t * __this /* static, unused */, XmlQualifiedName_t3103 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
