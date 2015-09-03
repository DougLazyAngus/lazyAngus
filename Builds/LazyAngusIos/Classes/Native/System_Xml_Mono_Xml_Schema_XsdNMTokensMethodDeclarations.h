#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdNMTokens
struct XsdNMTokens_t3574;
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
// System.String[]
struct StringU5BU5D_t75;
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdNMTokens::.ctor()
extern "C" void XsdNMTokens__ctor_m13674 (XsdNMTokens_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMTokens::get_TokenizedType()
extern "C" int32_t XsdNMTokens_get_TokenizedType_m13675 (XsdNMTokens_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMTokens::get_TypeCode()
extern "C" int32_t XsdNMTokens_get_TypeCode_m13676 (XsdNMTokens_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMTokens::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdNMTokens_ParseValue_m13677 (XsdNMTokens_t3574 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMTokens::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdNMTokens_ParseValueType_m13678 (XsdNMTokens_t3574 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdNMTokens::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t75* XsdNMTokens_GetValidatedArray_m13679 (XsdNMTokens_t3574 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
