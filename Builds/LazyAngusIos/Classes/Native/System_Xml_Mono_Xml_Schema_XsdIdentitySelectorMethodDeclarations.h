#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3407;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3405;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t3406;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3663;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t3408;

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XsdIdentitySelector__ctor_m12237 (XsdIdentitySelector_t3407 * __this, XmlSchemaXPath_t3663 * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C" XsdIdentityPathU5BU5D_t3405* XsdIdentitySelector_get_Paths_m12238 (XsdIdentitySelector_t3407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C" void XsdIdentitySelector_AddField_m12239 (XsdIdentitySelector_t3407 * __this, XsdIdentityField_t3408 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C" XsdIdentityFieldU5BU5D_t3406* XsdIdentitySelector_get_Fields_m12240 (XsdIdentitySelector_t3407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
