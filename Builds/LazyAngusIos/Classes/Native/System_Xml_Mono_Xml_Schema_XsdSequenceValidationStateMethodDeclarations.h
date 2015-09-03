#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3423;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3422;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdSequenceValidationState__ctor_m12280 (XsdSequenceValidationState_t3423 * __this, XmlSchemaSequence_t3422 * ___sequence, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdSequenceValidationState_EvaluateStartElement_m12281 (XsdSequenceValidationState_t3423 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C" bool XsdSequenceValidationState_EvaluateEndElement_m12282 (XsdSequenceValidationState_t3423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdSequenceValidationState_EvaluateIsEmptiable_m12283 (XsdSequenceValidationState_t3423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
