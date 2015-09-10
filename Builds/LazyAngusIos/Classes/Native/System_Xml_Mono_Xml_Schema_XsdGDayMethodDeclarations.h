#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdGDay
struct XsdGDay_t3626;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3402;
// System.ValueType
struct ValueType_t853;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdGDay::.ctor()
extern "C" void XsdGDay__ctor_m13966 (XsdGDay_t3626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGDay::get_AllowedFacets()
extern "C" int32_t XsdGDay_get_AllowedFacets_m13967 (XsdGDay_t3626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGDay::get_TypeCode()
extern "C" int32_t XsdGDay_get_TypeCode_m13968 (XsdGDay_t3626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGDay::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdGDay_ParseValue_m13969 (XsdGDay_t3626 * __this, String_t* ___s, XmlNameTable_t3469 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGDay::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t853 * XsdGDay_ParseValueType_m13970 (XsdGDay_t3626 * __this, String_t* ___s, XmlNameTable_t3469 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGDay::Compare(System.Object,System.Object)
extern "C" int32_t XsdGDay_Compare_m13971 (XsdGDay_t3626 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
