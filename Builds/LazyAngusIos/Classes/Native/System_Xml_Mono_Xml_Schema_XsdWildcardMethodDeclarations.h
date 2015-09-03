#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t3441;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3428;

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C" void XsdWildcard__ctor_m12412 (XsdWildcard_t3441 * __this, XmlSchemaObject_t3439 * ___wildcard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C" void XsdWildcard_Reset_m12413 (XsdWildcard_t3441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XsdWildcard_Compile_m12414 (XsdWildcard_t3441 * __this, String_t* ___nss, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" bool XsdWildcard_ExamineAttributeWildcardIntersection_m12415 (XsdWildcard_t3441 * __this, XmlSchemaAny_t3428 * ___other, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m12416 (XsdWildcard_t3441 * __this, String_t* ___ns, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XsdWildcard_ValidateWildcardSubset_m12417 (XsdWildcard_t3441 * __this, XsdWildcard_t3441 * ___other, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XsdWildcard_ValidateWildcardSubset_m12418 (XsdWildcard_t3441 * __this, XsdWildcard_t3441 * ___other, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
