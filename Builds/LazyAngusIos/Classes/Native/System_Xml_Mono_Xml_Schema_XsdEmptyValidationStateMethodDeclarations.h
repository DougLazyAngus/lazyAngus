#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3431;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdEmptyValidationState__ctor_m12301 (XsdEmptyValidationState_t3431 * __this, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdEmptyValidationState_EvaluateStartElement_m12302 (XsdEmptyValidationState_t3431 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C" bool XsdEmptyValidationState_EvaluateEndElement_m12303 (XsdEmptyValidationState_t3431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdEmptyValidationState_EvaluateIsEmptiable_m12304 (XsdEmptyValidationState_t3431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
