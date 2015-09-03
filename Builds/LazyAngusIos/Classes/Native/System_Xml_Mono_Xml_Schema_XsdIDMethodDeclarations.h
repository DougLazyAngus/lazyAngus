#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdID
struct XsdID_t3577;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3391;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdID::.ctor()
extern "C" void XsdID__ctor_m13690 (XsdID_t3577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdID::get_TokenizedType()
extern "C" int32_t XsdID_get_TokenizedType_m13691 (XsdID_t3577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdID::get_TypeCode()
extern "C" int32_t XsdID_get_TypeCode_m13692 (XsdID_t3577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdID::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdID_ParseValue_m13693 (XsdID_t3577 * __this, String_t* ___s, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
