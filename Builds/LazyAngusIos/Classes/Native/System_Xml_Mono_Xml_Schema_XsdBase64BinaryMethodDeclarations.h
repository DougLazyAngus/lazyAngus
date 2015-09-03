#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdBase64Binary
struct XsdBase64Binary_t3599;
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

// System.Void Mono.Xml.Schema.XsdBase64Binary::.ctor()
extern "C" void XsdBase64Binary__ctor_m13797 (XsdBase64Binary_t3599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdBase64Binary::.cctor()
extern "C" void XsdBase64Binary__cctor_m13798 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdBase64Binary::get_TypeCode()
extern "C" int32_t XsdBase64Binary_get_TypeCode_m13799 (XsdBase64Binary_t3599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdBase64Binary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdBase64Binary_ParseValue_m13800 (XsdBase64Binary_t3599 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdBase64Binary::Length(System.String)
extern "C" int32_t XsdBase64Binary_Length_m13801 (XsdBase64Binary_t3599 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isPad(System.Char)
extern "C" bool XsdBase64Binary_isPad_m13802 (Object_t * __this /* static, unused */, uint16_t ___octect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isData(System.Char)
extern "C" bool XsdBase64Binary_isData_m13803 (Object_t * __this /* static, unused */, uint16_t ___octect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdBase64Binary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdBase64Binary_ParseValueType_m13804 (XsdBase64Binary_t3599 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
