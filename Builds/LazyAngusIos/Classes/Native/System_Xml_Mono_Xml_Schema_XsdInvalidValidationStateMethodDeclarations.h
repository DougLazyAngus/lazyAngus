#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t3420;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3419;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3421;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdInvalidValidationState__ctor_m12318 (XsdInvalidValidationState_t3420 * __this, XsdParticleStateManager_t3419 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3421 * XsdInvalidValidationState_EvaluateStartElement_m12319 (XsdInvalidValidationState_t3420 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
extern "C" bool XsdInvalidValidationState_EvaluateEndElement_m12320 (XsdInvalidValidationState_t3420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
extern "C" bool XsdInvalidValidationState_EvaluateIsEmptiable_m12321 (XsdInvalidValidationState_t3420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
