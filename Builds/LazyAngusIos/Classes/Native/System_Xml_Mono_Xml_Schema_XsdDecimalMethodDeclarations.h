#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdDecimal
struct XsdDecimal_t3587;
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
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdDecimal::.ctor()
extern "C" void XsdDecimal__ctor_m13731 (XsdDecimal_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDecimal::get_AllowedFacets()
extern "C" int32_t XsdDecimal_get_AllowedFacets_m13732 (XsdDecimal_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDecimal::get_TokenizedType()
extern "C" int32_t XsdDecimal_get_TokenizedType_m13733 (XsdDecimal_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDecimal::get_TypeCode()
extern "C" int32_t XsdDecimal_get_TypeCode_m13734 (XsdDecimal_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDecimal::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdDecimal_ParseValue_m13735 (XsdDecimal_t3587 * __this, String_t* ___s, XmlNameTable_t3462 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDecimal::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t846 * XsdDecimal_ParseValueType_m13736 (XsdDecimal_t3587 * __this, String_t* ___s, XmlNameTable_t3462 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDecimal::Compare(System.Object,System.Object)
extern "C" int32_t XsdDecimal_Compare_m13737 (XsdDecimal_t3587 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
