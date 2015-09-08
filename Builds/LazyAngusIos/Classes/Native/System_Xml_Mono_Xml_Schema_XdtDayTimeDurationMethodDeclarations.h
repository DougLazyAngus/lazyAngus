#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XdtDayTimeDuration
struct XdtDayTimeDuration_t3607;
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
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XdtDayTimeDuration::.ctor()
extern "C" void XdtDayTimeDuration__ctor_m13855 (XdtDayTimeDuration_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XdtDayTimeDuration::get_TypeCode()
extern "C" int32_t XdtDayTimeDuration_get_TypeCode_m13856 (XdtDayTimeDuration_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XdtDayTimeDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XdtDayTimeDuration_ParseValue_m13857 (XdtDayTimeDuration_t3607 * __this, String_t* ___s, XmlNameTable_t3459 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XdtDayTimeDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t843 * XdtDayTimeDuration_ParseValueType_m13858 (XdtDayTimeDuration_t3607 * __this, String_t* ___s, XmlNameTable_t3459 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
