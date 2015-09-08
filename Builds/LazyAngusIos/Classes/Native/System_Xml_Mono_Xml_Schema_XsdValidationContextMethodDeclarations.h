#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3421;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C" void XsdValidationContext__ctor_m12408 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C" Object_t * XsdValidationContext_get_XsiType_m12409 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C" void XsdValidationContext_set_XsiType_m12410 (XsdValidationContext_t3421 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C" XmlSchemaElement_t3420 * XsdValidationContext_get_Element_m12411 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XsdValidationContext_PushCurrentElement_m12412 (XsdValidationContext_t3421 * __this, XmlSchemaElement_t3420 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C" void XsdValidationContext_PopCurrentElement_m12413 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C" Object_t * XsdValidationContext_get_ActualType_m12414 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C" bool XsdValidationContext_get_IsInvalid_m12415 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C" Object_t * XsdValidationContext_Clone_m12416 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C" void XsdValidationContext_EvaluateStartElement_m12417 (XsdValidationContext_t3421 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C" bool XsdValidationContext_EvaluateEndElement_m12418 (XsdValidationContext_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
