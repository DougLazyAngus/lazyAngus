#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3416;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3418;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3407;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3410;
// System.Collections.ArrayList
struct ArrayList_t716;

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable__ctor_m12261 (XsdKeyTable_t3416 * __this, XmlSchemaIdentityConstraint_t3418 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C" XmlSchemaIdentityConstraint_t3418 * XsdKeyTable_get_SourceSchemaIdentity_m12262 (XsdKeyTable_t3416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C" XsdIdentitySelector_t3407 * XsdKeyTable_get_Selector_m12263 (XsdKeyTable_t3416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable_Reset_m12264 (XsdKeyTable_t3416 * __this, XmlSchemaIdentityConstraint_t3418 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C" XsdIdentityPath_t3410 * XsdKeyTable_SelectorMatches_m12265 (XsdKeyTable_t3416 * __this, ArrayList_t716 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
