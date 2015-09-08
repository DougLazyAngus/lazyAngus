#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3432;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3419;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3421;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdEmptyValidationState__ctor_m12314 (XsdEmptyValidationState_t3432 * __this, XsdParticleStateManager_t3419 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3421 * XsdEmptyValidationState_EvaluateStartElement_m12315 (XsdEmptyValidationState_t3432 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C" bool XsdEmptyValidationState_EvaluateEndElement_m12316 (XsdEmptyValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdEmptyValidationState_EvaluateIsEmptiable_m12317 (XsdEmptyValidationState_t3432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
