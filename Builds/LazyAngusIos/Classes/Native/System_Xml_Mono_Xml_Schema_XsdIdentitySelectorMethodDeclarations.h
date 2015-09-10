#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3414;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3412;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t3413;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3670;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t3415;

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XsdIdentitySelector__ctor_m12294 (XsdIdentitySelector_t3414 * __this, XmlSchemaXPath_t3670 * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C" XsdIdentityPathU5BU5D_t3412* XsdIdentitySelector_get_Paths_m12295 (XsdIdentitySelector_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C" void XsdIdentitySelector_AddField_m12296 (XsdIdentitySelector_t3414 * __this, XsdIdentityField_t3415 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C" XsdIdentityFieldU5BU5D_t3413* XsdIdentitySelector_get_Fields_m12297 (XsdIdentitySelector_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
