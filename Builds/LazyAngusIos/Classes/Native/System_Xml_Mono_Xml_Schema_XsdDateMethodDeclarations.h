#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdDate
struct XsdDate_t3609;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3391;
// System.ValueType
struct ValueType_t842;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdDate::.ctor()
extern "C" void XsdDate__ctor_m13857 (XsdDate_t3609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDate::get_AllowedFacets()
extern "C" int32_t XsdDate_get_AllowedFacets_m13858 (XsdDate_t3609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDate::get_TokenizedType()
extern "C" int32_t XsdDate_get_TokenizedType_m13859 (XsdDate_t3609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDate::get_TypeCode()
extern "C" int32_t XsdDate_get_TypeCode_m13860 (XsdDate_t3609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDate::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdDate_ParseValue_m13861 (XsdDate_t3609 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDate::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdDate_ParseValueType_m13862 (XsdDate_t3609 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDate::Compare(System.Object,System.Object)
extern "C" int32_t XsdDate_Compare_m13863 (XsdDate_t3609 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
