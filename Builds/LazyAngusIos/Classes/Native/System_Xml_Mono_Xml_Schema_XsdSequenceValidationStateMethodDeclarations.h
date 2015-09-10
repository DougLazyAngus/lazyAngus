#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3434;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3433;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3429;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdSequenceValidationState__ctor_m12350 (XsdSequenceValidationState_t3434 * __this, XmlSchemaSequence_t3433 * ___sequence, XsdParticleStateManager_t3429 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3431 * XsdSequenceValidationState_EvaluateStartElement_m12351 (XsdSequenceValidationState_t3434 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C" bool XsdSequenceValidationState_EvaluateEndElement_m12352 (XsdSequenceValidationState_t3434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdSequenceValidationState_EvaluateIsEmptiable_m12353 (XsdSequenceValidationState_t3434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
