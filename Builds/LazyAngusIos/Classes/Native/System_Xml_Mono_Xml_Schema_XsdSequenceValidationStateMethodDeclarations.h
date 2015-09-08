#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3424;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3423;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3419;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3421;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdSequenceValidationState__ctor_m12293 (XsdSequenceValidationState_t3424 * __this, XmlSchemaSequence_t3423 * ___sequence, XsdParticleStateManager_t3419 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3421 * XsdSequenceValidationState_EvaluateStartElement_m12294 (XsdSequenceValidationState_t3424 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C" bool XsdSequenceValidationState_EvaluateEndElement_m12295 (XsdSequenceValidationState_t3424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdSequenceValidationState_EvaluateIsEmptiable_m12296 (XsdSequenceValidationState_t3424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
