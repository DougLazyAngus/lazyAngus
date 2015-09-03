#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3414;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3659;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3403;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;

// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::.ctor()
extern "C" void XmlSchemaIdentityConstraint__ctor_m14278 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaIdentityConstraint::get_Name()
extern "C" String_t* XmlSchemaIdentityConstraint_get_Name_m14279 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Name(System.String)
extern "C" void XmlSchemaIdentityConstraint_set_Name_m14280 (XmlSchemaIdentityConstraint_t3414 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaIdentityConstraint::get_Selector()
extern "C" XmlSchemaXPath_t3659 * XmlSchemaIdentityConstraint_get_Selector_m14281 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Selector(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XmlSchemaIdentityConstraint_set_Selector_m14282 (XmlSchemaIdentityConstraint_t3414 * __this, XmlSchemaXPath_t3659 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaIdentityConstraint::get_Fields()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaIdentityConstraint_get_Fields_m14283 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaIdentityConstraint::get_QualifiedName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaIdentityConstraint_get_QualifiedName_m14284 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector System.Xml.Schema.XmlSchemaIdentityConstraint::get_CompiledSelector()
extern "C" XsdIdentitySelector_t3403 * XmlSchemaIdentityConstraint_get_CompiledSelector_m14285 (XmlSchemaIdentityConstraint_t3414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaIdentityConstraint_SetParent_m14286 (XmlSchemaIdentityConstraint_t3414 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaIdentityConstraint::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaIdentityConstraint_Compile_m14287 (XmlSchemaIdentityConstraint_t3414 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
