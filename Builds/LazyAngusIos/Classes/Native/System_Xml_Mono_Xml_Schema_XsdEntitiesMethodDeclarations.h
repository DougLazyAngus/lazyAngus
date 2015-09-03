#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdEntities
struct XsdEntities_t3581;
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

// System.Void Mono.Xml.Schema.XsdEntities::.ctor()
extern "C" void XsdEntities__ctor_m13707 (XsdEntities_t3581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdEntities::get_TokenizedType()
extern "C" int32_t XsdEntities_get_TokenizedType_m13708 (XsdEntities_t3581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdEntities::get_TypeCode()
extern "C" int32_t XsdEntities_get_TypeCode_m13709 (XsdEntities_t3581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdEntities::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdEntities_ParseValue_m13710 (XsdEntities_t3581 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdEntities::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdEntities_ParseValueType_m13711 (XsdEntities_t3581 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdEntities::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t75* XsdEntities_GetValidatedArray_m13712 (XsdEntities_t3581 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
