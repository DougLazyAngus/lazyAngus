#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3425;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3670;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3414;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;

// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::.ctor()
extern "C" void XmlSchemaIdentityConstraint__ctor_m14348 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaIdentityConstraint::get_Name()
extern "C" String_t* XmlSchemaIdentityConstraint_get_Name_m14349 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Name(System.String)
extern "C" void XmlSchemaIdentityConstraint_set_Name_m14350 (XmlSchemaIdentityConstraint_t3425 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaIdentityConstraint::get_Selector()
extern "C" XmlSchemaXPath_t3670 * XmlSchemaIdentityConstraint_get_Selector_m14351 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Selector(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XmlSchemaIdentityConstraint_set_Selector_m14352 (XmlSchemaIdentityConstraint_t3425 * __this, XmlSchemaXPath_t3670 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaIdentityConstraint::get_Fields()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaIdentityConstraint_get_Fields_m14353 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaIdentityConstraint::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaIdentityConstraint_get_QualifiedName_m14354 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector System.Xml.Schema.XmlSchemaIdentityConstraint::get_CompiledSelector()
extern "C" XsdIdentitySelector_t3414 * XmlSchemaIdentityConstraint_get_CompiledSelector_m14355 (XmlSchemaIdentityConstraint_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaIdentityConstraint_SetParent_m14356 (XmlSchemaIdentityConstraint_t3425 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaIdentityConstraint::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaIdentityConstraint_Compile_m14357 (XmlSchemaIdentityConstraint_t3425 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
