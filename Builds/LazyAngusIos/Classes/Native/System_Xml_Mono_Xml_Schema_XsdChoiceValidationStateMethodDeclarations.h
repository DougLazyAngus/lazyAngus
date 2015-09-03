#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t3425;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3424;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdChoiceValidationState__ctor_m12284 (XsdChoiceValidationState_t3425 * __this, XmlSchemaChoice_t3424 * ___choice, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdChoiceValidationState_EvaluateStartElement_m12285 (XsdChoiceValidationState_t3425 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C" bool XsdChoiceValidationState_EvaluateEndElement_m12286 (XsdChoiceValidationState_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdChoiceValidationState_EvaluateIsEmptiable_m12287 (XsdChoiceValidationState_t3425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
