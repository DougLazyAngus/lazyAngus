#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t3441;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3429;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" void XsdAppendedValidationState__ctor_m12367 (XsdAppendedValidationState_t3441 * __this, XsdParticleStateManager_t3429 * ___manager, XsdValidationState_t3431 * ___head, XsdValidationState_t3431 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3431 * XsdAppendedValidationState_EvaluateStartElement_m12368 (XsdAppendedValidationState_t3441 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C" bool XsdAppendedValidationState_EvaluateEndElement_m12369 (XsdAppendedValidationState_t3441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAppendedValidationState_EvaluateIsEmptiable_m12370 (XsdAppendedValidationState_t3441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
