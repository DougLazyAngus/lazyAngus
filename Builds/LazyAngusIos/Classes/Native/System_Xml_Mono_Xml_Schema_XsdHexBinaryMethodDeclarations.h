#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdHexBinary
struct XsdHexBinary_t3600;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void Mono.Xml.Schema.XsdHexBinary::.ctor()
extern "C" void XsdHexBinary__ctor_m13805 (XsdHexBinary_t3600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdHexBinary::get_AllowedFacets()
extern "C" int32_t XsdHexBinary_get_AllowedFacets_m13806 (XsdHexBinary_t3600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdHexBinary::get_TypeCode()
extern "C" int32_t XsdHexBinary_get_TypeCode_m13807 (XsdHexBinary_t3600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdHexBinary::get_TokenizedType()
extern "C" int32_t XsdHexBinary_get_TokenizedType_m13808 (XsdHexBinary_t3600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdHexBinary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdHexBinary_ParseValue_m13809 (XsdHexBinary_t3600 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdHexBinary::Length(System.String)
extern "C" int32_t XsdHexBinary_Length_m13810 (XsdHexBinary_t3600 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdHexBinary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdHexBinary_ParseValueType_m13811 (XsdHexBinary_t3600 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
