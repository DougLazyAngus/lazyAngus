#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t3429;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3428;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAnyValidationState__ctor_m12292 (XsdAnyValidationState_t3429 * __this, XmlSchemaAny_t3428 * ___any, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdAnyValidationState_EvaluateStartElement_m12293 (XsdAnyValidationState_t3429 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C" bool XsdAnyValidationState_MatchesNamespace_m12294 (XsdAnyValidationState_t3429 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C" bool XsdAnyValidationState_EvaluateEndElement_m12295 (XsdAnyValidationState_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAnyValidationState_EvaluateIsEmptiable_m12296 (XsdAnyValidationState_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
