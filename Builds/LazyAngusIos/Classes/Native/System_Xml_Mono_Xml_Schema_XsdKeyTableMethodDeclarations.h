#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3423;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3425;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3414;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3417;
// System.Collections.ArrayList
struct ArrayList_t723;

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable__ctor_m12318 (XsdKeyTable_t3423 * __this, XmlSchemaIdentityConstraint_t3425 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C" XmlSchemaIdentityConstraint_t3425 * XsdKeyTable_get_SourceSchemaIdentity_m12319 (XsdKeyTable_t3423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C" XsdIdentitySelector_t3414 * XsdKeyTable_get_Selector_m12320 (XsdKeyTable_t3423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable_Reset_m12321 (XsdKeyTable_t3423 * __this, XmlSchemaIdentityConstraint_t3425 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C" XsdIdentityPath_t3417 * XsdKeyTable_SelectorMatches_m12322 (XsdKeyTable_t3423 * __this, ArrayList_t723 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
