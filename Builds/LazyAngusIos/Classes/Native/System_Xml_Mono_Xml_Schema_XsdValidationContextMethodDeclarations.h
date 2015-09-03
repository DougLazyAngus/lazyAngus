#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3417;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3416;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C" void XsdValidationContext__ctor_m12395 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C" Object_t * XsdValidationContext_get_XsiType_m12396 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C" void XsdValidationContext_set_XsiType_m12397 (XsdValidationContext_t3417 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C" XmlSchemaElement_t3416 * XsdValidationContext_get_Element_m12398 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XsdValidationContext_PushCurrentElement_m12399 (XsdValidationContext_t3417 * __this, XmlSchemaElement_t3416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C" void XsdValidationContext_PopCurrentElement_m12400 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C" Object_t * XsdValidationContext_get_ActualType_m12401 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C" bool XsdValidationContext_get_IsInvalid_m12402 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C" Object_t * XsdValidationContext_Clone_m12403 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C" void XsdValidationContext_EvaluateStartElement_m12404 (XsdValidationContext_t3417 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C" bool XsdValidationContext_EvaluateEndElement_m12405 (XsdValidationContext_t3417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
