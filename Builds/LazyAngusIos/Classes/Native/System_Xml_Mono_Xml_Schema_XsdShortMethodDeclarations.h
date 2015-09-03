#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdShort
struct XsdShort_t3587;
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
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdShort::.ctor()
extern "C" void XsdShort__ctor_m13739 (XsdShort_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdShort::get_TypeCode()
extern "C" int32_t XsdShort_get_TypeCode_m13740 (XsdShort_t3587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdShort::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdShort_ParseValue_m13741 (XsdShort_t3587 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdShort::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t842 * XsdShort_ParseValueType_m13742 (XsdShort_t3587 * __this, String_t* ___s, XmlNameTable_t3458 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdShort::Compare(System.Object,System.Object)
extern "C" int32_t XsdShort_Compare_m13743 (XsdShort_t3587 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
