#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3403;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3401;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t3402;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3659;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t3404;

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XsdIdentitySelector__ctor_m12224 (XsdIdentitySelector_t3403 * __this, XmlSchemaXPath_t3659 * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C" XsdIdentityPathU5BU5D_t3401* XsdIdentitySelector_get_Paths_m12225 (XsdIdentitySelector_t3403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C" void XsdIdentitySelector_AddField_m12226 (XsdIdentitySelector_t3403 * __this, XsdIdentityField_t3404 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C" XsdIdentityFieldU5BU5D_t3402* XsdIdentitySelector_get_Fields_m12227 (XsdIdentitySelector_t3403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
