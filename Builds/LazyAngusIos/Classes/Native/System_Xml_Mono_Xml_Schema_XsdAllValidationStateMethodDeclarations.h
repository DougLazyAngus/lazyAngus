#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3431;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3430;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3422;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3424;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAllValidationState__ctor_m12301 (XsdAllValidationState_t3431 * __this, XmlSchemaAll_t3430 * ___all, XsdParticleStateManager_t3422 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3424 * XsdAllValidationState_EvaluateStartElement_m12302 (XsdAllValidationState_t3431 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C" bool XsdAllValidationState_EvaluateEndElement_m12303 (XsdAllValidationState_t3431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAllValidationState_EvaluateIsEmptiable_m12304 (XsdAllValidationState_t3431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
