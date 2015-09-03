#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3412;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3414;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3403;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3406;
// System.Collections.ArrayList
struct ArrayList_t712;

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable__ctor_m12248 (XsdKeyTable_t3412 * __this, XmlSchemaIdentityConstraint_t3414 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C" XmlSchemaIdentityConstraint_t3414 * XsdKeyTable_get_SourceSchemaIdentity_m12249 (XsdKeyTable_t3412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C" XsdIdentitySelector_t3403 * XsdKeyTable_get_Selector_m12250 (XsdKeyTable_t3412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable_Reset_m12251 (XsdKeyTable_t3412 * __this, XmlSchemaIdentityConstraint_t3414 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C" XsdIdentityPath_t3406 * XsdKeyTable_SelectorMatches_m12252 (XsdKeyTable_t3412 * __this, ArrayList_t712 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
