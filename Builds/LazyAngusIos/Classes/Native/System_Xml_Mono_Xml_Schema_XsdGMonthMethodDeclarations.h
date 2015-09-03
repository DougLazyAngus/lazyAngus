#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdGMonth
struct XsdGMonth_t3614;
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
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdGMonth::.ctor()
extern "C" void XsdGMonth__ctor_m13890 (XsdGMonth_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGMonth::get_AllowedFacets()
extern "C" int32_t XsdGMonth_get_AllowedFacets_m13891 (XsdGMonth_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGMonth::get_TypeCode()
extern "C" int32_t XsdGMonth_get_TypeCode_m13892 (XsdGMonth_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGMonth::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdGMonth_ParseValue_m13893 (XsdGMonth_t3614 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGMonth::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdGMonth_ParseValueType_m13894 (XsdGMonth_t3614 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGMonth::Compare(System.Object,System.Object)
extern "C" int32_t XsdGMonth_Compare_m13895 (XsdGMonth_t3614 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
