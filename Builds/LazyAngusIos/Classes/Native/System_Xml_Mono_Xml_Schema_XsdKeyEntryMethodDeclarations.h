#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3409;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3413;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t3374;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Object
struct Object_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3392;

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C" void XsdKeyEntry__ctor_m12253 (XsdKeyEntry_t3409 * __this, XsdKeyTable_t3413 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C" bool XsdKeyEntry_get_KeyFound_m12254 (XsdKeyEntry_t3409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C" void XsdKeyEntry_Init_m12255 (XsdKeyEntry_t3409 * __this, XsdKeyTable_t3413 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C" bool XsdKeyEntry_CompareIdentity_m12256 (XsdKeyEntry_t3409 * __this, XsdKeyEntry_t3409 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C" void XsdKeyEntry_ProcessMatch_m12257 (XsdKeyEntry_t3409 * __this, bool ___isAttribute, ArrayList_t713 * ___qnameStack, Object_t * ___sender, XmlNameTable_t3459 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, bool ___isXsiNil, ArrayList_t713 * ___currentKeyFieldConsumers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
