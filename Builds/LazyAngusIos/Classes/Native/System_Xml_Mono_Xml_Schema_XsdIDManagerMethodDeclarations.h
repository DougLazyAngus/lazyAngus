#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3437;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3470;
// System.Object
struct Object_t;

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C" void XsdIDManager__ctor_m12419 (XsdIDManager_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C" ArrayList_t713 * XsdIDManager_get_MissingIDReferences_m12420 (XsdIDManager_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C" void XsdIDManager_OnStartElement_m12421 (XsdIDManager_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C" String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m12422 (XsdIDManager_t3437 * __this, XmlSchemaDatatype_t3470 * ___dt, Object_t * ___parsedValue, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C" bool XsdIDManager_HasMissingIDReferences_m12423 (XsdIDManager_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C" String_t* XsdIDManager_GetMissingIDString_m12424 (XsdIDManager_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
