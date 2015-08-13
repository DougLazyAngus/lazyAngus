#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3099;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3161;
// System.String
struct String_t;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C" void XmlSchemaDatatype__ctor_m10497 (XmlSchemaDatatype_t3099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C" void XmlSchemaDatatype__cctor_m10498 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType()
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaDatatype_t3099 * XmlSchemaDatatype_FromName_m10499 (Object_t * __this /* static, unused */, XmlQualifiedName_t3161 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C" XmlSchemaDatatype_t3099 * XmlSchemaDatatype_FromName_m10500 (Object_t * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
