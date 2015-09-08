#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t3429;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3428;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3422;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3424;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdChoiceValidationState__ctor_m12297 (XsdChoiceValidationState_t3429 * __this, XmlSchemaChoice_t3428 * ___choice, XsdParticleStateManager_t3422 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3424 * XsdChoiceValidationState_EvaluateStartElement_m12298 (XsdChoiceValidationState_t3429 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C" bool XsdChoiceValidationState_EvaluateEndElement_m12299 (XsdChoiceValidationState_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdChoiceValidationState_EvaluateIsEmptiable_m12300 (XsdChoiceValidationState_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
