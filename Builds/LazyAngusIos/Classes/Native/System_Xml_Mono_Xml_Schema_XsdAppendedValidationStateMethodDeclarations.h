#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t3430;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" void XsdAppendedValidationState__ctor_m12297 (XsdAppendedValidationState_t3430 * __this, XsdParticleStateManager_t3418 * ___manager, XsdValidationState_t3420 * ___head, XsdValidationState_t3420 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdAppendedValidationState_EvaluateStartElement_m12298 (XsdAppendedValidationState_t3430 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C" bool XsdAppendedValidationState_EvaluateEndElement_m12299 (XsdAppendedValidationState_t3430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAppendedValidationState_EvaluateIsEmptiable_m12300 (XsdAppendedValidationState_t3430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
