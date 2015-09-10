#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3432;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3427;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3429;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdElementValidationState__ctor_m12343 (XsdElementValidationState_t3432 * __this, XmlSchemaElement_t3427 * ___element, XsdParticleStateManager_t3429 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C" String_t* XsdElementValidationState_get_Name_m12344 (XsdElementValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C" String_t* XsdElementValidationState_get_NS_m12345 (XsdElementValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3431 * XsdElementValidationState_EvaluateStartElement_m12346 (XsdElementValidationState_t3432 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdValidationState_t3431 * XsdElementValidationState_CheckOccurence_m12347 (XsdElementValidationState_t3432 * __this, XmlSchemaElement_t3427 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C" bool XsdElementValidationState_EvaluateEndElement_m12348 (XsdElementValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C" bool XsdElementValidationState_EvaluateIsEmptiable_m12349 (XsdElementValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
