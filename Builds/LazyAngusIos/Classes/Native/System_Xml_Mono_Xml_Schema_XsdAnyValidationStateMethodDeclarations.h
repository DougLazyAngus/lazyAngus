#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t3440;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3439;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3429;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAnyValidationState__ctor_m12362 (XsdAnyValidationState_t3440 * __this, XmlSchemaAny_t3439 * ___any, XsdParticleStateManager_t3429 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3431 * XsdAnyValidationState_EvaluateStartElement_m12363 (XsdAnyValidationState_t3440 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C" bool XsdAnyValidationState_MatchesNamespace_m12364 (XsdAnyValidationState_t3440 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C" bool XsdAnyValidationState_EvaluateEndElement_m12365 (XsdAnyValidationState_t3440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAnyValidationState_EvaluateIsEmptiable_m12366 (XsdAnyValidationState_t3440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
