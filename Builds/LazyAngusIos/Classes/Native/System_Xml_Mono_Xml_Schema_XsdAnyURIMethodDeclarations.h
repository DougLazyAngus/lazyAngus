#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnyURI
struct XsdAnyURI_t3607;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3462;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3395;
// System.ValueType
struct ValueType_t846;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdAnyURI::.ctor()
extern "C" void XsdAnyURI__ctor_m13836 (XsdAnyURI_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnyURI::get_TokenizedType()
extern "C" int32_t XsdAnyURI_get_TokenizedType_m13837 (XsdAnyURI_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnyURI::get_TypeCode()
extern "C" int32_t XsdAnyURI_get_TypeCode_m13838 (XsdAnyURI_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnyURI::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdAnyURI_ParseValue_m13839 (XsdAnyURI_t3607 * __this, String_t* ___s, XmlNameTable_t3462 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnyURI::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t846 * XsdAnyURI_ParseValueType_m13840 (XsdAnyURI_t3607 * __this, String_t* ___s, XmlNameTable_t3462 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
