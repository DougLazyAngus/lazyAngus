#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3410;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3392;
// System.ValueType
struct ValueType_t843;
// System.String[]
struct StringU5BU5D_t75;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t3652;
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
extern "C" void XsdAnySimpleType__ctor_m13653 (XsdAnySimpleType_t3410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
extern "C" void XsdAnySimpleType__cctor_m13654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
extern "C" XsdAnySimpleType_t3410 * XsdAnySimpleType_get_Instance_m13655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
extern "C" int32_t XsdAnySimpleType_get_TypeCode_m13656 (XsdAnySimpleType_t3410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
extern "C" int32_t XsdAnySimpleType_get_TokenizedType_m13657 (XsdAnySimpleType_t3410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdAnySimpleType_ParseValue_m13658 (XsdAnySimpleType_t3410 * __this, String_t* ___s, XmlNameTable_t3459 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t843 * XsdAnySimpleType_ParseValueType_m13659 (XsdAnySimpleType_t3410 * __this, String_t* ___s, XmlNameTable_t3459 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t75* XsdAnySimpleType_ParseListValue_m13660 (XsdAnySimpleType_t3410 * __this, String_t* ___s, XmlNameTable_t3459 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C" bool XsdAnySimpleType_AllowsFacet_m13661 (XsdAnySimpleType_t3410 * __this, XmlSchemaFacet_t3652 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
extern "C" int32_t XsdAnySimpleType_Compare_m13662 (XsdAnySimpleType_t3410 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
extern "C" int32_t XsdAnySimpleType_Length_m13663 (XsdAnySimpleType_t3410 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
extern "C" int32_t XsdAnySimpleType_get_AllowedFacets_m13664 (XsdAnySimpleType_t3410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
