#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t3414;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3412;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t3408;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3413;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t3377;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3410;
// System.Xml.XmlNameTable
struct XmlNameTable_t3462;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3395;

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C" void XsdKeyEntryField__ctor_m12246 (XsdKeyEntryField_t3414 * __this, XsdKeyEntry_t3412 * ___entry, XsdIdentityField_t3408 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C" bool XsdKeyEntryField_SetIdentityField_m12247 (XsdKeyEntryField_t3414 * __this, Object_t * ___identity, bool ___isXsiNil, XsdAnySimpleType_t3413 * ___type, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C" XsdIdentityPath_t3410 * XsdKeyEntryField_Matches_m12248 (XsdKeyEntryField_t3414 * __this, bool ___matchesAttr, Object_t * ___sender, XmlNameTable_t3462 * ___nameTable, ArrayList_t716 * ___qnameStack, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___lineInfo, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C" void XsdKeyEntryField_FillAttributeFieldValue_m12249 (XsdKeyEntryField_t3414 * __this, Object_t * ___sender, XmlNameTable_t3462 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___identity, Object_t * ___lineInfo, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
