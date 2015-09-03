#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XdtDayTimeDuration
struct XdtDayTimeDuration_t3606;
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
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XdtDayTimeDuration::.ctor()
extern "C" void XdtDayTimeDuration__ctor_m13842 (XdtDayTimeDuration_t3606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XdtDayTimeDuration::get_TypeCode()
extern "C" int32_t XdtDayTimeDuration_get_TypeCode_m13843 (XdtDayTimeDuration_t3606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XdtDayTimeDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XdtDayTimeDuration_ParseValue_m13844 (XdtDayTimeDuration_t3606 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XdtDayTimeDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XdtDayTimeDuration_ParseValueType_m13845 (XdtDayTimeDuration_t3606 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
