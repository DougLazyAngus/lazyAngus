#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIDRefs
struct XsdIDRefs_t3583;
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
// System.String[]
struct StringU5BU5D_t75;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdIDRefs::.ctor()
extern "C" void XsdIDRefs__ctor_m13711 (XsdIDRefs_t3583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdIDRefs::get_TokenizedType()
extern "C" int32_t XsdIDRefs_get_TokenizedType_m13712 (XsdIDRefs_t3583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdIDRefs::get_TypeCode()
extern "C" int32_t XsdIDRefs_get_TypeCode_m13713 (XsdIDRefs_t3583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdIDRefs::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdIDRefs_ParseValue_m13714 (XsdIDRefs_t3583 * __this, String_t* ___value, XmlNameTable_t3462 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdIDRefs::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t846 * XsdIDRefs_ParseValueType_m13715 (XsdIDRefs_t3583 * __this, String_t* ___s, XmlNameTable_t3462 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdIDRefs::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t75* XsdIDRefs_GetValidatedArray_m13716 (XsdIDRefs_t3583 * __this, String_t* ___value, XmlNameTable_t3462 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
